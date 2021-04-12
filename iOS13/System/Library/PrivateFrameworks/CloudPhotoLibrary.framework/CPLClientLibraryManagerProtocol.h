/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol CPLClientLibraryManagerProtocol <NSObject>
@required
-(void)downloadDidStartForResourceTransferTask:(id)arg1;
-(void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
-(void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
-(void)inMemoryDownloadDidFinishForResourceTransferTask:(id)arg1 data:(id)arg2 withError:(id)arg3;
-(void)backgroundDownloadDidFinishForResource:(id)arg1;
-(void)backgroundDownloadDidFailForResource:(id)arg1;
-(void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
-(void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;
-(void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
-(void)libraryManagerHasChangesToPull;
-(void)libraryManagerHasStatusChanges;
-(void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
-(void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned long long)arg3 numberOfVideos:(unsigned long long)arg4 numberOfOtherItems:(unsigned long long)arg5;
-(void)forceSyncDidFinishForTask:(id)arg1 withErrors:(id)arg2;
-(void)provideLocalResource:(id)arg1 recordClassString:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)libraryManagerHasBeenReplaced;

@end

