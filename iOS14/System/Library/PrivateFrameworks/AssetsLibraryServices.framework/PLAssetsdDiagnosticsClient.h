/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient
-(BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(id*)arg1 error:(id*)arg2 ;
-(void)setSharedMemoryForDeferredLogging:(id)arg1 ;
-(BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)incompleteRestoreProcesses:(id*)arg1 error:(id*)arg2 ;
-(void)setPhotosXPCEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)getPhotosXPCEndpoint:(id*)arg1 error:(id*)arg2 ;
@end

