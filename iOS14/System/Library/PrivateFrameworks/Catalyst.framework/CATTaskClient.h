/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/CATTransportDelegate.h>

@protocol OS_dispatch_group, CATTaskClientDelegate;
@class CATStateMachine, CATTransport, NSMutableSet, NSMapTable, NSMutableArray, NSHashTable, NSObject, NSUUID, NSDictionary, NSString;

@interface CATTaskClient : NSObject <CATTransportDelegate> {

	CATStateMachine* mFSM;
	CATTransport* mTransport;
	NSMutableSet* mActiveRemoteTaskOperations;
	NSMapTable* mRemoteTaskByUUID;
	NSMutableArray* mEnqueuedMessages;
	NSMutableArray* mEnqueuedTaskUUIDs;
	NSHashTable* mOrphanedTransports;
	CATTaskClient* mStrongSelf;
	NSObject*<OS_dispatch_group> mSessionDidInvalidateGroup;
	BOOL mIsStarting;
	NSUUID* _sessionUUID;
	id<CATTaskClientDelegate> _delegate;
	NSDictionary* _userInfo;
	NSDictionary* _serverUserInfo;

}

@property (nonatomic,retain) NSUUID * sessionUUID;                                   //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * serverUserInfo;                            //@synthesize serverUserInfo=_serverUserInfo - In the implementation block
@property (nonatomic,readonly) CATTransport * transport; 
@property (assign,nonatomic,__weak) id<CATTaskClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setServerUserInfo:(NSDictionary *)arg1 ;
-(void)disconnect;
-(NSDictionary *)userInfo;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(void)transportDidInvalidate:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(CATTransport *)transport;
-(id)init;
-(NSUUID *)sessionUUID;
-(id<CATTaskClientDelegate>)delegate;
-(void)resumeCapturedTransportFromTaskClient:(id)arg1 ;
-(void)delegateDidDisconnect;
-(void)processNotificationMessage:(id)arg1 ;
-(void)enqueueMessage:(id)arg1 ;
-(void)delegatedidReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateDidInterruptWithError:(id)arg1 ;
-(id)prepareTaskOperationForRequest:(id)arg1 ;
-(NSDictionary *)serverUserInfo;
-(void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1 ;
-(void)didPrepareTaskOperation:(id)arg1 ;
-(void)resumeTransport:(id)arg1 ;
-(void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3 ;
-(void)delegateDidConnect;
-(void)transport:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)resumeWithTaskUUIDs:(id)arg1 ;
-(void)setDelegate:(id<CATTaskClientDelegate>)arg1 ;
-(void)sendMessageThroughTransport:(id)arg1 ;
-(NSString *)description;
-(void)transport:(id)arg1 didSendMessage:(id)arg2 ;
-(void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1 ;
-(void)enqueueTaskOperation:(id)arg1 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)resumeSession;
-(void)connectWithTransport:(id)arg1 ;
-(void)processSessionMessage:(id)arg1 ;
-(void)abandonTransport;
-(id)captureTransport;
-(void)transport:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)sessionDidInvalidate;
-(void)remoteTaskOperation:(id)arg1 preparedMessage:(id)arg2 ;
-(void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1 ;
-(void)connectWithTransportFromTaskClient:(id)arg1 ;
-(void)invalidate;
-(void)delegateDidInvalidate;
-(void)delegateDidInvalidateAndFinalize;
-(void)sessionResumedWithTaskUUIDs:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)transportDidResume:(id)arg1 ;
-(void)delegateWillInvalidate;
-(void)trackTaskOperation:(id)arg1 ;
-(void)processTaskMessage:(id)arg1 ;
-(void)taskOperationDidFailWithInvalidTaskClient:(id)arg1 ;
-(void)dealloc;
-(void)activeOperationDidFinish:(id)arg1 ;
@end

