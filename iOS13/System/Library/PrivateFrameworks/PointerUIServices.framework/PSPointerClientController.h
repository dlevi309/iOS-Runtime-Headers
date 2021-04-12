/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PointerUIServices.framework/PointerUIServices
*/

#import <libobjc.A.dylib/PSPointerDefaultServiceServerToClientInterface.h>
#import <libobjc.A.dylib/PSPointerDefaultLaunchingServiceServerToClientInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, PSPointerClientControllerDelegate;
@class NSObject, BSServiceConnection, NSCountedSet, NSMutableArray, NSString;

@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasActivatedLaunchingConnection;
	BSServiceConnection* _nonLaunchingConnection;
	BSServiceConnection* _launchingConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSCountedSet* _persistentPointerHideReasons;
	NSMutableArray* _serviceKeepAliveAssertions;
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
-(void)invalidate;
-(id<PSPointerClientControllerDelegate>)delegate;
-(void)setDelegate:(id<PSPointerClientControllerDelegate>)arg1 ;
-(void)invalidateContentMatchMoveSources:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setActiveHoverRegion:(id)arg1 transitionCompletion:(/*^block*/id)arg2 ;
-(long long)clientInteractionState;
-(BOOL)isClientInteractionEnabled;
-(void)autohidePointerForReason:(unsigned long long)arg1 ;
-(void)createContentMatchMoveSourcesWithCount:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)createPointerPortalSourceCollectionWithCompletion:(/*^block*/id)arg1 ;
-(void)_connectionQueue_handleNonLaunchingConnectionActivation;
-(void)_connectionQueue_handleNonLaunchingConnectionInterruption;
-(void)_didInvalidateRemoteSources;
-(void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_accessQueue_acquireServiceKeepAliveAssertion;
-(void)setSystemCursorInteractionContextID:(unsigned)arg1 ;
-(id)_connectionQueue_launchingConnection;
-(void)_connectionQueue_handleLaunchingConnectionInterruption;
-(oneway void)clientInteractionStateDidChange:(id)arg1 ;
-(oneway void)adjustedDecelerationTargetPointerPosition:(id)arg1 velocity:(id)arg2 inContextID:(id)arg3 cursorRegionLookupRadius:(id)arg4 cursorRegionLookupResolution:(id)arg5 lookupConeAngle:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)acquireServiceKeepAliveAssertion;
-(id)persistentlyHidePointerAssertionForReason:(unsigned long long)arg1 ;
-(unsigned)systemCursorInteractionContextID;
@end

