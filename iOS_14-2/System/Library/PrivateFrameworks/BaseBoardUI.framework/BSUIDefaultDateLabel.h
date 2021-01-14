/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <UIKitCore/UILabel.h>
#import <libobjc.A.dylib/BSUIDateLabel.h>

@protocol BSUIDateLabelDelegate;
@class NSDate, NSTimer, NSString;

@interface BSUIDefaultDateLabel : UILabel <BSUIDateLabel> {

	NSDate* _timeZoneRelativeEndDate;
	NSDate* _effectiveAllDayStartDate;
	NSDate* _effectiveAllDayLastValidDate;
	NSDate* _effectiveAllDayEndDate;
	BOOL _effectiveAllDay;
	BOOL _isCoalescingUpdates;
	BOOL _needsUpdateFromCoalesce;
	NSTimer* _updateTimer;
	BOOL _allDay;
	BOOL _isTimestamp;
	id<BSUIDateLabelDelegate> _delegate;
	long long _labelType;
	NSDate* _timeZoneRelativeStartDate;

}

@property (nonatomic,readonly) NSDate * timeZoneRelativeStartDate;                   //@synthesize timeZoneRelativeStartDate=_timeZoneRelativeStartDate - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                            //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic,__weak) id<BSUIDateLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long labelType;                                    //@synthesize labelType=_labelType - In the implementation block
@property (assign,nonatomic) BOOL isTimestamp;                                       //@synthesize isTimestamp=_isTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)isAllDay;
-(id)init;
-(id<BSUIDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(id)constructLabelString;
-(void)setTimeZoneRelativeStartDate:(id)arg1 absoluteStartDate:(id)arg2 ;
-(NSDate *)timeZoneRelativeStartDate;
-(BOOL)isEffectiveAllDay;
-(void)updateTextIfNecessary;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2 ;
-(void)stopCoalescingUpdates;
-(void)_forceUpdate;
-(void)_updateTimerFired:(id)arg1 ;
-(void)setTimeZoneRelativeEndDate:(id)arg1 ;
-(BOOL)isDateWithinEffectiveAllDayRange:(id)arg1 ;
-(BOOL)isTimestamp;
-(void)setIsTimestamp:(BOOL)arg1 ;
-(void)setDelegate:(id<BSUIDateLabelDelegate>)arg1 ;
-(void)update;
-(void)setLabelType:(long long)arg1 ;
-(long long)labelType;
-(void)dealloc;
@end

