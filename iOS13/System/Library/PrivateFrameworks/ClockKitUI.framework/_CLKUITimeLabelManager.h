/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
*/

@class UIView, UIColor;


@protocol _CLKUITimeLabelManager
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL animationsPaused; 
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL showSeconds; 
@required
-(void)setStyle:(id)arg1;
-(void)setMaxWidth:(double)arg1;
-(UIView *)view;
-(void)setTextColor:(id)arg1;
-(id)viewForLastBaselineLayout;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(CGSize)intrinsicSize;
-(void)updateTimeText;
-(CGSize*)sizeThatFits;
-(void)setShowSeconds:(BOOL)arg1;
-(BOOL)showSeconds;
-(UIEdgeInsets)opticalInsets;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(/*^block*/id)arg4;
-(void)setShowsDesignator:(BOOL)arg1;
-(void)sizeViewToFit;
-(id)effectiveAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1;
-(BOOL)animationsPaused;
-(void)setAnimationsPaused:(BOOL)arg1;

@end

