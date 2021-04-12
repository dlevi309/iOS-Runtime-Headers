/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <libobjc.A.dylib/CSRemoteContentSessionPreferencesProvider.h>

@protocol OS_dispatch_queue, CSRemoteContentSessionHostDelegate, SBFAuthenticationStatusProvider;
@class NSObject, NSMutableDictionary, NSString;

@interface CSRemoteContentSessionManager : NSObject <CSRemoteContentSessionPreferencesProvider> {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	NSMutableDictionary* _sessionIDToSession;
	NSMutableDictionary* _serviceNameToPreferences;
	id<CSRemoteContentSessionHostDelegate> _forwardingHostDelegate;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;

}

@property (assign,nonatomic,__weak) id<CSRemoteContentSessionHostDelegate> forwardingHostDelegate;              //@synthesize forwardingHostDelegate=_forwardingHostDelegate - In the implementation block
@property (nonatomic,readonly) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(id)createSessionWithDefinition:(id)arg1 ;
-(id)initWithAuthenticationStatusProvider:(id)arg1 ;
-(void)setForwardingHostDelegate:(id<CSRemoteContentSessionHostDelegate>)arg1 ;
-(void)didInvalidateSessionWithSessionID:(id)arg1 ;
-(id)preferencesForRemoteContentSession:(id)arg1 ;
-(void)remoteContentSession:(id)arg1 didUpdateWithPreferences:(id)arg2 ;
-(id)_queue_existingSessions;
-(id)_queue_existingSessionsWithDefinition:(id)arg1 ;
-(id)_queue_createSessionWithDefinition:(id)arg1 ;
-(id)existingSessions;
-(id)existingSessionsWithDefinition:(id)arg1 ;
-(id<CSRemoteContentSessionHostDelegate>)forwardingHostDelegate;
@end

