/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, HDDemoDataGeneratorWorkoutConfiguration;

@interface HDDemoDataGeneratorState : NSObject <NSSecureCoding> {

	BOOL _createdFromNSKeyedUnarchiver;
	BOOL _finished;
	BOOL _firstRun;
	BOOL _coreTraining;
	BOOL _dancing;
	BOOL _functionalStrengthTraining;
	NSDate* _firstSampleDate;
	NSDate* _lastSampleDate;
	NSDate* _lastRunDate;
	long long _currentDay;
	double _startTime;
	double _currentTime;
	double _endTime;
	HDDemoDataGeneratorWorkoutConfiguration* _workoutConfiguration;

}

@property (nonatomic,retain) NSDate * firstSampleDate;                                                           //@synthesize firstSampleDate=_firstSampleDate - In the implementation block
@property (nonatomic,retain) NSDate * lastSampleDate;                                                            //@synthesize lastSampleDate=_lastSampleDate - In the implementation block
@property (nonatomic,retain) NSDate * lastRunDate;                                                               //@synthesize lastRunDate=_lastRunDate - In the implementation block
@property (assign,nonatomic) long long currentDay;                                                               //@synthesize currentDay=_currentDay - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate; 
@property (assign,nonatomic) double startTime;                                                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double currentTime;                                                                 //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double endTime;                                                                     //@synthesize endTime=_endTime - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                                                    //@synthesize finished=_finished - In the implementation block
@property (assign,getter=isFirstRun,nonatomic) BOOL firstRun;                                                    //@synthesize firstRun=_firstRun - In the implementation block
@property (getter=isExercising,nonatomic,readonly) BOOL exercising; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isCycling,nonatomic,readonly) BOOL cycling; 
@property (getter=isSwimming,nonatomic,readonly) BOOL swimming; 
@property (getter=isDoingHIIT,nonatomic,readonly) BOOL doingHIIT; 
@property (getter=isWalking,nonatomic,readonly) BOOL walking; 
@property (getter=isDoingElliptical,nonatomic,readonly) BOOL doingElliptical; 
@property (getter=isDoingYoga,nonatomic,readonly) BOOL doingYoga; 
@property (getter=isHiking,nonatomic,readonly) BOOL hiking; 
@property (getter=isCoreTraining,nonatomic,readonly) BOOL coreTraining;                                          //@synthesize coreTraining=_coreTraining - In the implementation block
@property (getter=isDancing,nonatomic,readonly) BOOL dancing;                                                    //@synthesize dancing=_dancing - In the implementation block
@property (getter=isFunctionalStrengthTraining,nonatomic,readonly) BOOL functionalStrengthTraining;              //@synthesize functionalStrengthTraining=_functionalStrengthTraining - In the implementation block
@property (getter=isCoolingDown,nonatomic,readonly) BOOL coolingDown; 
@property (nonatomic,retain) HDDemoDataGeneratorWorkoutConfiguration * workoutConfiguration;                     //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (nonatomic,readonly) long long calendarDay; 
+(BOOL)supportsSecureCoding;
-(NSDate *)currentDate;
-(id)init;
-(void)setStartTime:(double)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isFinished;
-(double)currentTime;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isRunning;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isWalking;
-(BOOL)isCycling;
-(void)setEndTime:(double)arg1 ;
-(void)setWorkoutConfiguration:(HDDemoDataGeneratorWorkoutConfiguration *)arg1 ;
-(double)endTime;
-(void)setLastSampleDate:(NSDate *)arg1 ;
-(double)startTime;
-(HDDemoDataGeneratorWorkoutConfiguration *)workoutConfiguration;
-(NSDate *)lastSampleDate;
-(BOOL)isFirstRun;
-(BOOL)isHiking;
-(BOOL)createdFromNSKeyedUnarchiver;
-(BOOL)isExercising;
-(NSDate *)firstSampleDate;
-(BOOL)isSwimming;
-(BOOL)isDoingHIIT;
-(BOOL)isDoingElliptical;
-(BOOL)isDoingYoga;
-(BOOL)isDoingCoreTraining;
-(BOOL)isDoingCardioDance;
-(BOOL)isDoingFunctionalStrengthTraining;
-(BOOL)isCoolingDown;
-(void)setCurrentDay:(long long)arg1 ;
-(long long)calendarDay;
-(void)setFirstSampleDate:(NSDate *)arg1 ;
-(NSDate *)lastRunDate;
-(void)setLastRunDate:(NSDate *)arg1 ;
-(long long)currentDay;
-(void)setFirstRun:(BOOL)arg1 ;
-(BOOL)isCoreTraining;
-(BOOL)isDancing;
-(BOOL)isFunctionalStrengthTraining;
@end

