/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFSiriActivationListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, AFSiriActivationListener, NSString;

@interface AFRemoteRequestWatcher : NSObject <AFSiriActivationListenerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _prewarmHandler;
	/*^block*/id _requestHandler;
	/*^block*/id _dismissalHandler;
	/*^block*/id _intentHandler;
	int _speechRequestToken;
	/*^block*/id _speechRequestHandler;
	AFSiriActivationListener* _siriActivationListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setRequestHandler:(/*^block*/id)arg1 ;
-(void)setDismissalHandler:(/*^block*/id)arg1 ;
-(void)_setupRequestListener;
-(void)_dispatchSpeechRequestOptions:(id)arg1 ;
-(void)_setupSpeechRequestListener;
-(void)siriActivationListener:(id)arg1 handleIntent:(id)arg2 inBackgroundAppWithBundleId:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 prewarmWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 activateWithRequestInfo:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)siriActivationListener:(id)arg1 deactivateForReason:(long long)arg2 options:(unsigned long long)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setPrewarmHandler:(/*^block*/id)arg1 ;
-(void)setNewRequestHandler:(/*^block*/id)arg1 ;
-(void)setIntentHandler:(/*^block*/id)arg1 ;
-(void)setNewSpeechRequestHandler:(/*^block*/id)arg1 ;
@end

