/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/


@protocol NAScheduler;
@class NSSet, MTAlarmManager;

@interface MTNextAlarmManager : NSObject {

	NSSet* _nextAlarms;
	/*^block*/id _updateHandler;
	id<NAScheduler> _serializer;
	MTAlarmManager* _alarmManager;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                 //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) NSSet * nextAlarms;                         //@synthesize nextAlarms=_nextAlarms - In the implementation block
@property (nonatomic,retain) MTAlarmManager * alarmManager;              //@synthesize alarmManager=_alarmManager - In the implementation block
@property (nonatomic,copy) id updateHandler;                             //@synthesize updateHandler=_updateHandler - In the implementation block
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarmManager *)alarmManager;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(id<NAScheduler>)serializer;
-(id)updateHandler;
-(void)setNextAlarms:(NSSet *)arg1 ;
-(void)calculateNextAlarms;
-(void)_handleAlarmsDidChange;
-(NSSet *)nextAlarms;
@end

