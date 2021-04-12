/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECXPCObjectFactory : NSObject {

	unsigned long long _priorityLevel;
	unsigned long long _allowBattery;
	BOOL _repeating;
	BOOL _requireScreenSleep;
	BOOL _requireClassC;
	BOOL _requireClassA;
	long long _intervalHours;
	long long _intervalMinutes;
	long long _intervalSeconds;

}

@property (assign,nonatomic) long long intervalHours;                //@synthesize intervalHours=_intervalHours - In the implementation block
@property (assign,nonatomic) long long intervalMinutes;              //@synthesize intervalMinutes=_intervalMinutes - In the implementation block
@property (assign,nonatomic) long long intervalSeconds;              //@synthesize intervalSeconds=_intervalSeconds - In the implementation block
@property (assign,nonatomic) BOOL repeating;                         //@synthesize repeating=_repeating - In the implementation block
@property (assign,nonatomic) BOOL requireScreenSleep;                //@synthesize requireScreenSleep=_requireScreenSleep - In the implementation block
@property (assign,nonatomic) BOOL requireClassC;                     //@synthesize requireClassC=_requireClassC - In the implementation block
@property (assign,nonatomic) BOOL requireClassA;                     //@synthesize requireClassA=_requireClassA - In the implementation block
-(long long)intervalSeconds;
-(void)allowBattery;
-(id)init;
-(BOOL)repeating;
-(void)setRepeating:(BOOL)arg1 ;
-(const char*)_activityPriority;
-(void)setRequireClassA:(BOOL)arg1 ;
-(void)disallowBattery;
-(void)setIntervalSeconds:(long long)arg1 ;
-(long long)intervalMinutes;
-(void)setPriorityLevelUtility;
-(BOOL)requireClassC;
-(void)setRequireClassC:(BOOL)arg1 ;
-(void)setIntervalHours:(long long)arg1 ;
-(void)setPriorityLevelMaintenance;
-(void)setRequireScreenSleep:(BOOL)arg1 ;
-(BOOL)requireClassA;
-(void)setIntervalMinutes:(long long)arg1 ;
-(BOOL)requireScreenSleep;
-(BOOL)_shouldAllowBattery;
-(id)getXPCObject;
-(long long)_getInterval;
-(long long)intervalHours;
@end

