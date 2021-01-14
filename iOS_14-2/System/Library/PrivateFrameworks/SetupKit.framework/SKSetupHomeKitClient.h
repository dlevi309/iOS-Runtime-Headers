/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
*/

#import <SetupKit/SetupKit-Structs.h>
#import <libobjc.A.dylib/CUActivatable.h>
#import <libobjc.A.dylib/CUAuthenticatableClient.h>
#import <libobjc.A.dylib/CULabelable.h>
#import <libobjc.A.dylib/CUMessaging.h>

@protocol OS_dispatch_queue;
@class NSString, SKFlow, SKStepWiFiSetupClient, NSObject;

@interface SKSetupHomeKitClient : NSObject <CUActivatable, CUAuthenticatableClient, CULabelable, CUMessaging> {

	BOOL _activateCalled;
	SKFlow* _flow;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SKStepWiFiSetupClient* _stepWiFiSetup;
	LogCategory* _ucat;
	/*^block*/id _authCompletionHandler;
	/*^block*/id _authPromptForPasswordHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSString* _password;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id authCompletionHandler;                                  //@synthesize authCompletionHandler=_authCompletionHandler - In the implementation block
@property (nonatomic,copy) id authPromptForPasswordHandler;                           //@synthesize authPromptForPasswordHandler=_authPromptForPasswordHandler - In the implementation block
@property (nonatomic,copy) NSString * password;                                       //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
-(void)setAuthCompletionHandler:(id)arg1 ;
-(void)tryPassword:(id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSString *)password;
-(NSString *)description;
-(void)setPassword:(NSString *)arg1 ;
-(void)_invalidated;
-(id)authCompletionHandler;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
-(void)registerEventID:(id)arg1 options:(id)arg2 eventHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deregisterEventID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendEventID:(id)arg1 eventMessage:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 requestHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)deregisterRequestID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRequestID:(id)arg1 requestMessage:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)authPromptForPasswordHandler;
-(void)setAuthPromptForPasswordHandler:(id)arg1 ;
-(void)_stepBuilder;
@end

