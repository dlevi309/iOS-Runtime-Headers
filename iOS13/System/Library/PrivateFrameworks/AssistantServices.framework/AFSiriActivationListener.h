/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFSiriActivationService.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFSiriActivationListenerDelegate;
@class NSObject, NSXPCListener, NSString;

@interface AFSiriActivationListener : NSObject <NSXPCListenerDelegate, AFNotifyObserverDelegate, AFSiriActivationService, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _xpcListener;
	id<AFSiriActivationListenerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)_stop;
-(id)initWithServicePort:(long long)arg1 ;
-(oneway void)prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(oneway void)deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(oneway void)handleContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handleIntent:(id)arg1 inBackgroundAppWithBundleId:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)startWithDelegate:(id)arg1 ;
-(void)_startWithDelegate:(id)arg1 ;
-(void)_prewarmWithRequestInfo:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activateWithRequestInfo:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_deactivateForReason:(long long)arg1 options:(unsigned long long)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

