/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)errorHandler;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setErrorHandler:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id<SFProxCardXPCServerInterface>)delegate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_reportError:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDelegate:(id<SFProxCardXPCServerInterface>)arg1 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSXPCListenerEndpoint *)xpcEndpoint;
-(void)setXpcEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)performAction:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

