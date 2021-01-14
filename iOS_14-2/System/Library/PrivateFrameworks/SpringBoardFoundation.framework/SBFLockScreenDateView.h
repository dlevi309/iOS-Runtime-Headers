/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class SBUILegibilityLabel, SBFLockScreenDateSubtitleDateView, SBFLockScreenDateSubtitleView, NSTimeZone, NSDate, UIColor, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView {

	SBUILegibilityLabel* _timeLabel;
	double _timeAlpha;
	double _subtitleAlpha;
	SBFLockScreenDateSubtitleDateView* _dateSubtitleView;
	SBFLockScreenDateSubtitleView* _customSubtitleView;
	NSTimeZone* _timeZone;
	BOOL _useCompactDateFormat;
	NSDate* _date;
	UIColor* _overrideTextColor;
	_UILegibilitySettings* _legibilitySettings;
	double _alignmentPercent;
	double _dateToTimeStretch;
	double _timeLegibilityStrength;
	double _subtitleLegibilityStrength;
	double _maximumSubtitleWidth;
	CGRect _restingFrame;

}

@property (assign,getter=isSubtitleHidden,nonatomic) BOOL subtitleHidden; 
@property (assign,nonatomic) BOOL useCompactDateFormat;                                       //@synthesize useCompactDateFormat=_useCompactDateFormat - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                   //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                             //@synthesize overrideTextColor=_overrideTextColor - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                      //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double timeLegibilityStrength;                                   //@synthesize timeLegibilityStrength=_timeLegibilityStrength - In the implementation block
@property (assign,nonatomic) double subtitleLegibilityStrength;                               //@synthesize subtitleLegibilityStrength=_subtitleLegibilityStrength - In the implementation block
@property (assign,nonatomic) double alignmentPercent;                                         //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
@property (assign,nonatomic) double dateToTimeStretch;                                        //@synthesize dateToTimeStretch=_dateToTimeStretch - In the implementation block
@property (assign,nonatomic) double maximumSubtitleWidth;                                     //@synthesize maximumSubtitleWidth=_maximumSubtitleWidth - In the implementation block
@property (nonatomic,readonly) double timeBaselineOffsetFromOrigin; 
@property (nonatomic,readonly) double subtitleBaselineOffsetFromOrigin; 
@property (assign,nonatomic) CGRect restingFrame;                                             //@synthesize restingFrame=_restingFrame - In the implementation block
@property (nonatomic,readonly) double contentAlpha; 
@property (nonatomic,retain) SBFLockScreenDateSubtitleView * customSubtitleView;              //@synthesize customSubtitleView=_customSubtitleView - In the implementation block
+(double)defaultHeight;
+(SCD_Struct_SB7)timeFontMetrics;
+(id)timeFont;
-(double)maximumSubtitleWidth;
-(double)contentAlpha;
-(double)timeBaselineOffsetFromOrigin;
-(void)setContentAlpha:(double)arg1 withSubtitleVisible:(BOOL)arg2 ;
-(void)setUseCompactDateFormat:(BOOL)arg1 ;
-(UIColor *)textColor;
-(BOOL)isSubtitleHidden;
-(CGRect)_subtitleViewFrameForView:(id)arg1 alignmentPercent:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSubtitleLegibilityStrength:(double)arg1 ;
-(id)_timeLabel;
-(void)_setDate:(id)arg1 inTimeZone:(id)arg2 ;
-(UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1 ;
-(UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1 ;
-(CGRect)chargingVisualInformationTimeSubtitleFrame;
-(void)_updateLabels;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(double)dateToTimeStretch;
-(void)setDateToTimeStretch:(double)arg1 ;
-(void)setSubtitleHidden:(BOOL)arg1 ;
-(CGRect)_timeLabelFrameForAlignmentPercent:(double)arg1 ;
-(void)setAlignmentPercent:(double)arg1 ;
-(double)alignmentPercent;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)_updateUsesCompactDateFormat;
-(void)layoutSubviews;
-(double)subtitleLegibilityStrength;
-(CGRect)restingFrame;
-(void)_setSubtitleAlpha:(double)arg1 ;
-(double)subtitleBaselineOffsetFromOrigin;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)useCompactDateFormat;
-(CGRect)presentationExtentForAlignmentPercent:(double)arg1 ;
-(void)_updateLabelAlpha;
-(CGRect)chargingVisualInformationTimeFrame;
-(NSDate *)date;
-(SBFLockScreenDateSubtitleView *)customSubtitleView;
-(void)setMaximumSubtitleWidth:(double)arg1 ;
-(void)updateFormat;
-(double)timeLegibilityStrength;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setRestingFrame:(CGRect)arg1 ;
-(void)setCustomSubtitleView:(SBFLockScreenDateSubtitleView *)arg1 ;
-(void)setTimeLegibilityStrength:(double)arg1 ;
@end

