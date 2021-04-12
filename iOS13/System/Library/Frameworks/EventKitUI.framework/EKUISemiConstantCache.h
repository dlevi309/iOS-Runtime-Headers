/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class UIFont;

@interface EKUISemiConstantCache : NSObject {

	BOOL _calInterfaceIsLeftToRight;
	BOOL _usesLargeText;
	double _dayOccurrenceMinimumCachedLineHeightCompact;
	double _dayOccurrenceMinimumCachedLineHeightRegular;
	double _dayOccurrenceMinimumCachedLineHeightSmallCompact;
	double _dayOccurrenceMinimumCachedLineHeightSmallRegular;
	UIFont* _dayOccurrenceUncompressedSecondaryTextFont;
	double _weekAllDayBaselineForLargeFormatWeekView;
	double _weekAllDayBaselineForSmallFormatWeekView;
	UIFont* _weekAllDayLabelFontCompact;
	UIFont* _weekAllDayLabelFontRegular;
	UIFont* _weekAllDayTodayLabelFontCompact;
	double _currentScaleFactor;
	double _weekAllDayOccurrenceHeight;
	double _minYearMonthHeaderFontSizeUsed;

}

@property (readonly) BOOL usesLargeText;                                                   //@synthesize usesLargeText=_usesLargeText - In the implementation block
@property (readonly) double currentScaleFactor;                                            //@synthesize currentScaleFactor=_currentScaleFactor - In the implementation block
@property (readonly) double dayOccurrenceMinimumCachedLineHeightCompact; 
@property (readonly) double dayOccurrenceMinimumCachedLineHeightRegular; 
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallCompact; 
@property (readonly) double dayOccurrenceMinimumCachedLineHeightSmallRegular; 
@property (readonly) UIFont * dayOccurrenceUncompressedSecondaryTextFont; 
@property (assign) double weekAllDayBaselineForLargeFormatWeekView;                        //@synthesize weekAllDayBaselineForLargeFormatWeekView=_weekAllDayBaselineForLargeFormatWeekView - In the implementation block
@property (assign) double weekAllDayBaselineForSmallFormatWeekView;                        //@synthesize weekAllDayBaselineForSmallFormatWeekView=_weekAllDayBaselineForSmallFormatWeekView - In the implementation block
@property (assign) double weekAllDayOccurrenceHeight;                                      //@synthesize weekAllDayOccurrenceHeight=_weekAllDayOccurrenceHeight - In the implementation block
@property (readonly) UIFont * weekAllDayLabelFontCompact; 
@property (readonly) UIFont * weekAllDayLabelFontRegular; 
@property (readonly) UIFont * weekAllDayTodayLabelFontCompact; 
@property (readonly) UIFont * weekAllDayTodayLabelFontRegular; 
@property (assign) double minYearMonthHeaderFontSizeUsed;                                  //@synthesize minYearMonthHeaderFontSizeUsed=_minYearMonthHeaderFontSizeUsed - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_orientationChanged:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)_contentCategorySizeChanged:(id)arg1 ;
-(void)updateMetrics;
-(void)setWeekAllDayOccurrenceHeight:(double)arg1 ;
-(id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3 ;
-(long long)_participantStatusFromDetailAttendeesStatus:(int)arg1 ;
-(UIFont *)weekAllDayLabelFontRegular;
-(double)dayOccurrenceMinimumCachedLineHeightCompact;
-(double)dayOccurrenceMinimumCachedLineHeightRegular;
-(UIFont *)dayOccurrenceUncompressedSecondaryTextFont;
-(double)dayOccurrenceMinimumCachedLineHeightSmallCompact;
-(double)dayOccurrenceMinimumCachedLineHeightSmallRegular;
-(id)commentIconStringForFont:(id)arg1 ;
-(id)statusGlyphForStatusType:(int)arg1 ;
-(id)birthdayImageForFont:(id)arg1 ;
-(UIFont *)weekAllDayLabelFontCompact;
-(UIFont *)weekAllDayTodayLabelFontCompact;
-(UIFont *)weekAllDayTodayLabelFontRegular;
-(BOOL)usesLargeText;
-(double)currentScaleFactor;
-(double)weekAllDayBaselineForLargeFormatWeekView;
-(void)setWeekAllDayBaselineForLargeFormatWeekView:(double)arg1 ;
-(double)weekAllDayBaselineForSmallFormatWeekView;
-(void)setWeekAllDayBaselineForSmallFormatWeekView:(double)arg1 ;
-(double)weekAllDayOccurrenceHeight;
-(double)minYearMonthHeaderFontSizeUsed;
-(void)setMinYearMonthHeaderFontSizeUsed:(double)arg1 ;
@end

