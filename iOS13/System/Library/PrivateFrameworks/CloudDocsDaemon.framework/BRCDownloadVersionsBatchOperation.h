/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class NSMutableDictionary;

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {

	NSMutableDictionary* _readers;
	/*^block*/id _perDownloadCompletionBlock;

}

@property (copy) id perDownloadCompletionBlock;              //@synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)addDownload:(id)arg1 ;
-(id)createActivity;
-(void)setPerDownloadCompletionBlock:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 forNonLocalVersion:(BOOL)arg2 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
-(void)addReaderID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelReaderID:(id)arg1 ;
-(id)perDownloadCompletionBlock;
-(id)transferredObjectsPrettyName;
@end

