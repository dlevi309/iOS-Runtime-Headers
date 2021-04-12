/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
*/


@interface CHCoachingDiagnosticDataItem : NSObject {

	double _walking;
	double _automotive;
	double _cycling;
	double _running;
	double _other;
	double _unknown;
	double _workout;
	double _heartRate;
	double _activeCalories;
	double _briskMinutes;

}

@property (assign,nonatomic) double walking;                     //@synthesize walking=_walking - In the implementation block
@property (assign,nonatomic) double automotive;                  //@synthesize automotive=_automotive - In the implementation block
@property (assign,nonatomic) double cycling;                     //@synthesize cycling=_cycling - In the implementation block
@property (assign,nonatomic) double running;                     //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) double other;                       //@synthesize other=_other - In the implementation block
@property (assign,nonatomic) double unknown;                     //@synthesize unknown=_unknown - In the implementation block
@property (assign,nonatomic) double workout;                     //@synthesize workout=_workout - In the implementation block
@property (assign,nonatomic) double heartRate;                   //@synthesize heartRate=_heartRate - In the implementation block
@property (assign,nonatomic) double activeCalories;              //@synthesize activeCalories=_activeCalories - In the implementation block
@property (assign,nonatomic) double briskMinutes;                //@synthesize briskMinutes=_briskMinutes - In the implementation block
-(id)description;
-(double)walking;
-(double)unknown;
-(double)running;
-(double)cycling;
-(double)automotive;
-(void)setRunning:(double)arg1 ;
-(void)setUnknown:(double)arg1 ;
-(double)heartRate;
-(void)setBriskMinutes:(double)arg1 ;
-(double)briskMinutes;
-(void)setOther:(double)arg1 ;
-(double)other;
-(double)workout;
-(void)setWalking:(double)arg1 ;
-(void)setCycling:(double)arg1 ;
-(void)setAutomotive:(double)arg1 ;
-(void)setWorkout:(double)arg1 ;
-(void)setActiveCalories:(double)arg1 ;
-(void)setHeartRate:(double)arg1 ;
-(double)activeCalories;
@end

