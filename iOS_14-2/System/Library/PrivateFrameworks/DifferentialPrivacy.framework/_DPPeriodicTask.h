/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface _DPPeriodicTask : NSObject {

	BOOL _networkingRequired;
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
@property (nonatomic,readonly) BOOL networkingRequired;                                 //@synthesize networkingRequired=_networkingRequired - In the implementation block
@property (nonatomic,readonly) id handler;                                              //@synthesize handler=_handler - In the implementation block
+(id)taskWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)taskWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 networkingRequired:(BOOL)arg4 ;
-(unsigned long long)periodSeconds;
-(id)init;
-(NSString *)name;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(NSObject*<OS_xpc_object>)executionCriteria;
-(id)initWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 networkingRequired:(BOOL)arg4 ;
-(id)initWithName:(id)arg1 period:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)networkingRequired;
@end

