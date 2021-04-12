/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBRemoteTransientOverlaySessionObserver.h>
#import <libobjc.A.dylib/SBSRemoteAlertHandleClient.h>

@protocol OS_dispatch_queue;
@class NSObject, SBRemoteTransientOverlaySessionManager, NSMutableDictionary, NSString;

@interface SBRemoteAlertHandleLocalClient : NSObject <SBRemoteTransientOverlaySessionObserver, SBSRemoteAlertHandleClient> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	SBRemoteTransientOverlaySessionManager* _sessionManager;
	NSMutableDictionary* _sessionIDToRemoteAlertHandle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)remoteAlertHandlesForDefinition:(id)arg1 allowsCreation:(BOOL)arg2 configurationContext:(id)arg3 ;
-(id)createRemoteAlertHandleWithDefinition:(id)arg1 configurationContext:(id)arg2 ;
-(void)activateRemoteAlertHandle:(id)arg1 withContext:(id)arg2 ;
-(void)invalidateRemoteAlertHandle:(id)arg1 ;
-(id)initWithSessionManager:(id)arg1 ;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3 ;
-(void)_registerHandle:(id)arg1 forSession:(id)arg2 ;
-(void)_unregisterHandle:(id)arg1 ;
-(void)remoteTransientOverlaySessionDidActivate:(id)arg1 ;
-(void)remoteTransientOverlaySessionDidDeactivate:(id)arg1 ;
@end

