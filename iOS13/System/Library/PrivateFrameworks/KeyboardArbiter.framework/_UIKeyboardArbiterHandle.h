/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

#import <libobjc.A.dylib/_UIKeyboardArbitration.h>

@class NSString, _UIKeyboardArbiter, FBSCAContextSceneLayer, NSMutableSet, BKSProcessAssertion, NSArray, BSServiceConnectionEndpointInjector, NSXPCConnection;

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {

	BOOL _invalidated;
	NSString* _bundleIdentifier;
	_UIKeyboardArbiter* _owner;
	BOOL _running;
	FBSCAContextSceneLayer* _sceneLayer;
	NSString* _remoteSceneID;
	BOOL _active;
	unsigned long long _wantedState;
	double _level;
	NSMutableSet* _hostedPids;
	BOOL _checkingShowability;
	int _suppressionCount;
	BOOL _wantsFence;
	BKSProcessAssertion* _remoteKeepAliveAssertion;
	unsigned long long _remoteKeepAliveAssertionCount;
	unsigned long long _remoteKeepAliveTimerCount;
	NSArray* _cachedContext;
	BSServiceConnectionEndpointInjector* _endpointGrantInjector;
	NSXPCConnection* _connection;
	double _iavHeight;

}

@property (readonly) int processIdentifier; 
@property (retain,readonly) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL running;                                              //@synthesize running=_running - In the implementation block
@property (retain,readonly) FBSCAContextSceneLayer * sceneLayer;              //@synthesize sceneLayer=_sceneLayer - In the implementation block
@property (retain,readonly) NSString * remoteSceneID;                         //@synthesize remoteSceneID=_remoteSceneID - In the implementation block
@property (readonly) BOOL active;                                             //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long wantedState;                          //@synthesize wantedState=_wantedState - In the implementation block
@property (readonly) double level;                                            //@synthesize level=_level - In the implementation block
@property (readonly) double iavHeight;                                        //@synthesize iavHeight=_iavHeight - In the implementation block
@property (readonly) BOOL wantsFence;                                         //@synthesize wantsFence=_wantsFence - In the implementation block
+(id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(int)processIdentifier;
-(NSString *)bundleIdentifier;
-(double)level;
-(NSXPCConnection *)connection;
-(BOOL)running;
-(BOOL)active;
-(double)iavHeight;
-(FBSCAContextSceneLayer *)sceneLayer;
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(/*^block*/id)arg5 ;
-(void)setWantsFencing:(BOOL)arg1 ;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentifier:(id)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4 ;
-(void)notifyIAVHeight:(double)arg1 ;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)signalKeyboardChangeComplete;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2 ;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1 ;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)focusApplicationWithProcessIdentifier:(int)arg1 sceneDeferringToken:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)signalEventSourceChanged:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)retrieveDebugInformation:(/*^block*/id)arg1 ;
-(void)retrieveMoreDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)releaseProcessAssertion;
-(void)takeProcessAssertionOnRemoteWithQueue:(id)arg1 ;
-(NSString *)remoteSceneID;
-(BOOL)isHandlerShowableWithHandler:(id)arg1 ;
-(unsigned long long)wantedState;
-(BOOL)wantsFence;
-(BOOL)isHostingPID:(int)arg1 ;
-(void)didAttachLayer;
-(void)checkActivation:(unsigned long long)arg1 ;
-(void)didDetachLayer;
-(void)uncacheWindowContext;
-(void)cacheWindowContext;
-(void)_deactivateScene;
-(void)_reevaluateRemoteSceneID:(id)arg1 ;
@end

