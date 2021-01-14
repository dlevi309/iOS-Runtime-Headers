/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBRemoteTransientOverlaySessionHostDelegate.h>

@protocol OS_dispatch_queue, SBRemoteTransientOverlaySessionManagerDelegate;
@class NSObject, NSMutableDictionary, NSString;

@interface SBRemoteTransientOverlaySessionManager : NSObject <SBRemoteTransientOverlaySessionHostDelegate> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSMutableDictionary* _sessionIDToSession;
	id<SBRemoteTransientOverlaySessionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBRemoteTransientOverlaySessionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)remoteTransientOverlaySession:(id)arg1 shouldActivateWithContext:(id)arg2 ;
-(id)init;
-(id)sessionsWithDefinition:(id)arg1 options:(long long)arg2 ;
-(void)remoteTransientOverlaySession:(id)arg1 didInvalidateWithReason:(long long)arg2 error:(id)arg3 ;
-(id<SBRemoteTransientOverlaySessionManagerDelegate>)delegate;
-(void)remoteTransientOverlaySession:(id)arg1 requestsHandlingForButtonEvents:(unsigned long long)arg2 viewController:(id)arg3 ;
-(id)existingSessionWithSessionID:(id)arg1 options:(long long)arg2 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 prefersStatusBarActivityItemVisibleForServiceBundleIdentifier:(id)arg2 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performDismissalRequest:(id)arg2 ;
-(void)setDelegate:(id<SBRemoteTransientOverlaySessionManagerDelegate>)arg1 ;
-(id)_existingSessionsWithDefinition:(id)arg1 options:(long long)arg2 ;
-(id)existingSessionsWithDefinition:(id)arg1 options:(long long)arg2 ;
-(BOOL)hasSessionWithPendingButtonEvents:(unsigned long long)arg1 options:(long long)arg2 ;
-(id)sessionWithDefinition:(id)arg1 options:(long long)arg2 ;
-(BOOL)remoteTransientOverlaySession:(id)arg1 performPresentationRequest:(id)arg2 ;
-(BOOL)hasSessionWithServiceProcessIdentifier:(int)arg1 options:(long long)arg2 ;
-(long long)activeWallpaperVariantForRemoteTransientOverlaySession:(id)arg1 ;
-(id)createSessionWithDefinition:(id)arg1 ;
-(id)_createSessionWithDefinition:(id)arg1 ;
@end

