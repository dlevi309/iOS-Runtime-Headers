/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@interface BRCDownloadThumbnailsBatchOperation : BRCTransferBatchOperation {

	/*^block*/id _perDownloadCompletionBlock;

}

@property (copy) id perDownloadCompletionBlock;              //@synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock - In the implementation block
-(void)addDownload:(id)arg1 ;
-(id)createActivity;
-(id)initWithSyncContext:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setPerDownloadCompletionBlock:(id)arg1 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
-(id)perDownloadCompletionBlock;
-(id)transferredObjectsPrettyName;
@end

