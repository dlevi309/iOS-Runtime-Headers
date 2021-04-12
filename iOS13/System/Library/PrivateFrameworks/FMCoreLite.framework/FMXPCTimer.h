/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
*/


@protocol OS_xpc_object;
@class NSString, NSDate, NSObject;

@interface FMXPCTimer : NSObject {

	NSString* _name;
	NSDate* _date;
	double _gracePeriod;
	long long _priority;
	unsigned long long _options;
	/*^block*/id _block;
	NSObject*<OS_xpc_object> _duetActivitySchedulerData;

}

@property (nonatomic,copy) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double gracePeriod;                                              //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (assign,nonatomic) long long priority;                                              //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) id block;                                                          //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> duetActivitySchedulerData;              //@synthesize duetActivitySchedulerData=_duetActivitySchedulerData - In the implementation block
-(NSString *)name;
-(void)invalidate;
-(unsigned long long)options;
-(NSDate *)date;
-(void)setName:(NSString *)arg1 ;
-(id)block;
-(void)setOptions:(unsigned long long)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(double)gracePeriod;
-(void)schedule;
-(id)criteria;
-(/*^block*/id)activityHandler;
-(void)setGracePeriod:(double)arg1 ;
-(void)handleActivity;
-(id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(NSObject*<OS_xpc_object>)duetActivitySchedulerData;
-(id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(id)initWithName:(id)arg1 timeInterval:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)setDuetActivitySchedulerData:(NSObject*<OS_xpc_object>)arg1 ;
@end

