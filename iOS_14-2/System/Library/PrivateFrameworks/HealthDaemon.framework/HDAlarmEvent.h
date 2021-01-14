/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)eventIdentifier;
-(NSDate *)dueDate;
-(id)localTimeZone;
-(id)description;
-(NSDateComponents *)dueDateComponents;
-(NSString *)clientIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)eventOptions;
-(id)_initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 dueDateComponents:(id)arg4 eventOptions:(unsigned long long)arg5 ;
-(NSTimeZone *)_unitTest_localTimeZoneOverride;
-(id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDate:(id)arg3 eventOptions:(unsigned long long)arg4 ;
-(id)initWithClientIdentifier:(id)arg1 eventIdentifier:(id)arg2 dueDateComponents:(id)arg3 eventOptions:(unsigned long long)arg4 ;
-(NSDate *)currentDueDate;
-(BOOL)requiresDeviceOnWrist;
-(BOOL)requiresDeviceUnlocked;
-(void)set_unitTest_localTimeZoneOverride:(NSTimeZone *)arg1 ;
@end

