/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@class UIFont, UIImage;

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
	UIImage* _inboxDisclosureImage;
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
-(id)statusGlyphForStatusType:(int)arg1 ;
-(id)init;
-(long long)_participantStatusFromDetailAttendeesStatus:(int)arg1 ;
-(double)dayOccurrenceMinimumCachedLineHeightRegular;
-(void)setWeekAllDayBaselineForLargeFormatWeekView:(double)arg1 ;
-(UIFont *)weekAllDayTodayLabelFontCompact;
-(void)setMinYearMonthHeaderFontSizeUsed:(double)arg1 ;
-(BOOL)usesLargeText;
-(void)_orientationChanged:(id)arg1 ;
-(id)inboxDisclosureImage;
-(void)_localeChanged:(id)arg1 ;
-(UIFont *)dayOccurrenceUncompressedSecondaryTextFont;
-(void)setWeekAllDayOccurrenceHeight:(double)arg1 ;
-(UIFont *)weekAllDayTodayLabelFontRegular;
-(double)minYearMonthHeaderFontSizeUsed;
-(UIFont *)weekAllDayLabelFontCompact;
-(void)_contentCategorySizeChanged:(id)arg1 ;
-(UIFont *)weekAllDayLabelFontRegular;
-(void)setWeekAllDayBaselineForSmallFormatWeekView:(double)arg1 ;
-(double)weekAllDayBaselineForLargeFormatWeekView;
-(double)dayOccurrenceMinimumCachedLineHeightCompact;
-(double)currentScaleFactor;
-(void)updateMetrics;
-(double)weekAllDayOccurrenceHeight;
-(double)dayOccurrenceMinimumCachedLineHeightSmallCompact;
-(double)dayOccurrenceMinimumCachedLineHeightSmallRegular;
-(double)weekAllDayBaselineForSmallFormatWeekView;
-(id)commentIconStringForFont:(id)arg1 ;
-(id)_dayOccurrenceFontWithStyle:(id)arg1 size:(double)arg2 regularSize:(double)arg3 ;
-(id)birthdayImageForFont:(id)arg1 ;
@end

