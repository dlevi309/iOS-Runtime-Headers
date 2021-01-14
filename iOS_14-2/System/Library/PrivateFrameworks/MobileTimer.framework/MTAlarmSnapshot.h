/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <MobileTimer/MTSnapshotScheduler.h>
#import <libobjc.A.dylib/MTAlarmObserver.h>

@class MTAlarmStorage, NSString;

@interface MTAlarmSnapshot : MTSnapshotScheduler <MTAlarmObserver> {

	MTAlarmStorage* _storage;

}

@property (nonatomic,readonly) MTAlarmStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldScheduleSnapshotForAlarms:(id)arg1 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(id)initWithStorage:(id)arg1 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(MTAlarmStorage *)storage;
@end

