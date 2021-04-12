/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol CPLResourceProgressDelegate <NSObject>
@optional
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4;

@required
-(void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;

@end

