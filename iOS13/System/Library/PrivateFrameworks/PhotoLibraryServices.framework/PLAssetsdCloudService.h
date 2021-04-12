/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdCloudServiceProtocol.h>

@class PLAssetsdCPLResourceDownloader, NSString;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol> {

	PLAssetsdCPLResourceDownloader* _resourceDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestVideoPlaybackURLForCloudSharedAsset:(id)arg1 mediaAssetType:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)arg1 taskIdentifier:(id)arg2 resourceType:(unsigned long long)arg3 HighPriority:(BOOL)arg4 trackCPLDownload:(BOOL)arg5 downloadIsTransient:(BOOL)arg6 reply:(/*^block*/id)arg7 ;
-(void)asynchronousStartPreheatingCPLDownloadForAssets:(id)arg1 doneTokens:(id)arg2 format:(unsigned long long)arg3 reply:(/*^block*/id)arg4 ;
-(void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)computeFingerPrintsOfAssetWithObjectURI:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg1 resourceDownloader:(id)arg2 ;
@end

