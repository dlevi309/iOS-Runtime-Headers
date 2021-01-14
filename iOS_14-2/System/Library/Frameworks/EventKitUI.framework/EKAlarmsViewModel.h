/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


#import <EventKitUI/EventKitUI-Structs.h>
@class EKCalendarItem, NSMutableArray;

@interface EKAlarmsViewModel : NSObject {

	BOOL _canHaveLeaveNowAlarm;
	BOOL _hasLeaveNowAlarm;
	unsigned long long _locationStatus;
	BOOL _needsUpdate;
	EKCalendarItem* _calendarItem;
	NSMutableArray* _uiAlarms;

}

@property (nonatomic,retain) EKCalendarItem * calendarItem;                    //@synthesize calendarItem=_calendarItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * uiAlarms;                        //@synthesize uiAlarms=_uiAlarms - In the implementation block
@property (assign,nonatomic) BOOL needsUpdate;                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (nonatomic,readonly) BOOL canHaveLeaveNowAlarm; 
@property (nonatomic,readonly) BOOL hasLeaveNowAlarm; 
@property (nonatomic,readonly) unsigned long long locationStatus; 
+(void)subscribeToDarwinNotifications;
+(id)labelTextForIndex:(unsigned long long)arg1 ;
+(void)unsubscribeFromDarwinNotifications;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate;
-(void)_updateLeaveNowFlags;
-(id)init;
-(unsigned long long)locationStatus;
-(void)updatedUIAlarmFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 atIndex:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateIfNeeded;
-(NSMutableArray *)uiAlarms;
-(id)createAlarmEditItemViewControllerWithFrame:(CGRect)arg1 forAlarmAtIndex:(unsigned long long)arg2 ;
-(void)setCalendarItem:(EKCalendarItem *)arg1 ;
-(id)initWithCalendarItem:(id)arg1 ;
-(void)reloadTTLLocationAuthorization:(id)arg1 ;
-(void)_updateAlarms;
-(EKCalendarItem *)calendarItem;
-(BOOL)hasLeaveNowAlarm;
-(BOOL)isAlarmEffectivelyDisabled:(id)arg1 ;
-(BOOL)canHaveLeaveNowAlarm;
-(void)setUiAlarms:(NSMutableArray *)arg1 ;
-(BOOL)_hasUIAlarmChangedFromUIAlarm:(id)arg1 toUIAlarm:(id)arg2 ;
-(void)dealloc;
@end

