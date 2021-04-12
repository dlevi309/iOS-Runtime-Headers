/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKOctree : NSObject {

	GKCOctree<NSObject>* _cOctree;

}
+(id)octreeWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)init;
-(BOOL)removeElement:(id)arg1 ;
-(void)dealloc;
-(id)addElement:(id)arg1 ;
-(id)elementsAtPoint:;
-(BOOL)removeElement:(id)arg1 withNode:(id)arg2 ;
-(id)initWithBoundingBox:(GKBoxRef)arg1 minimumCellSize:(float)arg2 ;
-(id)addElement:(id)arg1 withBox:(GKBoxRef)arg2 ;
-(id)elementsInBox:(GKBoxRef)arg1 ;
@end

