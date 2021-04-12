/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <PointerUIServices/PointerUIServices-Structs.h>
#import <libobjc.A.dylib/PSPointerDefaultServiceServerToClientInterface.h>
#import <libobjc.A.dylib/PSPointerDefaultLaunchingServiceServerToClientInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, PSPointerClientControllerDelegate;
@class NSObject, BSServiceConnection, NSCountedSet, NSMutableArray, NSString;

@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BSServiceConnection* _nonLaunchingConnection;
	BSServiceConnection* _launchingConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSCountedSet* _persistentPointerHideReasons;
	NSMutableArray* _serviceKeepAliveAssertions;
	os_unfair_lock_s _invalidationAndConfigurationLock;
	BOOL _hasActivatedLaunchingConnection;
	BOOL _isConnectionActive;
	unsigned _systemCursorInteractionContextID;
	id<PSPointerClientControllerDelegate> _delegate;
	long long _clientInteractionState;

}

@property (assign,nonatomic) unsigned systemCursorInteractionContextID;                                      //@synthesize systemCursorInteractionContextID=_systemCursorInteractionContextID - In the implementation block
@property (assign,nonatomic,__weak) id<PSPointerClientControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isClientInteractionEnabled,nonatomic,readonly) BOOL clientInteractionEnabled; 
@property (nonatomic,readonly) long long clientInteractionState;                                             //@synthesize clientInteractionState=_clientInteractionState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)clientInteractionState;
-(id<PSPointerClientControllerDelegate>)delegate;
-(void)_connectionQueue_handleNonLaunchingConnectionInterruption;
-(void)setSystemCursorInteractionContextID:(unsigned)arg1 ;
-(id)_accessQueue_acquireServiceKeepAliveAssertion;
-(void)autohidePointerForReason:(unsigned long long)arg1 ;
-(void)setDelegate:(id<PSPointerClientControllerDelegate>)arg1 ;
-(BOOL)isClientInteractionEnabled;
-(void)createPointerPortalSourceCollectionWithCompletion:(/*^block*/id)arg1 ;
-(void)invalidateContentMatchMoveSources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_connectionQueue_handleLaunchingConnectionInterruption;
-(void)_didInvalidateRemoteSources;
-(void)_connectionQueue_handleNonLaunchingConnectionActivation;
-(void)setActiveHoverRegion:(id)arg1 transitionCompletion:(/*^block*/id)arg2 ;
-(void)invalidate;
-(id)_connectionQueue_launchingConnection;
-(void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)systemCursorInteractionContextID;
-(void)createContentMatchMoveSourcesWithCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)persistentlyHidePointerAssertionForReason:(unsigned long long)arg1 ;
-(id)acquireServiceKeepAliveAssertion;
-(oneway void)clientInteractionStateDidChange:(id)arg1 ;
-(oneway void)adjustedDecelerationTargetPointerPosition:(id)arg1 velocity:(id)arg2 inContextID:(id)arg3 cursorRegionLookupRadius:(id)arg4 cursorRegionLookupResolution:(id)arg5 lookupConeAngle:(id)arg6 completion:(/*^block*/id)arg7 ;
@end

