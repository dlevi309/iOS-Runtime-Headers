/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCListenerEndpoint, NSXPCListener, CUMessageSession, NSString;

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _registerRequestHandler;
	/*^block*/id _deregisterRequestHandler;
	/*^block*/id _sendRequestHandler;
	NSMutableSet* _xpcConnections;
	NSXPCListenerEndpoint* _xpcEndpoint;
	NSXPCListener* _xpcListener;
	/*^block*/id _invalidationHandler;
	CUMessageSession* _templateSession;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id registerRequestHandler;                                 //@synthesize registerRequestHandler=_registerRequestHandler - In the implementation block
@property (nonatomic,copy) id deregisterRequestHandler;                               //@synthesize deregisterRequestHandler=_deregisterRequestHandler - In the implementation block
@property (nonatomic,copy) id sendRequestHandler;                                     //@synthesize sendRequestHandler=_sendRequestHandler - In the implementation block
@property (nonatomic,retain) CUMessageSession * templateSession;                      //@synthesize templateSession=_templateSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(id)registerRequestHandler;
-(void)setRegisterRequestHandler:(id)arg1 ;
-(id)sendRequestHandler;
-(void)setSendRequestHandler:(id)arg1 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(id)deregisterRequestHandler;
-(void)setDeregisterRequestHandler:(id)arg1 ;
-(CUMessageSession *)templateSession;
-(void)setTemplateSession:(CUMessageSession *)arg1 ;
@end

