/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSTimeZone, NSDate, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {

	NSTimeZone* _timeZone;
	BOOL _useCompactDateFormat;
	NSDate* _date;
	SBFLockScreenAlternateDateLabel* _alternateDateLabel;
	double _alignmentPercent;

}

@property (nonatomic,retain) SBFLockScreenAlternateDateLabel * alternateDateLabel;              //@synthesize alternateDateLabel=_alternateDateLabel - In the implementation block
@property (assign,nonatomic) double alignmentPercent;                                           //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL useCompactDateFormat;                                         //@synthesize useCompactDateFormat=_useCompactDateFormat - In the implementation block
+(id)dateTimeLunarDateFont;
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(SCD_Struct_SB7)dateTimeLunarDateFontMetrics;
+(double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
-(void)dealloc;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setStrength:(double)arg1 ;
-(void)_setupAlternateDateLabel;
-(void)_overlayCalendarDidChange;
-(void)_setDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)_updateDateLabelForCompact;
-(CGRect)alternateDateLabelFrame;
-(double)_lunarDateLabelYOffsetFromDateLabel;
-(CGRect)subtitleLabelFrame;
-(void)setAlignmentPercent:(double)arg1 ;
-(void)setUseCompactDateFormat:(BOOL)arg1 ;
-(SBFLockScreenAlternateDateLabel *)alternateDateLabel;
-(void)setAlternateDateLabel:(SBFLockScreenAlternateDateLabel *)arg1 ;
-(double)alignmentPercent;
-(BOOL)useCompactDateFormat;
@end

