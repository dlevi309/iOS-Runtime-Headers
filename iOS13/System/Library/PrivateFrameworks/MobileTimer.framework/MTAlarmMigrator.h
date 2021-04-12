/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAlarms:(NSMutableArray *)arg1 ;
-(void)migrateFromOldStorage;
-(void)removeFromOldStorage;
-(MTAlarm *)sleepAlarm;
-(void)cleanUpOldNotifications;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
@end

