/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class _UIStatusBarImageView, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarLockView : UIView <CAAnimationDelegate, _UIStatusBarDisplayable> {

	_UIStatusBarImageView* _bodyView;
	_UIStatusBarImageView* _shackleView;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) _UIStatusBarImageView * bodyView;                                       //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) _UIStatusBarImageView * shackleView;                                    //@synthesize shackleView=_shackleView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(void)applyStyleAttributes:(id)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)resetLock;
-(void)animateUnlockWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)jiggleWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)prefersBaselineAlignment;
-(_UIStatusBarImageView *)bodyView;
-(_UIStatusBarImageView *)shackleView;
-(void)setBodyView:(_UIStatusBarImageView *)arg1 ;
-(void)setShackleView:(_UIStatusBarImageView *)arg1 ;
@end

