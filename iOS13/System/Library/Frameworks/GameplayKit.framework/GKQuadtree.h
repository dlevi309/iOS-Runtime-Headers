/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtree : NSObject {

	GKCQuadTree<NSObject>* _cQuadTree;

}
+(id)quadtreeWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)removeElement:(id)arg1 ;
-(id)initWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 ;
-(id)addElement:(id)arg1 withQuad:(GKQuadRef)arg2 ;
-(id)elementsAtPoint:;
-(id)elementsInQuad:(GKQuadRef)arg1 ;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
@end

