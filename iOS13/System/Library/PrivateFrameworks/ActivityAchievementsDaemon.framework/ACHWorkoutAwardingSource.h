/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>
#import <libobjc.A.dylib/HDDataObserver.h>
#import <libobjc.A.dylib/ACHEarnedInstanceAwarding.h>
#import <libobjc.A.dylib/ACHAchievementProgressProviding.h>

@class HDProfile, ACHEarnedInstanceAwardingEngine, ACHAchievementProgressEngine, ACHTemplateStore, ACHWorkoutUtility, NSDate, NSString;

@interface ACHWorkoutAwardingSource : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, ACHEarnedInstanceAwarding, ACHAchievementProgressProviding> {

	unsigned char _creatorDevice;
	HDProfile* _profile;
	ACHEarnedInstanceAwardingEngine* _engine;
	ACHAchievementProgressEngine* _progressProvider;
	ACHTemplateStore* _templateStore;
	ACHWorkoutUtility* _workoutUtility;
	NSDate* _currentDateOverride;
	NSString* _watchCountryCodeOverride;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHEarnedInstanceAwardingEngine * engine;                     //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic,__weak) ACHAchievementProgressEngine * progressProvider;              //@synthesize progressProvider=_progressProvider - In the implementation block
@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;                             //@synthesize templateStore=_templateStore - In the implementation block
@property (assign,nonatomic) unsigned char creatorDevice;                                         //@synthesize creatorDevice=_creatorDevice - In the implementation block
@property (assign,nonatomic,__weak) ACHWorkoutUtility * workoutUtility;                           //@synthesize workoutUtility=_workoutUtility - In the implementation block
@property (nonatomic,retain) NSDate * currentDateOverride;                                        //@synthesize currentDateOverride=_currentDateOverride - In the implementation block
@property (nonatomic,retain) NSString * watchCountryCodeOverride;                                 //@synthesize watchCountryCodeOverride=_watchCountryCodeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(ACHEarnedInstanceAwardingEngine *)engine;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(void)setEngine:(ACHEarnedInstanceAwardingEngine *)arg1 ;
-(NSString *)uniqueName;
-(id)currentDate;
-(unsigned char)creatorDevice;
-(ACHAchievementProgressEngine *)progressProvider;
-(void)setProgressProvider:(ACHAchievementProgressEngine *)arg1 ;
-(void)setCreatorDevice:(unsigned char)arg1 ;
-(NSDate *)currentDateOverride;
-(void)setCurrentDateOverride:(NSDate *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(void)daemonReady:(id)arg1 ;
-(void)samplesAdded:(id)arg1 anchor:(id)arg2 ;
-(id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2 ;
-(BOOL)providesProgressForTemplate:(id)arg1 ;
-(id)currentProgressQuantityForTemplate:(id)arg1 ;
-(id)currentGoalQuantityForTemplate:(id)arg1 ;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(ACHWorkoutUtility *)workoutUtility;
-(id)_earnedInstancesForWorkouts:(id)arg1 ;
-(BOOL)_handlesTemplate:(id)arg1 ;
-(id)_progressEnvironment;
-(id)watchCountryCode;
-(NSString *)watchCountryCodeOverride;
-(id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 creatorDevice:(unsigned char)arg4 progressProvider:(id)arg5 workoutUtility:(id)arg6 ;
-(void)setWorkoutUtility:(ACHWorkoutUtility *)arg1 ;
-(void)setWatchCountryCodeOverride:(NSString *)arg1 ;
@end

