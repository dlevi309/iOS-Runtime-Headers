/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SBStatusBarStyleOverridesAssertionServer.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableArray, NSXPCListener, NSMapTable, NSObject, FBWorkspaceEventQueue, SBStatusBarTapManager, NSString;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding> {

	NSMutableArray* _runningUpdateTransactions;
	int _statusBarStyleOverrides;
	int _exclusiveStatusBarStyleOverrides;
	NSXPCListener* _xpcListener;
	NSMapTable* _assertionsByIdentifierByClientConnection;
	NSMapTable* _assertionsByStyleOverride;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSMutableArray* _coordinatorConnectionsByStyleOverride;
	NSObject*<OS_dispatch_source> _assertionTimerSource;
	FBWorkspaceEventQueue* _eventQueue;
	SBStatusBarTapManager* _statusBarTapManager;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                                         //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByIdentifierByClientConnection;               //@synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByStyleOverride;                              //@synthesize assertionsByStyleOverride=_assertionsByStyleOverride - In the implementation block
@property (nonatomic,retain) NSMutableArray * coordinatorConnectionsByStyleOverride;              //@synthesize coordinatorConnectionsByStyleOverride=_coordinatorConnectionsByStyleOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                          //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> assertionTimerSource;                  //@synthesize assertionTimerSource=_assertionTimerSource - In the implementation block
@property (nonatomic,retain) FBWorkspaceEventQueue * eventQueue;                                  //@synthesize eventQueue=_eventQueue - In the implementation block
@property (assign,nonatomic) int statusBarStyleOverrides;                                         //@synthesize statusBarStyleOverrides=_statusBarStyleOverrides - In the implementation block
@property (assign,nonatomic) int exclusiveStatusBarStyleOverrides;                                //@synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides - In the implementation block
@property (nonatomic,readonly) SBStatusBarTapManager * statusBarTapManager;                       //@synthesize statusBarTapManager=_statusBarTapManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSString *)description;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBWorkspaceEventQueue *)eventQueue;
-(void)setEventQueue:(FBWorkspaceEventQueue *)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)statusBarStyleOverrides;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2 ;
-(void)setRegisteredOverrides:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)handleTapForStatusBarStyleOverride:(int)arg1 ;
-(void)invalidateStatusBarStyleOverridesAssertions:(id)arg1 ;
-(int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1 ;
-(void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2 ;
-(void)_postStatusStringsByStyle:(id)arg1 ;
-(void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(int)_internalQueue_addAssertionByStyleOverrides:(id)arg1 ;
-(void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSMapTable *)assertionsByIdentifierByClientConnection;
-(id)_internalQueue_coordinatorClientForStyleOverrides:(int)arg1 ;
-(BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)arg1 onConnection:(id)arg2 ;
-(id)_internalQueue_coordinatorClientForConnection:(id)arg1 ;
-(id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2 ;
-(void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg1 ;
-(void)setAssertionsByIdentifierByClientConnection:(NSMapTable *)arg1 ;
-(NSMapTable *)assertionsByStyleOverride;
-(void)setAssertionsByStyleOverride:(NSMapTable *)arg1 ;
-(int)exclusiveStatusBarStyleOverrides;
-(void)setExclusiveStatusBarStyleOverrides:(int)arg1 ;
-(NSMutableArray *)coordinatorConnectionsByStyleOverride;
-(void)setCoordinatorConnectionsByStyleOverride:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)assertionTimerSource;
-(void)setAssertionTimerSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(SBStatusBarTapManager *)statusBarTapManager;
@end

