/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDMessageHistorySyncTask.h>

@class NSString, IMDAccountController, NSMutableDictionary;

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask> {

	NSString* _className;
	IMDAccountController* _accountController;
	NSMutableDictionary* _taskGroupedByServiceName;
	/*^block*/id _syncTaskCompletionBlock;

}

@property (nonatomic,retain) IMDAccountController * accountController;                    //@synthesize accountController=_accountController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * taskGroupedByServiceName;              //@synthesize taskGroupedByServiceName=_taskGroupedByServiceName - In the implementation block
@property (nonatomic,copy) id syncTaskCompletionBlock;                                    //@synthesize syncTaskCompletionBlock=_syncTaskCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(IMDAccountController *)accountController;
-(void)setAccountController:(IMDAccountController *)arg1 ;
-(id)initWithAccountController:(id)arg1 ;
-(void)setSyncTaskCompletionBlock:(id)arg1 ;
-(void)_setupAndBeginSync;
-(void)setTaskGroupedByServiceName:(NSMutableDictionary *)arg1 ;
-(/*^block*/id)_createProcessBatchBlockWithServiceSession:(id)arg1 ;
-(/*^block*/id)_createKnownRecordBlock;
-(/*^block*/id)_createSyncCompletionBlockForServiceSession:(id)arg1 ;
-(void)startSyncTask:(/*^block*/id)arg1 ;
-(unsigned long long)syncTaskType;
-(NSMutableDictionary *)taskGroupedByServiceName;
-(id)syncTaskCompletionBlock;
@end

