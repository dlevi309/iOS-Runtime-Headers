/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@protocol CLKTimeFormatterDelegate;
#import <ClockKit/ClockKit-Structs.h>
@class NSDate, NSString, _CLKTimeFormatterSubstringRange, NSHashTable, NSMutableSet, NSNumber, NSTimeZone;

@interface CLKTimeFormatter : NSObject {

	NSDate* _date;
	NSString* _timeText;
	NSString* _designatorText;
	NSString* _timeAndDesignatorText;
	NSString* _timeAndDesignatorTextWithoutMinutesIfZero;
	NSString* _timeSubstringToSeparatorText;
	NSString* _timeSubstringFromSeparatorText;
	_CLKTimeFormatterSubstringRange* _designatorRangeInTimeAndDesignatorText;
	_CLKTimeFormatterSubstringRange* _designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
	_CLKTimeFormatterSubstringRange* _timeRange;
	_CLKTimeFormatterSubstringRange* _separatorRangeInTimeText;
	_CLKTimeFormatterSubstringRange* _separatorRangeInTimeAndDesignatorText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeText;
	_CLKTimeFormatterSubstringRange* _lastBlinkerRangeInTimeText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeAndDesignatorText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeSubstringToSeparatorText;
	_CLKTimeFormatterSubstringRange* _blinkerRangeInTimeSubstringFromSeparatorText;
	_CLKTimeFormatterSubstringRange* _rangeInTimeSubstringFromSecondsSeparatorText;
	NSHashTable* _observers;
	NSMutableSet* _reasonsToPause;
	NSNumber* _secondsUpdateToken;
	NSNumber* _minutesUpdateToken;
	BOOL _useNarrowDesignatorTextForGerman;
	BOOL _suppressesDesignatorWhitespace;
	BOOL _includeSeparatorInTimeSubstringFromSeparatorText;
	BOOL _showSeconds;
	BOOL _forcesLatinNumbers;
	NSTimeZone* _timeZone;
	double _timeOffset;
	NSDate* _overrideDate;
	id<CLKTimeFormatterDelegate> _delegate;

}

@property (nonatomic,retain) NSTimeZone * timeZone;                                                                                                                     //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) double timeOffset;                                                                                                                         //@synthesize timeOffset=_timeOffset - In the implementation block
@property (assign,nonatomic) BOOL suppressesDesignatorWhitespace;                                                                                                       //@synthesize suppressesDesignatorWhitespace=_suppressesDesignatorWhitespace - In the implementation block
@property (nonatomic,retain) NSDate * overrideDate;                                                                                                                     //@synthesize overrideDate=_overrideDate - In the implementation block
@property (nonatomic,readonly) BOOL reportingLiveTime; 
@property (nonatomic,readonly) NSString * timeText; 
@property (nonatomic,readonly) NSString * designatorText; 
@property (nonatomic,readonly) NSString * timeAndDesignatorText; 
@property (nonatomic,readonly) NSString * timeAndDesignatorTextWithoutMinutesIfZero; 
@property (nonatomic,readonly) NSString * timeSubstringToSeparatorText; 
@property (nonatomic,readonly) NSString * timeSubstringFromSeparatorText; 
@property (assign,nonatomic) BOOL includeSeparatorInTimeSubstringFromSeparatorText;                                                                                     //@synthesize includeSeparatorInTimeSubstringFromSeparatorText=_includeSeparatorInTimeSubstringFromSeparatorText - In the implementation block
@property (nonatomic,readonly) NSRange designatorRangeInTimeAndDesignatorText; 
@property (nonatomic,readonly) NSRange designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero; 
@property (nonatomic,readonly) BOOL timeAndDesignatorTextHasDesignator; 
@property (nonatomic,readonly) BOOL timeAndDesignatorTextStartsWithDesignator; 
@property (nonatomic,readonly) NSRange separatorRangeInTimeText; 
@property (nonatomic,readonly) NSRange separatorRangeInTimeAndDesignatorText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeText; 
@property (nonatomic,readonly) NSRange lastBlinkerRangeInTimeText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeAndDesignatorText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeSubstringToSeparatorText; 
@property (nonatomic,readonly) NSRange blinkerRangeInTimeSubstringFromSeparatorText; 
@property (nonatomic,readonly) NSRange rangeInTimeSubstringFromSecondsSeparatorText; 
@property (assign,nonatomic) BOOL showSeconds;                                                                                                                          //@synthesize showSeconds=_showSeconds - In the implementation block
@property (nonatomic,readonly) BOOL forcesLatinNumbers;                                                                                                                 //@synthesize forcesLatinNumbers=_forcesLatinNumbers - In the implementation block
@property (assign,nonatomic,__weak) id<CLKTimeFormatterDelegate> delegate;                                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setUseNarrowDesignatorTextForGerman:,getter=_useNarrowDesignatorTextForGerman,nonatomic) BOOL _useNarrowDesignatorTextForGerman; 
-(id)init;
-(void)dealloc;
-(id<CLKTimeFormatterDelegate>)delegate;
-(void)setDelegate:(id<CLKTimeFormatterDelegate>)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(double)timeOffset;
-(void)_handleSignificantTimeChange;
-(void)setPaused:(BOOL)arg1 forReason:(id)arg2 ;
-(NSDate *)overrideDate;
-(void)setOverrideDate:(NSDate *)arg1 ;
-(id)initWithForcesLatinNumbers:(BOOL)arg1 ;
-(void)_invalidateDate:(id)arg1 ;
-(void)_startOrStopUpdatesIfNecessary;
-(void)_invalidateText;
-(id)_designatorRangeInTimeAndDesignatorText;
-(NSString *)timeAndDesignatorText;
-(id)_timeAndDesignatorFormatter;
-(NSRange)separatorRangeInTimeAndDesignatorText;
-(NSRange)designatorRangeInTimeAndDesignatorText;
-(NSString *)timeSubstringFromSeparatorText;
-(NSRange)separatorRangeInTimeText;
-(NSString *)timeText;
-(id)_designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
-(id)_separatorRangeInTimeText;
-(id)_separatorRangeInTimeAndDesignatorText;
-(id)_blinkerRangeInTimeText;
-(id)_lastBlinkerRangeInTimeText;
-(id)_blinkerRangeInTimeAndDesignatorText;
-(id)_blinkerRangeInTimeSubstringToSeparatorText;
-(id)_blinkerRangeInTimeSubstringFromSeparatorText;
-(id)_rangeInTimeSubstringFromSecondsSeparatorText;
-(id)_designatorRangeInText:(id)arg1 ;
-(NSString *)timeAndDesignatorTextWithoutMinutesIfZero;
-(NSString *)timeSubstringToSeparatorText;
-(void)_notifyReportingLiveTimeDidChange;
-(BOOL)reportingLiveTime;
-(void)_stopMinuteUpdates:(BOOL)arg1 ;
-(void)_stopSecondsUpdates:(BOOL)arg1 ;
-(void)_notifyTextDidChange;
-(void)setSuppressesDesignatorWhitespace:(BOOL)arg1 ;
-(BOOL)_useNarrowDesignatorTextForGerman;
-(void)_setUseNarrowDesignatorTextForGerman:(BOOL)arg1 ;
-(NSString *)designatorText;
-(void)setIncludeSeparatorInTimeSubstringFromSeparatorText:(BOOL)arg1 ;
-(NSRange)designatorRangeInTimeAndDesignatorTextWithoutMinutesIfZero;
-(BOOL)timeAndDesignatorTextHasDesignator;
-(BOOL)timeAndDesignatorTextStartsWithDesignator;
-(NSRange)blinkerRangeInTimeText;
-(NSRange)lastBlinkerRangeInTimeText;
-(NSRange)blinkerRangeInTimeAndDesignatorText;
-(NSRange)blinkerRangeInTimeSubstringToSeparatorText;
-(NSRange)blinkerRangeInTimeSubstringFromSeparatorText;
-(NSRange)rangeInTimeSubstringFromSecondsSeparatorText;
-(void)setShowSeconds:(BOOL)arg1 ;
-(BOOL)suppressesDesignatorWhitespace;
-(BOOL)includeSeparatorInTimeSubstringFromSeparatorText;
-(BOOL)showSeconds;
-(BOOL)forcesLatinNumbers;
@end

