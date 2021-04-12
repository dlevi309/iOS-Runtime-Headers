/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_begin;
-(void)_didComplete;
-(void)_sendActivationResultWithError:(id)arg1 ;
-(void)transaction:(id)arg1 willLaunchProcess:(id)arg2 ;
@end

