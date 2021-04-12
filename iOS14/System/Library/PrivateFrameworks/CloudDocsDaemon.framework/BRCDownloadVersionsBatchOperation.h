/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class NSMutableDictionary;

@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation {

	NSMutableDictionary* _readers;
	/*^block*/id _perDownloadCompletionBlock;

}

@property (copy) id perDownloadCompletionBlock;              //@synthesize perDownloadCompletionBlock=_perDownloadCompletionBlock - In the implementation block
-(void)addDownload:(id)arg1 ;
-(id)createActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
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

