/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtree : NSObject {

	GKCQuadTree<NSObject>* _cQuadTree;

}
+(id)quadtreeWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)init;
-(BOOL)removeElement:(id)arg1 ;
-(void)dealloc;
-(id)initWithBoundingQuad:(GKQuadRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 ;
-(id)addElement:(id)arg1 withQuad:(GKQuadRef)arg2 ;
-(id)elementsAtPoint:;
-(id)elementsInQuad:(GKQuadRef)arg1 ;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
@end

