/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_CLKUITimeLabelManager.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>

@class CLKTimeFormatter, _CLKUIBasicTimeLabelManager, NSNumber, UIView, UIColor, NSString;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver> {

	CLKTimeFormatter* _timeFormatter;
	_CLKUIBasicTimeLabelManager* _numbersLabelManager;
	_CLKUIBasicTimeLabelManager* _blinkerLabelManager;
	NSNumber* _blinkTimerToken;
	BOOL _animationsPaused;
	BOOL _showSeconds;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL animationsPaused;                     //@synthesize animationsPaused=_animationsPaused - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL showSeconds;                          //@synthesize showSeconds=_showSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(void)setMaxWidth:(double)arg1 ;
-(UIView *)view;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(CGSize)intrinsicSize;
-(void)updateTimeText;
-(CGSize)sizeThatFits;
-(void)timeFormatterReportingLiveTimeDidChange:(id)arg1 ;
-(void)setShowSeconds:(BOOL)arg1 ;
-(BOOL)showSeconds;
-(void)_startBlinking;
-(void)_stopBlinking;
-(UIEdgeInsets)opticalInsets;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(/*^block*/id)arg4 ;
-(void)setShowsDesignator:(BOOL)arg1 ;
-(void)sizeViewToFit;
-(id)effectiveAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)animationsPaused;
-(void)setAnimationsPaused:(BOOL)arg1 ;
-(void)_startOrStopBlinking;
-(void)_updateBlinkerAlphaForSecondFraction:(double)arg1 ;
@end

