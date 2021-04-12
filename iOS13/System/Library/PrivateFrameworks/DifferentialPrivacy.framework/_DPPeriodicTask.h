/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _DPPeriodicTask : NSObject {

	unsigned long long _periodSeconds;
	NSString* _name;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _executionCriteria;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> executionCriteria;              //@synthesize executionCriteria=_executionCriteria - In the implementation block
@property (nonatomic,readonly) unsigned long long periodSeconds;                        //@synthesize periodSeconds=_periodSeconds - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
+(id)taskWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(NSObject*<OS_xpc_object>)executionCriteria;
-(id)initWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(unsigned long long)periodSeconds;
@end

