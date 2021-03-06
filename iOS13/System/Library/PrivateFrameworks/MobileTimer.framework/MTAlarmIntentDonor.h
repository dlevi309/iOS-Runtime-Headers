/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAlarmObserver.h>

@protocol NAScheduler;
@class MTAlarmStorage, NSMutableDictionary, NSString;

@interface MTAlarmIntentDonor : NSObject <MTAlarmObserver> {

	MTAlarmStorage* _storage;
	NSMutableDictionary* _alarmsByID;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTAlarmStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * alarmsByID;              //@synthesize alarmsByID=_alarmsByID - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTAlarmStorage *)storage;
-(id)initWithStorage:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(NSMutableDictionary *)alarmsByID;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)prepareAlarms;
@end

