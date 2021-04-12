/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)eventName;
-(void)_checkIn;
-(void)unschedule;
-(id)runBlock;
-(id)_initWithEventNamed:(id)arg1 runBlock:(/*^block*/id)arg2 ;
-(id)_criteriaForInterval:(double)arg1 gracePeriod:(double)arg2 ;
-(void)_registerWithCriteria:(id)arg1 ;
-(id)_identifierForEventName:(id)arg1 ;
-(void)_dispatchBlock;
-(void)scheduleWithInterval:(double)arg1 gracePeriod:(double)arg2 ;
-(void)setRunBlock:(id)arg1 ;
@end

