/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KeyboardArbiter.framework/KeyboardArbiter
*/

#import <libobjc.A.dylib/_UIKeyboardArbitration.h>

@class NSString, _UIKeyboardArbiter, FBSCAContextSceneLayer, FBSSceneIdentityToken, NSMutableSet, BKSProcessAssertion, NSArray, BSServiceConnectionEndpointInjector, NSXPCConnection;

@interface _UIKeyboardArbiterHandle : NSObject <_UIKeyboardArbitration> {

	BOOL _invalidated;
	NSString* _bundleIdentifier;
	_UIKeyboardArbiter* _owner;
	BOOL _running;
	FBSCAContextSceneLayer* _sceneLayer;
	FBSSceneIdentityToken* _remoteSceneIdentity;
	BOOL _active;
	unsigned long long _wantedState;
	double _level;
	NSMutableSet* _hostedPids;
	BOOL _checkingShowability;
	int _suppressionCount;
	int _childrenSuppressionCount;
	BOOL _wantsFence;
	BOOL _deactivating;
	BOOL _keyboardOnScreen;
	BKSProcessAssertion* _remoteKeepAliveAssertion;
	unsigned long long _remoteKeepAliveAssertionCount;
	unsigned long long _remoteKeepAliveTimerCount;
	NSArray* _cachedContext;
	BSServiceConnectionEndpointInjector* _endpointGrantInjector;
	int _prevActiveIdentifier;
	NSXPCConnection* _connection;
	double _iavHeight;

}

@property (readonly) int processIdentifier; 
@property (retain,readonly) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSXPCConnection * connection;                                    //@synthesize connection=_connection - In the implementation block
@property (assign) BOOL running;                                                      //@synthesize running=_running - In the implementation block
@property (retain,readonly) FBSCAContextSceneLayer * sceneLayer;                      //@synthesize sceneLayer=_sceneLayer - In the implementation block
@property (retain,readonly) FBSSceneIdentityToken * remoteSceneIdentity;              //@synthesize remoteSceneIdentity=_remoteSceneIdentity - In the implementation block
@property (readonly) BOOL active;                                                     //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long wantedState;                                  //@synthesize wantedState=_wantedState - In the implementation block
@property (readonly) double level;                                                    //@synthesize level=_level - In the implementation block
@property (readonly) double iavHeight;                                                //@synthesize iavHeight=_iavHeight - In the implementation block
@property (readonly) BOOL isKeyboardOnScreen; 
@property (assign) int prevActiveIdentifier;                                          //@synthesize prevActiveIdentifier=_prevActiveIdentifier - In the implementation block
@property (readonly) BOOL wantsFence;                                                 //@synthesize wantsFence=_wantsFence - In the implementation block
@property (readonly) BOOL deactivating;                                               //@synthesize deactivating=_deactivating - In the implementation block
@property (readonly) BOOL hasHostedPids; 
@property (assign) int suppressionCount;                                              //@synthesize suppressionCount=_suppressionCount - In the implementation block
+(id)handlerWithArbiter:(id)arg1 forConnection:(id)arg2 ;
-(BOOL)wantsFence;
-(void)cacheWindowContext;
-(void)setRunning:(BOOL)arg1 ;
-(BOOL)running;
-(void)setKeyboardTotalDisable:(BOOL)arg1 withFence:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)startArbitrationWithExpectedState:(id)arg1 hostingPIDs:(id)arg2 usingFence:(BOOL)arg3 withSuppression:(int)arg4 onConnected:(/*^block*/id)arg5 ;
-(BOOL)active;
-(void)takeProcessAssertionOnRemoteWithQueue:(id)arg1 ;
-(FBSCAContextSceneLayer *)sceneLayer;
-(void)releaseProcessAssertion;
-(int)processIdentifier;
-(void)transition:(id)arg1 eventStage:(unsigned long long)arg2 withInfo:(id)arg3 ;
-(void)setWindowHostingPID:(int)arg1 active:(BOOL)arg2 ;
-(NSString *)bundleIdentifier;
-(void)retrieveMoreDebugInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)addHostedPids:(id)arg1 ;
-(void)setSuppressionCount:(int)arg1 ;
-(BOOL)isKeyboardOnScreen;
-(void)updateSuspensionCountForPids:(id)arg1 ;
-(void)notifyHostedPIDsOfSuppression:(BOOL)arg1 ;
-(void)setWindowContextID:(unsigned)arg1 sceneIdentity:(id)arg2 windowState:(unsigned long long)arg3 withLevel:(double)arg4 ;
-(void)signalEventSourceChanged:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signalKeyboardChanged:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(FBSSceneIdentityToken *)remoteSceneIdentity;
-(BOOL)isHostingPID:(int)arg1 ;
-(void)uncacheWindowContext;
-(id)description;
-(void)checkActivation:(unsigned long long)arg1 ;
-(double)level;
-(void)signalKeyboardChangeComplete;
-(void)setDeactivating:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(BOOL)hasHostedPids;
-(BOOL)deactivating;
-(void)_deactivateScene;
-(void)applicationShouldFocusWithBundle:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(BOOL)isHandlerShowableWithHandler:(id)arg1 ;
-(int)suppressionCount;
-(double)iavHeight;
-(void)_reevaluateRemoteSceneIdentity:(id)arg1 ;
-(void)invalidate;
-(void)didDetachLayer;
-(unsigned long long)wantedState;
-(void)focusApplicationWithProcessIdentifier:(int)arg1 sceneIdentity:(id)arg2 onCompletion:(/*^block*/id)arg3 ;
-(void)didAttachLayer;
-(void)retrieveDebugInformation:(/*^block*/id)arg1 ;
-(void)notifyIAVHeight:(double)arg1 ;
-(void)setPrevActiveIdentifier:(int)arg1 ;
-(void)setWantsFencing:(BOOL)arg1 ;
-(void)setSceneIdentity:(id)arg1 ;
-(void)dealloc;
-(int)prevActiveIdentifier;
@end

