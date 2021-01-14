/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UIFocusAnimationCoordinator, NSHashTable, NSNumber;

@interface _UIFocusAnimationCoordinatorManager : NSObject {

	UIFocusAnimationCoordinator* _activeFocusAnimationCoordinator;
	NSHashTable* _unfocusingItems;
	double _lastFocusUpdateTime;
	UIFocusAnimationCoordinator* _lastFocusingItemAnimationCoordinator;
	NSNumber* _inheritedAnimationCoordinatorActiveAnimation;

}

@property (nonatomic,readonly) NSHashTable * unfocusingItems;                                                 //@synthesize unfocusingItems=_unfocusingItems - In the implementation block
@property (assign,nonatomic) double lastFocusUpdateTime;                                                      //@synthesize lastFocusUpdateTime=_lastFocusUpdateTime - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * activeFocusAnimationCoordinator;                   //@synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * lastFocusingItemAnimationCoordinator;              //@synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator - In the implementation block
@property (nonatomic,retain) NSNumber * inheritedAnimationCoordinatorActiveAnimation;                         //@synthesize inheritedAnimationCoordinatorActiveAnimation=_inheritedAnimationCoordinatorActiveAnimation - In the implementation block
-(id)init;
-(NSHashTable *)unfocusingItems;
-(UIFocusAnimationCoordinator *)activeFocusAnimationCoordinator;
-(void)setLastFocusUpdateTime:(double)arg1 ;
-(void)_performDelayedFocusingAnimationIfNecessary;
-(void)setInheritedAnimationCoordinatorActiveAnimation:(NSNumber *)arg1 ;
-(void)setActiveFocusAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(double)lastFocusUpdateTime;
-(void)setLastFocusingItemAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(UIFocusAnimationCoordinator *)lastFocusingItemAnimationCoordinator;
-(id)willUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2 ;
-(NSNumber *)inheritedAnimationCoordinatorActiveAnimation;
@end

