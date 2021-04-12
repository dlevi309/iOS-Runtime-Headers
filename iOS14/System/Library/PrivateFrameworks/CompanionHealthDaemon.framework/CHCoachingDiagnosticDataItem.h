/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRunning:(double)arg1 ;
-(double)running;
-(double)unknown;
-(void)setOther:(double)arg1 ;
-(void)setUnknown:(double)arg1 ;
-(void)setBriskMinutes:(double)arg1 ;
-(double)briskMinutes;
-(id)description;
-(double)workout;
-(double)other;
-(double)cycling;
-(double)walking;
-(double)automotive;
-(double)heartRate;
-(void)setWorkout:(double)arg1 ;
-(void)setWalking:(double)arg1 ;
-(void)setAutomotive:(double)arg1 ;
-(void)setCycling:(double)arg1 ;
-(void)setHeartRate:(double)arg1 ;
-(void)setActiveCalories:(double)arg1 ;
-(double)activeCalories;
@end

