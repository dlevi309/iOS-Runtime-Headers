/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol CKXPCClient <NSObject>
@required
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3;
-(void)readBytesOfInMemoryAssetContentWithUUID:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;

@end

