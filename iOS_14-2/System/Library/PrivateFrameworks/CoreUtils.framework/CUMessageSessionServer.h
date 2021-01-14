/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)registerRequestHandler;
-(void)setRegisterRequestHandler:(id)arg1 ;
-(id)sendRequestHandler;
-(void)setSendRequestHandler:(id)arg1 ;
-(void)activate;
-(id)deregisterRequestHandler;
-(void)setDeregisterRequestHandler:(id)arg1 ;
-(CUMessageSession *)templateSession;
-(void)setTemplateSession:(CUMessageSession *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

