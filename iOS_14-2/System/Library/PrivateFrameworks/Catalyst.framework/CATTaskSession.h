/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/CATTransportDelegate.h>
#import <libobjc.A.dylib/CATTaskOperationNotificationDelegate.h>

@protocol OS_dispatch_group, CATTaskSessionDelegate;
@class CATStateMachine, CATTransport, NSMutableSet, NSMutableDictionary, NSMutableArray, NSHashTable, CATOperationQueue, NSDictionary, NSMapTable, NSObject, NSUUID, NSString;

@interface CATTaskSession : NSObject <CATTransportDelegate, CATTaskOperationNotificationDelegate> {

	CATStateMachine* mFSM;
	CATTransport* mTransport;
	NSMutableSet* mOperations;
	NSMutableDictionary* mOperationByRemoteUUID;
	NSMutableArray* mEnqueuedMessages;
	CATTaskSession* mStrongSelf;
	NSHashTable* mOrphanedTransports;
	CATOperationQueue* mOrphanedOperationQueue;
	NSDictionary* mPreviousSessionInfo;
	NSMapTable* mRemoteUUIDsByFinishedOperationProgressUpdates;
	NSObject*<OS_dispatch_group> mSessionDidInvalidateGroup;
	BOOL mIsStarting;
	CATOperationQueue* mDelegationQueue;
	NSUUID* _sessionUUID;
	id<CATTaskSessionDelegate> _delegate;
	NSDictionary* _userInfo;
	NSDictionary* _clientUserInfo;

}

@property (nonatomic,copy) NSDictionary * clientUserInfo;                             //@synthesize clientUserInfo=_clientUserInfo - In the implementation block
@property (nonatomic,retain) NSUUID * sessionUUID;                                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,readonly) CATTransport * transport; 
@property (assign,nonatomic,__weak) id<CATTaskSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                   //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)clientUserInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)disconnect;
-(void)enqueueOperation:(id)arg1 ;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)transportDidInvalidate:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(CATTransport *)transport;
-(id)init;
-(NSUUID *)sessionUUID;
-(id<CATTaskSessionDelegate>)delegate;
-(void)delegateDidDisconnect;
-(void)processNotificationMessage:(id)arg1 ;
-(void)enqueueMessage:(id)arg1 ;
-(void)localOperationDidFinish:(id)arg1 ;
-(void)delegateDidInterruptWithError:(id)arg1 ;
-(void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1 ;
-(void)resumeTransport:(id)arg1 ;
-(void)rejectConnection;
-(void)savePreviousSessionInfo;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3 ;
-(void)delegateDidConnect;
-(void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)enqueueDelegateDidInterruptWithError:(id)arg1 ;
-(void)setDelegate:(id<CATTaskSessionDelegate>)arg1 ;
-(void)sendMessageThroughTransport:(id)arg1 ;
-(NSString *)description;
-(void)transport:(id)arg1 didSendMessage:(id)arg2 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)evaluateConnectionWithResumeMessage:(id)arg1 ;
-(void)sendResumedMessage;
-(void)connectWithTransport:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 remoteUUID:(id)arg2 ;
-(void)processSessionMessage:(id)arg1 ;
-(void)restorePreviousSessionInfo;
-(void)abandonTransport;
-(id)captureTransport;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)sessionDidInvalidate;
-(BOOL)delegateShouldAcceptConnection;
-(void)operationDidIncrementProgress:(id)arg1 remoteUUID:(id)arg2 ;
-(void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1 ;
-(void)invalidate;
-(id)delegatePrepareOperationWithRequest:(id)arg1 error:(id*)arg2 ;
-(void)delegateDidInvalidate;
-(void)delegateDidInvalidateAndFinalize;
-(void)resumeCapturedTransportFromTaskSession:(id)arg1 ;
-(void)didCompleteSendForMessage:(id)arg1 ;
-(void)processStartMessage:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)acceptConnection;
-(void)delegateWillInvalidate;
-(void)discardPreviousSessionInfo;
-(void)delegateEnqueueOperation:(id)arg1 ;
-(void)processTaskMessage:(id)arg1 ;
-(void)delegatedidReceiveNotificationWithName:(id)arg1 ;
-(void)dealloc;
-(void)processCancelMessage:(id)arg1 ;
-(void)clientDidResumeWithMessage:(id)arg1 ;
-(void)connectWithTransportFromTaskSession:(id)arg1 ;
-(void)processFetchProgressMessage:(id)arg1 ;
@end

