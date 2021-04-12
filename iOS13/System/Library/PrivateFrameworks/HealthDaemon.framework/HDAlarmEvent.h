/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSDate, NSDateComponents, NSTimeZone;

@interface HDAlarmEvent : NSObject {

	NSString* _clientIdentifier;
	NSString* _eventIdentifier;
	NSDate* _dueDate;
	NSDateComponents* _dueDateComponents;
	unsigned long long _eventOptions;
	NSTimeZone* __unitTest_localTimeZoneOverride;

}

@property (nonatomic,copy) NSTimeZone * _unitTest_localTimeZoneOverride;               //@synthesize _unitTest_localTimeZoneOverride=__unitTest_localTimeZoneOverride - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientIdentifier;                       //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventIdentifier;                        //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * dueDate;                                  //@synthesize dueDate=_dueDate - In the implementation block
@property (nonatomic,copy,readonly) NSDateComponents * dueDateComponents;              //@synthesize dueDateComponents=_dueDateComponents - In the implementation block
@property (nonatomic,copy,readonly) NSDate * currentDueDate; 
@property (nonatomic,readonly) unsigned long long eventOptions;                        //@synthesize eventOptions=_eventOptions - In the implementation block
@property (nonatomic,readonly) BOOL requiresDeviceUnlocked; 
@property (nonatomic,readonly) BOOL requiresDeviceOnWrist; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)localTimeZone;
-(NSString *)clientIdentifier;
-(NSDate *)dueDate;
-(NSString *)eventIdentifier;
-(NSDateComponents *)dueDateComponents;
-(NSDate *)currentDueDate;
-(unsigned long long)eventOptions;
-(id)_initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 dueDateComponents:(id)arg4 eventOptions:(unsigned long long)arg5 ;
-(NSTimeZone *)_unitTest_localTimeZoneOverride;
-(id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 eventOptions:(unsigned long long)arg4 ;
-(id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDateComponents:(id)arg3 eventOptions:(unsigned long long)arg4 ;
-(BOOL)requiresDeviceOnWrist;
-(BOOL)requiresDeviceUnlocked;
-(void)set_unitTest_localTimeZoneOverride:(NSTimeZone *)arg1 ;
@end

