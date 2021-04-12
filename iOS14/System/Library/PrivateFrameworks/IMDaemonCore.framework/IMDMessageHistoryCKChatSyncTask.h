/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDMessageHistorySyncTask.h>

@class IMDCKSyncController, NSString;

@interface IMDMessageHistoryCKChatSyncTask : NSObject <IMDMessageHistorySyncTask> {

	IMDCKSyncController* _ckSyncController;
	/*^block*/id _syncTaskCompletionBlock;

}

@property (nonatomic,copy) id syncTaskCompletionBlock;              //@synthesize syncTaskCompletionBlock=_syncTaskCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCKSyncController:(id)arg1 ;
-(void)setSyncTaskCompletionBlock:(id)arg1 ;
-(void)startSyncTask:(/*^block*/id)arg1 ;
-(unsigned long long)syncTaskType;
-(id)syncTaskCompletionBlock;
-(void)_startICloudSync;
@end

