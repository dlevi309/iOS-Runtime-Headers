/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIDragSetDownItemAnimationDelegate.h>

@class NSArray, _UIDragSetDownAnimationWindow, CADisplayLink, UIViewPropertyAnimator, UIWindow, NSString;

@interface _UIDragSetDownAnimation : NSObject <_UIDragSetDownItemAnimationDelegate> {

	NSArray* _itemAnimations;
	/*^block*/id _completion;
	BOOL _hasBegun;
	_UIDragSetDownAnimationWindow* _window;
	CADisplayLink* _displayLink;
	UIViewPropertyAnimator* _remainingItemsPropertyAnimator;

}

@property (nonatomic,readonly) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSetDownPropertyAnimator;
+(/*^block*/id)defaultSingleItemAnimationForPlatterView:(id)arg1 ;
+(/*^block*/id)defaultMultiItemAnimationForPlatterView:(id)arg1 ;
+(/*^block*/id)defaultDropAnimationForPlatterView:(id)arg1 ;
-(void)begin;
-(UIWindow *)window;
-(void)updateTargetedDragPreview:(id)arg1 forDragItem:(id)arg2 ;
-(id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateVisibleDroppedItems:(id)arg1 ;
-(void)updateInFlightAnimationTick:(id)arg1 ;
-(void)_allItemAnimationsCompleted;
-(void)itemAnimationReachedTarget:(id)arg1 ;
-(void)itemAnimationCompleted:(id)arg1 ;
@end

