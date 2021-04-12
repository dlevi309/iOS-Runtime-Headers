/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (__weak) id<NSXPCListenerDelegate> delegate; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)anonymousListener;
+(id)_UUID;
+(id)serviceListener;
+(void)enableTransactions;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)_queue;
-(id<NSXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(void)resume;
-(void)_setQueue:(id)arg1 ;
-(void)stop;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(id)initWithServiceName:(id)arg1 ;
-(id)_xpcConnection;
-(void)suspend;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)serviceName;
-(id)_initShared;
@end

