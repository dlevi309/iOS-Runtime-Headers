/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIView, PKSpringAnimationFactory;

@interface PKPGSVTransitionInterstitialView : UIView {

	BOOL _animated;
	unsigned long long _animationCounter;
	NSMutableArray* _completions;
	BOOL _presentingItemDirty;
	BOOL _presentedItemDirty;
	UIView* _presentingItemSnapshot;
	UIView* _presentedItemSnapshot;
	BOOL _presented;
	BOOL _invalidated;
	PKSpringAnimationFactory* _springFactory;

}

@property (nonatomic,retain) PKSpringAnimationFactory * springFactory;              //@synthesize springFactory=_springFactory - In the implementation block
@property (getter=isPresented,nonatomic,readonly) BOOL presented;                   //@synthesize presented=_presented - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;               //@synthesize invalidated=_invalidated - In the implementation block
-(BOOL)isInvalidated;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_animationForKeyPath:(id)arg1 ;
-(id)init;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)invalidate;
-(BOOL)isPresented;
-(void)_executeCompletionHandlers:(BOOL)arg1 ;
-(void)_incrementAnimationCount;
-(void)_decrementAnimationCount;
-(id)_snapshotForView:(id)arg1 ;
-(CGRect)frameForTargetFrame:(CGRect)arg1 ;
-(void)_updateFrameForTargetFrame:(CGRect)arg1 animated:(BOOL)arg2 track:(BOOL)arg3 ;
-(id)initWithPresented:(BOOL)arg1 ;
-(void)beginTrackingExternalAnimation;
-(void)endTrackingExternalAnimation;
-(void)addPresentingItem:(id)arg1 ;
-(void)addPresentedItem:(id)arg1 ;
-(void)updateFrameForTargetFrame:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)setPresented:(BOOL)arg1 withTargetFrame:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(PKSpringAnimationFactory *)springFactory;
-(void)setSpringFactory:(PKSpringAnimationFactory *)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

