/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient
-(void)setSharedMemoryForDeferredLogging:(id)arg1 ;
-(BOOL)getPhotosXPCEndpoint:(id*)arg1 error:(id*)arg2 ;
-(BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id*)arg1 error:(id*)arg2 ;
-(BOOL)incompleteRestoreProcesses:(id*)arg1 error:(id*)arg2 ;
-(void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

