/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <libobjc.A.dylib/IKAppContextDelegate.h>
#import <libobjc.A.dylib/VSStateMachineDelegate.h>
#import <libobjc.A.dylib/IKApplication.h>

@protocol VSApplicationDelegate;
@class NSURL, IKAppContext, VSAuditToken, VSStateMachine, VSAppDeviceConfig, NSHTTPCookieStorage, NSError, NSString;

@interface VSApplication : NSObject <IKAppContextDelegate, VSStateMachineDelegate, IKApplication> {

	BOOL _shouldAllowRemoteInspection;
	NSURL* _bootURL;
	IKAppContext* _appContext;
	id<VSApplicationDelegate> _delegate;
	VSAuditToken* _auditToken;
	VSStateMachine* _stateMachine;
	VSAppDeviceConfig* _appDeviceConfig;
	NSHTTPCookieStorage* _cookieStorage;
	NSError* _failureToStart;

}

@property (nonatomic,retain) VSStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) VSAppDeviceConfig * appDeviceConfig;                    //@synthesize appDeviceConfig=_appDeviceConfig - In the implementation block
@property (nonatomic,retain) IKAppContext * appContext;                              //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSHTTPCookieStorage * cookieStorage;                    //@synthesize cookieStorage=_cookieStorage - In the implementation block
@property (nonatomic,retain) NSError * failureToStart;                               //@synthesize failureToStart=_failureToStart - In the implementation block
@property (nonatomic,copy,readonly) NSURL * bootURL;                                 //@synthesize bootURL=_bootURL - In the implementation block
@property (assign,nonatomic,__weak) id<VSApplicationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowRemoteInspection;                       //@synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(oneway void)release;
-(id<VSApplicationDelegate>)delegate;
-(void)setDelegate:(id<VSApplicationDelegate>)arg1 ;
-(VSAuditToken *)auditToken;
-(void)stop;
-(void)start;
-(id)localStorage;
-(VSStateMachine *)stateMachine;
-(void)setStateMachine:(VSStateMachine *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(id)appIdentifier;
-(void)setCookieStorage:(NSHTTPCookieStorage *)arg1 ;
-(id)vendorIdentifier;
-(id)activeDocument;
-(IKAppContext *)appContext;
-(id)deviceConfigForContext:(id)arg1 ;
-(BOOL)appIsTrusted;
-(id)vendorStorage;
-(id)userDefaultsStorage;
-(void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(id)appJSURL;
-(BOOL)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4 ;
-(id)objectForPlayer:(id)arg1 ;
-(id)objectForPlaylist:(id)arg1 ;
-(id)objectForMediaItem:(id)arg1 ;
-(void)appContext:(id)arg1 didStartWithOptions:(id)arg2 ;
-(void)appContext:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appContext:(id)arg1 didStopWithOptions:(id)arg2 ;
-(id)xhrSessionConfigurationForContext:(id)arg1 ;
-(id)sourceApplicationBundleIdentifierForContext:(id)arg1 ;
-(id)sourceApplicationAuditTokenDataForContext:(id)arg1 ;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(id)viewElementRegistry;
-(BOOL)shouldIgnoreJSValidation;
-(BOOL)shouldAllowRemoteInspection;
-(id)appLaunchParams;
-(NSHTTPCookieStorage *)cookieStorage;
-(NSURL *)bootURL;
-(id)initWithBootURL:(id)arg1 ;
-(void)setShouldAllowRemoteInspection:(BOOL)arg1 ;
-(void)sendErrorWithMessage:(id)arg1 ;
-(void)evaluate:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)appDocumentForDocument:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transitionToReadyState;
-(void)transitionToInvalidState;
-(NSError *)failureToStart;
-(void)setFailureToStart:(NSError *)arg1 ;
-(VSAppDeviceConfig *)appDeviceConfig;
-(void)transitionToStartingState;
-(void)transitionToNotifyingOfFailureToStartState;
-(void)transitionToStoppingState;
-(void)setAppDeviceConfig:(VSAppDeviceConfig *)arg1 ;
@end

