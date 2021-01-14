/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject;

@interface NFSecureXPCEventPublisher : NSObject {

	BOOL _available;
	NSString* _serviceName;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSString * serviceName;                           //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL available;                                   //@synthesize available=_available - In the implementation block
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)available;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)serviceName;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)sendEvent:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)initWithMachPort:(id)arg1 queue:(id)arg2 ;
-(void)sendSimpleEvent:(id)arg1 ;
-(void)sendSimpleEvent:(id)arg1 objectString:(id)arg2 ;
-(void)sendSimpleEvent:(id)arg1 objectNumber:(id)arg2 ;
@end

