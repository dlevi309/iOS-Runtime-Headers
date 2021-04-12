/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol SFProxCardXPCServerInterface, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class NSXPCConnection, NSObject, NSString, NSXPCListenerEndpoint;

@interface SFProxCardSessionServer : NSObject {

	BOOL _dismissCalled;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	id<SFProxCardXPCServerInterface> _delegate;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _errorHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSXPCListenerEndpoint* _xpcEndpoint;

}

@property (nonatomic,retain) id<SFProxCardXPCServerInterface> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id errorHandler;                                           //@synthesize errorHandler=_errorHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * xpcEndpoint;                     //@synthesize xpcEndpoint=_xpcEndpoint - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id<SFProxCardXPCServerInterface>)delegate;
-(void)setDelegate:(id<SFProxCardXPCServerInterface>)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(id)errorHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_reportError:(id)arg1 ;
-(NSXPCListenerEndpoint *)xpcEndpoint;
-(void)setXpcEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)performAction:(int)arg1 completion:(/*^block*/id)arg2 ;
@end

