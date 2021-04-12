/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion, NSMutableArray;

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {

	_UIStatusBarDisplayItemPlacement* _placement;
	_UIStatusBarRegion* _region;
	NSMutableArray* _relations;

}

@property (nonatomic,retain) NSMutableArray * relations;                                          //@synthesize relations=_relations - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItemPlacement * placement;                      //@synthesize placement=_placement - In the implementation block
@property (nonatomic,__weak,readonly) _UIStatusBarRegion * region;                                //@synthesize region=_region - In the implementation block
@property (getter=areRelationsFulfilled,nonatomic,readonly) BOOL relationsFulfilled; 
@property (nonatomic,readonly) BOOL canBeEnabled; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) long long priority; 
+(id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2 ;
-(id)description;
-(long long)priority;
-(BOOL)isEnabled;
-(_UIStatusBarRegion *)region;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(BOOL)canBeEnabled;
-(BOOL)areRelationsFulfilled;
-(NSMutableArray *)relations;
-(void)setRelations:(NSMutableArray *)arg1 ;
@end

