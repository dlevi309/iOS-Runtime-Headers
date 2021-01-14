/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@protocol FBSynchronizedTransactionGroupDelegate;
@class NSMutableSet, NSString;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {

	BOOL _commitAllowed;
	BOOL _readyForCommit;
	BOOL _didCommit;
	NSMutableSet* _synchronizedTransactions;
	NSMutableSet* _synchronizedTransactionsAwaitingCommitReadiness;
	NSMutableSet* _synchronizedTransactionsReadyToCommit;
	id<FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;

}

@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(BOOL)_shouldFailForChildTransaction:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)init;
-(void)_didComplete;
-(id)synchronizedTransactions;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)_performSynchronizedCommitIfReady;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(void)addSynchronizedTransaction:(id)arg1 ;
-(void)_checkPreconditionsAndCommitIfReady;
-(void)_performSynchronizedCommit:(id)arg1 ;
-(BOOL)isReadyForSynchronizedCommit;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
@end

