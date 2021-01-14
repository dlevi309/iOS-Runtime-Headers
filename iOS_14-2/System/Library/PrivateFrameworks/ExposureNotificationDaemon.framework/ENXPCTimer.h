/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_xpc_object;
@class NSString, NSDate, NSObject;

@interface ENXPCTimer : NSObject {

	NSString* _name;
	NSDate* _date;
	double _gracePeriod;
	long long _priority;
	unsigned long long _options;
	/*^block*/id _block;
	unsigned long long _cadence;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) double gracePeriod;                             //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (assign,nonatomic) long long priority;                             //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned long long options;                     //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long cadence;                     //@synthesize cadence=_cadence - In the implementation block
@property (nonatomic,copy) id block;                                         //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(id)block;
-(unsigned long long)cadence;
-(id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(NSObject*<OS_xpc_object>)activity;
-(void)setBlock:(id)arg1 ;
-(unsigned long long)options;
-(void)setDate:(NSDate *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)setGracePeriod:(double)arg1 ;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)handleActivity;
-(id)description;
-(/*^block*/id)activityHandler;
-(double)gracePeriod;
-(id)criteria;
-(void)invalidate;
-(void)setName:(NSString *)arg1 ;
-(NSDate *)date;
-(void)setCadence:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 date:(id)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(long long)priority;
-(id)initWithName:(id)arg1 timeInterval:(double)arg2 priority:(long long)arg3 options:(unsigned long long)arg4 block:(/*^block*/id)arg5 ;
-(void)setPriority:(long long)arg1 ;
-(id)initWithName:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3 cadence:(unsigned long long)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 block:(/*^block*/id)arg7 ;
-(id)initWithName:(id)arg1 delay:(double)arg2 gracePeriod:(double)arg3 priority:(long long)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(id)initWithName:(id)arg1 date:(id)arg2 gracePeriod:(double)arg3 cadence:(unsigned long long)arg4 priority:(long long)arg5 options:(unsigned long long)arg6 block:(/*^block*/id)arg7 ;
@end

