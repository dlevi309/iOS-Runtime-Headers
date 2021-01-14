/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <libobjc.A.dylib/CATTaskSessionDelegate.h>

@protocol OS_dispatch_group, CATTaskServerDelegate;
@class CATStateMachine, NSMutableSet, NSMutableDictionary, NSObject, CATOperationQueue, NSDictionary, NSArray, NSString;

@interface CATTaskServer : NSObject <CATTaskSessionDelegate> {

	CATStateMachine* mFSM;
	NSMutableSet* mSessions;
	NSMutableDictionary* mActiveSessionsByUUID;
	NSMutableDictionary* mInvalidatingSessionsByUUID;
	NSMutableDictionary* mConnectedSessionsByUUID;
	CATTaskServer* mStrongSelf;
	NSObject*<OS_dispatch_group> mAllSessionsDidInvalidateGroup;
	CATOperationQueue* mOrphanedOperationQueue;
	id<CATTaskServerDelegate> _delegate;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic,__weak) id<CATTaskServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * clientSessions; 
@property (nonatomic,copy,readonly) NSArray * connectedClientSessions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sessionDidDisconnect:(id)arg1 ;
-(void)sessionDidConnect:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)delegateClientSession:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(NSDictionary *)userInfo;
-(id)init;
-(id<CATTaskServerDelegate>)delegate;
-(void)disconnectAllClientSessions;
-(void)sessionDidInvalidate:(id)arg1 ;
-(void)makeSessionWithClientTransport:(id)arg1 ;
-(void)session:(id)arg1 enqueueOperation:(id)arg2 ;
-(BOOL)delegateClientSession:(id)arg1 shouldConnectWithTransport:(id)arg2 ;
-(void)delegateClientSessionDidConnect:(id)arg1 ;
-(void)setDelegate:(id<CATTaskServerDelegate>)arg1 ;
-(NSArray *)clientSessions;
-(void)invalidateAllClientSessions;
-(void)allSessionsDidInvalidate;
-(NSArray *)connectedClientSessions;
-(void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)invalidateWithError:(id)arg1 ;
-(void)session:(id)arg1 didInterruptWithError:(id)arg2 ;
-(BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2 ;
-(void)startInvalidatingWithError:(id)arg1 ;
-(void)delegateClientSessionDidDisconnect:(id)arg1 ;
-(void)invalidate;
-(void)delegateDidInvalidate;
-(void)delegateDidInvalidateAndFinalize;
-(void)delegateSessionDidInvalidate:(id)arg1 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)delegateClientSession:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id*)arg3 ;
-(void)sessionWillInvalidate:(id)arg1 ;
-(void)connectWithClientTransport:(id)arg1 ;
-(void)dealloc;
@end

