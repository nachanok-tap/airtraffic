#ifndef PLANEUTILITY_H
#define PLANEUTILITY_H
#include "flightGenerator.h"
#include "futureCollision.h"

/* This function will print plane information from structure
 * input PLANE_T structure */
void printPlane(PLANE_T* input);

/* Updating active plane
 * return 1 for success, 0 there is no plane
 */
int updatePlane();

/* Traverse a tree (pre order traversal)
 * for find(Plane) and comparing the node
 * Argument
 *    pCurrent     -   current node
 *    flightName   -   a string for comparing
 *    foundFlight  -   for checking found node
 */
void doesExist(PLANENODE_T * pCurrent, char * flightName, PLANE_T * foundFlight);

/* Searching plane
 * @param	- flightName : Name of flight user type in
 * return found flight (can be NULL if not found)
 */
PLANE_T * searchPlane(char * flightName);

/* Printing all plane in the tree
 * using in-order traversal
 * @param	- pCurrent : refer to a current plane
 */
void printTree(PLANENODE_T * pCurrent);

/* use to call printTree function from outside */
void callPrintTree();

/* insert each plane in the tree
 * @param	- pCurrent	 : refer to a current plane
 *			- pAPlane 	 : a plane that wanted to insert
 *			- sortStatus : status of inserting(fail for find duplicated plane) 
 */
void insertChild(PLANENODE_T * pCurrent, PLANENODE_T * pNode, int * sortStatus);

/* Inserting each plane into a tree
 * @param	pAPlane - represent to a plane
 * return 0 : allocation error
 * return 1 : insertion complete
 * return 3 : found duplicate flight
 */
int insertNode(PLANE_T * pAPlane);

void resetCount();

/* Free all plane in tree
 */
void freeTree(PLANENODE_T * pCurrent);

#endif
