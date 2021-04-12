/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKOctree : NSObject {

	GKCOctree<NSObject>* _cOctree;

}
+(id)octreeWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)removeElement:(id)arg1 ;
-(id)addElement:(id)arg1 ;
-(id)elementsAtPoint:;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
-(id)initWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 withBox:(GKBoxRef)arg2 ;
-(id)elementsInBox:(GKBoxRef)arg1 ;
@end

