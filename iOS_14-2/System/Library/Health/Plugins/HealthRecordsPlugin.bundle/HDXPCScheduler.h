/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class NSString;

@interface HDXPCScheduler : NSObject {

	NSString* _eventName;
	/*^block*/id _runBlock;

}

@property (nonatomic,copy) id runBlock;                                //@synthesize runBlock=_runBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)schedulerWithEventNamed:(id)arg1 runBlock:(/*^block*/id)arg2 ;
-(void)_registerWithCriteria:(id)arg1 ;
-(void)_checkIn;
-(id)_criteriaForInterval:(double)arg1 gracePeriod:(double)arg2 ;
-(NSString *)eventName;
-(id)runBlock;
-(void)_dispatchBlock;
-(void)unschedule;
-(id)_identifierForEventName:(id)arg1 ;
-(id)_initWithEventNamed:(id)arg1 runBlock:(/*^block*/id)arg2 ;
-(void)scheduleWithInterval:(double)arg1 gracePeriod:(double)arg2 ;
-(void)setRunBlock:(id)arg1 ;
@end

