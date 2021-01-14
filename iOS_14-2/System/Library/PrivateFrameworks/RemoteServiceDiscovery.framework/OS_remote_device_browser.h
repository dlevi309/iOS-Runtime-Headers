/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteServiceDiscovery.framework/RemoteServiceDiscovery
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface OS_remote_device_browser : NSObject {

	BOOL _canceled;
	BOOL _canceling;
	unsigned _device_type;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _cbq;
	/*^block*/id _callback;

}

@property (assign,nonatomic) unsigned device_type;                             //@synthesize device_type=_device_type - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> cbq;                 //@synthesize cbq=_cbq - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                    //@synthesize canceled=_canceled - In the implementation block
@property (assign,nonatomic) BOOL canceling;                                   //@synthesize canceling=_canceling - In the implementation block
@property (nonatomic,copy) id callback;                                        //@synthesize callback=_callback - In the implementation block
-(void)setCanceled:(BOOL)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)cbq;
-(BOOL)canceled;
-(NSObject*<OS_xpc_object>)connection;
-(unsigned)device_type;
-(void)setDevice_type:(unsigned)arg1 ;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setCbq:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(BOOL)canceling;
-(void)setCanceling:(BOOL)arg1 ;
@end
