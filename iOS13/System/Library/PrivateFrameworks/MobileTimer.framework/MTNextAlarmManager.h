/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAlarmManager *)alarmManager;
-(void)setNextAlarms:(NSSet *)arg1 ;
-(void)setAlarmManager:(MTAlarmManager *)arg1 ;
-(void)calculateNextAlarms;
-(void)_handleAlarmsDidChange;
-(NSSet *)nextAlarms;
@end

