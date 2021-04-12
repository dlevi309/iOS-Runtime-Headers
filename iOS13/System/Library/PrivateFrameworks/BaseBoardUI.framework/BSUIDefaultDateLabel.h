/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/BSUIDateLabel.h>

@protocol BSUIDateLabelDelegate;
@class NSDate, NSTimer, NSString;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel> {

	NSDate* _timeZoneRelativeStartDate;
	NSDate* _timeZoneRelativeEndDate;
	BOOL _allDay;
	BOOL _isTimestamp;
	NSDate* _effectiveAllDayStartDate;
	NSDate* _effectiveAllDayLastValidDate;
	NSDate* _effectiveAllDayEndDate;
	BOOL _effectiveAllDay;
	BOOL _isCoalescingUpdates;
	BOOL _needsUpdateFromCoalesce;
	NSTimer* _updateTimer;
	id<BSUIDateLabelDelegate> _delegate;
	long long _labelType;

}

@property (nonatomic,readonly) NSDate * timeZoneRelativeStartDate;                   //@synthesize timeZoneRelativeStartDate=_timeZoneRelativeStartDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                            //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic,__weak) id<BSUIDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long labelType;                                    //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp;                                       //@synthesize isTimestamp=_isTimestamp - In the implementation block
+(id)_currentCalendar;
-(id)init;
-(void)dealloc;
-(id<BSUIDateLabelDelegate>)delegate;
-(void)setDelegate:(id<BSUIDateLabelDelegate>)arg1 ;
-(void)prepareForReuse;
-(void)update;
-(long long)labelType;
-(void)setLabelType:(long long)arg1 ;
-(void)_invalidateTimer;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(NSDate *)timeZoneRelativeStartDate;
-(id)constructLabelString;
-(BOOL)isEffectiveAllDay;
-(void)updateTextIfNecessary;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setAllDay:(BOOL)arg1 ;
-(void)stopCoalescingUpdates;
-(void)_forceUpdate;
-(void)_resetModelProperties;
-(void)_updateTimerFired:(id)arg1 ;
-(void)_configureTimer;
-(id)_localDateForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(void)setTimeZoneRelativeEndDate:(id)arg1 ;
-(void)_resetEffectiveAllDayState:(BOOL)arg1 ;
-(BOOL)isDateWithinEffectiveAllDayRange:(id)arg1 ;
-(id)_constructNonAllDayLabelStringWithDate:(id)arg1 startTime:(double)arg2 startIsToday:(BOOL)arg3 sameDayDates:(BOOL)arg4 eventOngoing:(BOOL)arg5 withCurrentDate:(id)arg6 forStartLabel:(BOOL)arg7 ;
-(void)updateTextIfNecessary:(BOOL)arg1 ;
-(void)_updateEffectiveAllDayTimes;
-(BOOL)isAllDay;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
@end

