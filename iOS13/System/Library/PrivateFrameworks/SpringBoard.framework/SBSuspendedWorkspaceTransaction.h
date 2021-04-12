/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBApplicationProcessLaunchTransactionObserver.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver> {

	NSMapTable* _launchTransactionToSceneEntityMap;
	NSMutableSet* _outstandingProcessLaunchTransactions;
	NSMutableSet* _incompleteProcessLaunchTransactions;
	BOOL _anyLaunchFailed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didComplete;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
-(void)_sendActivationResultWithSuccess:(BOOL)arg1 ;
@end

