/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	SCD_Union_NS68 _connection;
	NSObject*<OS_dispatch_queue> _userQueue;
	A@ _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	unsigned char _remote;

}

@property (__weak) id<NSXPCListenerDelegate> delegate; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)_UUID;
+(id)serviceListener;
+(void)enableTransactions;
+(id)anonymousListener;
-(void)suspend;
-(id)_xpcConnection;
-(id)_queue;
-(id<NSXPCListenerDelegate>)delegate;
-(id)_initShared;
-(id)initWithServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)stop;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)__receiveRemoteConnection:(id)arg1 ;
-(id)__initWithoutRemoteConnection;
-(void)activate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(id)description;
-(id)initWithMachServiceName:(id)arg1 ;
-(id)_initWithRemoteName:(id)arg1 ;
-(id)serviceName;
-(void)invalidate;
-(void)resume;
-(void)dealloc;
@end

