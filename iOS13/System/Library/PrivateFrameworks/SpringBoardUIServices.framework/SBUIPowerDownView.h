/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_UIActionSliderDelegate.h>
#import <libobjc.A.dylib/SBUIPowerDownViewInterface.h>

@protocol SBUIPowerDownViewDelegate;
@class NSTimer, UIView, SBUIShapeView, _UIActionSlider, UIButton, UILabel, NSString;

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface> {

	NSTimer* _autoDismissTimer;
	UIView* _backdropView;
	SBUIShapeView* _darkeningUnderlayView;
	UIView* _darkeningOverlayView;
	_UIActionSlider* _actionSlider;
	UIButton* _cancelButton;
	UILabel* _cancelLabel;
	id<SBUIPowerDownViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBUIPowerDownViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<SBUIPowerDownViewDelegate>)delegate;
-(void)setDelegate:(id<SBUIPowerDownViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)showAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2 ;
-(void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2 ;
-(void)actionSliderDidCompleteSlide:(id)arg1 ;
-(void)actionSliderDidCancelSlide:(id)arg1 ;
-(void)actionSliderDidBeginSlide:(id)arg1 ;
-(void)_idleTimerFired;
-(void)_cancelButtonTapped;
-(void)_cancelAutoDismissTimer;
-(void)_updateSliderExclusionPath;
-(void)_willAnimateIn;
-(void)_resetAutoDismissTimer;
-(void)_willAnimateOut;
-(BOOL)_isLandscapeAspectRatio;
-(void)_powerDownSliderDidBeginSlide;
-(void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1 ;
-(void)_powerDownSliderDidCompleteSlide;
-(void)_powerDownSliderDidCancelSlide;
-(void)_animatePowerDown;
-(void)_notifyDelegateCancelled;
-(void)_notifyDelegatePowerDown;
-(void)hideAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

