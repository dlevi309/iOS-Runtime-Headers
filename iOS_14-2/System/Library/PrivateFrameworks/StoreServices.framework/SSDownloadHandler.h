/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol SSDownloadHandlerDelegate, OS_dispatch_queue;
@class SSXPCConnection, NSObject, NSArray;

@interface SSDownloadHandler : NSObject {

	SSXPCConnection* _controlConnection;
	id<SSDownloadHandlerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _downloadPhasesToIgnore;
	long long _handlerID;
	SSXPCConnection* _observerConnection;
	BOOL _sessionsNeedPowerAssertion;
	BOOL _sessionsShouldBlockOtherDownloads;

}

@property (readonly) long long handlerIdentifier; 
@property (assign) id<SSDownloadHandlerDelegate> delegate; 
@property (copy) NSArray * downloadPhasesToIgnore; 
@property (assign) BOOL sessionsNeedPowerAssertion; 
@property (assign) BOOL sessionsShouldBlockOtherDownloads; 
-(void)_connectToDaemon;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(id)init;
-(id<SSDownloadHandlerDelegate>)delegate;
-(void)setDownloadPhasesToIgnore:(NSArray *)arg1 ;
-(void)_sendDisconnectMessage;
-(BOOL)_sendAuthenticationSessionWithMessage:(id)arg1 ;
-(BOOL)_sendSessionHandleWithMessage:(id)arg1 ;
-(BOOL)_sendSessionCancelWithMessage:(id)arg1 ;
-(BOOL)_sendSessionPauseWithMessage:(id)arg1 ;
-(id)_controlConnection;
-(id)_newSessionWithMessage:(id)arg1 ;
-(NSArray *)downloadPhasesToIgnore;
-(void)resetDisavowedSessions;
-(BOOL)sessionsNeedPowerAssertion;
-(BOOL)sessionsShouldBlockOtherDownloads;
-(void)setDelegate:(id<SSDownloadHandlerDelegate>)arg1 ;
-(id)description;
-(long long)handlerIdentifier;
-(void)setSessionsShouldBlockOtherDownloads:(BOOL)arg1 ;
-(void)setSessionsNeedPowerAssertion:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(const char*)arg2 ;
-(void)dealloc;
@end

