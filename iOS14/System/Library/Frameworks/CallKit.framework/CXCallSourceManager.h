/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CXCallSourceDelegate.h>
#import <libobjc.A.dylib/CXTransactionManagerDelegate.h>

@protocol OS_dispatch_queue, CXCallSourceManagerDelegate;
@class NSObject, NSXPCListener, NSMutableSet, CXTransactionGroup, CXTransactionManager, NSArray, NSString;

@interface CXCallSourceManager : NSObject <NSXPCListenerDelegate, CXCallSourceDelegate, CXTransactionManagerDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallSourceManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSXPCListener* _xpcListener;
	NSMutableSet* _mutableCallSources;
	CXTransactionGroup* _uncommittedTransactionGroup;
	CXTransactionManager* _transactionManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                            //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallSourceManagerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                    //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                   //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableCallSources;                             //@synthesize mutableCallSources=_mutableCallSources - In the implementation block
@property (nonatomic,retain) CXTransactionGroup * uncommittedTransactionGroup;              //@synthesize uncommittedTransactionGroup=_uncommittedTransactionGroup - In the implementation block
@property (nonatomic,retain) CXTransactionManager * transactionManager;                     //@synthesize transactionManager=_transactionManager - In the implementation block
@property (nonatomic,readonly) NSArray * callSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3 ;
-(void)setMutableCallSources:(NSMutableSet *)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)removeCallSource:(id)arg1 ;
-(void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4 ;
-(id)init;
-(void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3 ;
-(id<CXCallSourceManagerDelegate>)delegate;
-(void)callSourceConnectionStarted:(id)arg1 ;
-(void)addCallSource:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2 ;
-(NSMutableSet *)mutableCallSources;
-(void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2 ;
-(id)callSourceWithIdentifier:(id)arg1 ;
-(void)setDelegate:(id<CXCallSourceManagerDelegate>)arg1 ;
-(void)setUncommittedTransactionGroup:(CXTransactionGroup *)arg1 ;
-(void)commitTransaction:(id)arg1 toCallSource:(id)arg2 ;
-(void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4 ;
-(NSArray *)callSources;
-(void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)callSource:(id)arg1 actionCompleted:(id)arg2 ;
-(void)failOutstandingActionsForCallWithUUID:(id)arg1 ;
-(void)commitUncommittedTransactions;
-(void)performDelegateCallback:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(CXTransactionGroup *)uncommittedTransactionGroup;
-(NSXPCListener *)xpcListener;
-(void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5 ;
-(void)addAction:(id)arg1 toUncommittedTransactionForCallSource:(id)arg2 ;
-(void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2 ;
-(void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3 ;
-(void)setTransactionManager:(CXTransactionManager *)arg1 ;
-(void)callSourceConnectionEnded:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4 ;
-(CXTransactionManager *)transactionManager;
-(void)callSourceInvalidated:(id)arg1 ;
-(void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3 ;
@end

