/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDMMCSItemReaderWriterDelegateProtocol
@required
-(BOOL)willOpenItemReaderWriter:(id)arg1 error:(id*)arg2;
-(void)didOpenItemReaderWriter:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
-(BOOL)willCloseItemReaderWriter:(id)arg1 error:(id*)arg2;
-(void)didCloseItemReaderWriter:(id)arg1 result:(BOOL)arg2 error:(id)arg3;
-(BOOL)willGetFileMetadataItemReaderWriter:(id)arg1 error:(id*)arg2;
-(id)didGetFileMetadataItemReaderWriter:(id)arg1 fileMetadata:(id)arg2 error:(id)arg3;
-(BOOL)willReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char*)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;
-(BOOL)didReadFromItemReaderWriter:(id)arg1 offset:(unsigned long long)arg2 bytes:(char*)arg3 length:(unsigned long long)arg4 bytesRead:(unsigned long long*)arg5 error:(id*)arg6;

@end

