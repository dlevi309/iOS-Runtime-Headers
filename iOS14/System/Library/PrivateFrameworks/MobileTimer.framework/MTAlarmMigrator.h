/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@class NSMutableArray, MTAlarm;

@interface MTAlarmMigrator : NSObject {

	NSMutableArray* _alarms;
	MTAlarm* _sleepAlarm;

}

@property (nonatomic,retain) NSMutableArray * alarms;              //@synthesize alarms=_alarms - In the implementation block
@property (nonatomic,retain) MTAlarm * sleepAlarm;                 //@synthesize sleepAlarm=_sleepAlarm - In the implementation block
-(NSMutableArray *)alarms;
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(void)migrateFromOldStorage;
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)removeFromOldStorage;
-(void)cleanUpOldNotifications;
@end

