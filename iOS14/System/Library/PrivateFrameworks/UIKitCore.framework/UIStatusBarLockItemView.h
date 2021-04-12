/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarItemView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, _UIStatusBarLockItemPadlockView, _UIExpandingGlyphsView, NSString;

@interface UIStatusBarLockItemView : UIStatusBarItemView <CAAnimationDelegate> {

	BOOL _alongsideViewIsBecomingVisible;
	int _animationCount;
	UIView* _viewToAnimateAlongside;
	_UIStatusBarLockItemPadlockView* _padlockView;
	UIView* _textClippingView;
	_UIExpandingGlyphsView* _textView;
	double _padlockViewCenterOffsetFromForegroundViewCenter;
	UIView* _timeItemSnapshot;
	double _timeItemSnapshotCenterOffsetFromForegroundViewCenter;
	double _widthNeededDuringAnimation;
	double _widthNeededForFinalState;
	/*^block*/id _animationCompletionBlock;

}

@property (nonatomic,retain) _UIStatusBarLockItemPadlockView * padlockView;                            //@synthesize padlockView=_padlockView - In the implementation block
@property (nonatomic,retain) UIView * textClippingView;                                                //@synthesize textClippingView=_textClippingView - In the implementation block
@property (nonatomic,retain) _UIExpandingGlyphsView * textView;                                        //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) double padlockViewCenterOffsetFromForegroundViewCenter;                   //@synthesize padlockViewCenterOffsetFromForegroundViewCenter=_padlockViewCenterOffsetFromForegroundViewCenter - In the implementation block
@property (nonatomic,retain) UIView * timeItemSnapshot;                                                //@synthesize timeItemSnapshot=_timeItemSnapshot - In the implementation block
@property (assign,nonatomic) double timeItemSnapshotCenterOffsetFromForegroundViewCenter;              //@synthesize timeItemSnapshotCenterOffsetFromForegroundViewCenter=_timeItemSnapshotCenterOffsetFromForegroundViewCenter - In the implementation block
@property (assign,nonatomic) double widthNeededDuringAnimation;                                        //@synthesize widthNeededDuringAnimation=_widthNeededDuringAnimation - In the implementation block
@property (assign,nonatomic) double widthNeededForFinalState;                                          //@synthesize widthNeededForFinalState=_widthNeededForFinalState - In the implementation block
@property (assign,nonatomic) int animationCount;                                                       //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,copy) id animationCompletionBlock;                                                //@synthesize animationCompletionBlock=_animationCompletionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewToAnimateAlongside;                                   //@synthesize viewToAnimateAlongside=_viewToAnimateAlongside - In the implementation block
@property (assign,nonatomic) BOOL alongsideViewIsBecomingVisible;                                      //@synthesize alongsideViewIsBecomingVisible=_alongsideViewIsBecomingVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)lockSlideAnimationDuration;
-(_UIExpandingGlyphsView *)textView;
-(BOOL)_isAnimating;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIView *)viewToAnimateAlongside;
-(void)setViewToAnimateAlongside:(UIView *)arg1 ;
-(UIView *)textClippingView;
-(BOOL)alongsideViewIsBecomingVisible;
-(void)setAlongsideViewIsBecomingVisible:(BOOL)arg1 ;
-(void)setTextClippingView:(UIView *)arg1 ;
-(double)padlockViewCenterOffsetFromForegroundViewCenter;
-(void)setPadlockViewCenterOffsetFromForegroundViewCenter:(double)arg1 ;
-(double)timeItemSnapshotCenterOffsetFromForegroundViewCenter;
-(void)setTimeItemSnapshotCenterOffsetFromForegroundViewCenter:(double)arg1 ;
-(double)widthNeededDuringAnimation;
-(void)setWidthNeededDuringAnimation:(double)arg1 ;
-(double)widthNeededForFinalState;
-(void)setWidthNeededForFinalState:(double)arg1 ;
-(id)animationCompletionBlock;
-(void)setAnimationCompletionBlock:(id)arg1 ;
-(void)setTextView:(_UIExpandingGlyphsView *)arg1 ;
-(void)_beginAnimation;
-(int)animationCount;
-(void)setAnimationCount:(int)arg1 ;
-(BOOL)isExclusive;
-(_UIStatusBarLockItemPadlockView *)padlockView;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(double)updateContentsAndWidth;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(id)accessibilityHUDRepresentation;
-(void)_endAnimation;
-(void)jiggleCompletionBlock:(/*^block*/id)arg1 ;
-(UIView *)timeItemSnapshot;
-(void)setTimeItemSnapshot:(UIView *)arg1 ;
-(void)setPadlockView:(_UIStatusBarLockItemPadlockView *)arg1 ;
-(void)animateUnlockForegroundView:(id)arg1 timeItemSnapshot:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

