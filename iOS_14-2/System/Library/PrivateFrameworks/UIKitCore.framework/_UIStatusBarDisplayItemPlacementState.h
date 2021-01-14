/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableArray *)relations;
-(_UIStatusBarRegion *)region;
-(_UIStatusBarDisplayItemPlacement *)placement;
-(BOOL)canBeEnabled;
-(void)setRelations:(NSMutableArray *)arg1 ;
-(id)description;
-(BOOL)areRelationsFulfilled;
-(BOOL)isEnabled;
-(long long)priority;
@end

