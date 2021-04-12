/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class CKDMMCSItemGroupContext, CKDMMCSItem;


@protocol CKDMMCSItemReaderWriterProtocol <NSObject>
@property (nonatomic,readonly) CKDMMCSItemGroupContext * MMCSRequest; 
@property (nonatomic,readonly) CKDMMCSItem * MMCSItem; 
@required
-(BOOL)openWithError:(id*)arg1;
-(BOOL)closeWithError:(id*)arg1;
-(CKDMMCSItemGroupContext *)MMCSRequest;
-(CKDMMCSItem *)MMCSItem;
-(id)getFileMetadataWithError:(id*)arg1;
-(BOOL)readBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
-(BOOL)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char*)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@end

