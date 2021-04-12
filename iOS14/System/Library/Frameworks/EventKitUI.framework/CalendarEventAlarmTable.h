/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol CalendarEventAlarmTableDelegate, EKStyleProvider;
@class NSString, NSIndexPath;

@interface CalendarEventAlarmTable : UITableView <UITableViewDelegate, UITableViewDataSource> {

	long long _alarmIdentifier;
	NSString* _customString;
	BOOL _immediateAlarmCreation;
	NSIndexPath* _selectedItem;
	BOOL _useAllDayAlarms;
	BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
	BOOL _customSelected;
	BOOL _shouldShowLeaveNowOption;
	BOOL _leaveNowAlarmSelected;
	BOOL _eventHasTravelTime;
	id<CalendarEventAlarmTableDelegate> _alarmTableDelegate;
	id<EKStyleProvider> _styleProvider;
	unsigned long long _timeToLeaveLocationStatus;

}

@property (assign,nonatomic,__weak) id<CalendarEventAlarmTableDelegate> alarmTableDelegate;              //@synthesize alarmTableDelegate=_alarmTableDelegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL useAllDayAlarms;                                                       //@synthesize useAllDayAlarms=_useAllDayAlarms - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate;                             //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) BOOL customSelected;                                                        //@synthesize customSelected=_customSelected - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLeaveNowOption;                                              //@synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption - In the implementation block
@property (assign,nonatomic) BOOL leaveNowAlarmSelected;                                                 //@synthesize leaveNowAlarmSelected=_leaveNowAlarmSelected - In the implementation block
@property (assign,nonatomic) BOOL eventHasTravelTime;                                                    //@synthesize eventHasTravelTime=_eventHasTravelTime - In the implementation block
@property (assign,nonatomic) unsigned long long timeToLeaveLocationStatus;                               //@synthesize timeToLeaveLocationStatus=_timeToLeaveLocationStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)customSelected;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<EKStyleProvider>)styleProvider;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(void)setTimeToLeaveLocationStatus:(unsigned long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)_indexPathForPresetIdentifier:(long long)arg1 ;
-(void)setLeaveNowAlarmSelected:(BOOL)arg1 ;
-(unsigned long long)countOfPresets;
-(long long)_presetIdentifierForRow:(long long)arg1 ;
-(int)intervalForPresetIdentifier:(long long)arg1 ;
-(BOOL)useAllDayAlarms;
-(BOOL)eventHasTravelTime;
-(BOOL)timeToLeaveAlarmIsEffectivelyDisabled;
-(void)setCustomString:(id)arg1 ;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(long long)presetIdentifier;
-(BOOL)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(long long)arg1 ;
-(void)setCustomSelected:(BOOL)arg1 ;
-(long long)presetIdentifierAtIndex:(unsigned long long)arg1 ;
-(id<CalendarEventAlarmTableDelegate>)alarmTableDelegate;
-(void)setAlarmTableDelegate:(id<CalendarEventAlarmTableDelegate>)arg1 ;
-(void)setUseAllDayAlarms:(BOOL)arg1 ;
-(BOOL)shouldShowLeaveNowOption;
-(BOOL)leaveNowAlarmSelected;
-(unsigned long long)timeToLeaveLocationStatus;
-(void)_selectIndexPath:(id)arg1 ;
-(void)setEventHasTravelTime:(BOOL)arg1 ;
-(void)setShouldShowLeaveNowOption:(BOOL)arg1 ;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(BOOL)arg1 ;
@end

