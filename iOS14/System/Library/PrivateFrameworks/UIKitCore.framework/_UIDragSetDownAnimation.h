/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	UIWindow* _coordinateContainerWindow;

}

@property (nonatomic,retain) UIWindow * coordinateContainerWindow;              //@synthesize coordinateContainerWindow=_coordinateContainerWindow - In the implementation block
@property (nonatomic,readonly) UIWindow * window; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSetDownPropertyAnimator;
+(/*^block*/id)defaultSingleItemAnimationForPlatterView:(id)arg1 ;
+(/*^block*/id)defaultMultiItemAnimationForPlatterView:(id)arg1 ;
+(/*^block*/id)defaultDropAnimationForPlatterView:(id)arg1 ;
+(BOOL)canAnimateItems:(id)arg1 forSource:(BOOL)arg2 policyDriven:(BOOL)arg3 ;
-(id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(BOOL)arg3 policyDriven:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)begin;
-(void)_allItemAnimationsCompleted;
-(void)updateInFlightAnimationTick:(id)arg1 ;
-(void)itemAnimationReachedTarget:(id)arg1 ;
-(void)itemAnimationCompleted:(id)arg1 ;
-(void)setCoordinateContainerWindow:(UIWindow *)arg1 ;
-(void)updateTargetedDragPreview:(id)arg1 forDragItem:(id)arg2 ;
-(UIWindow *)window;
-(UIWindow *)coordinateContainerWindow;
-(void)updateVisibleDroppedItems:(id)arg1 ;
@end

