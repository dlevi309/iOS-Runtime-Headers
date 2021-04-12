/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(SCD_Struct_SB7)dateTimeLunarDateFontMetrics;
+(id)dateTimeLunarDateFont;
+(double)subtitleLabelToLunarDateLabelBaselineDifferenceY;
-(void)setUseCompactDateFormat:(BOOL)arg1 ;
-(void)setStrength:(double)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(SBFLockScreenAlternateDateLabel *)alternateDateLabel;
-(void)_setDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setAlignmentPercent:(double)arg1 ;
-(double)alignmentPercent;
-(void)_updateDateLabelForCompact;
-(void)layoutSubviews;
-(double)_lunarDateLabelYOffsetFromDateLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_setupAlternateDateLabel;
-(BOOL)useCompactDateFormat;
-(void)_overlayCalendarDidChange;
-(CGRect)alternateDateLabelFrame;
-(NSDate *)date;
-(CGRect)subtitleLabelFrame;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAlternateDateLabel:(SBFLockScreenAlternateDateLabel *)arg1 ;
-(void)dealloc;
@end

