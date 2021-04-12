/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
*/

#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListenerEndpoint, NSXPCInterface, NSXPCConnection, NSObject, NSString;

@interface NSXPCInvocation : NSObject <NSXPCConnectionDelegate> {

	NSXPCListenerEndpoint* _endpoint;
	NSXPCInterface* _interface;
	NSXPCConnection* _connection;
	BOOL _finishedWithError;
	/*^block*/id _errorHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)initWithEndpoint:(id)arg1 interface:(id)arg2 queue:(id)arg3 ;
-(id)initWithEndpoint:(id)arg1 interface:(id)arg2 ;
@end

