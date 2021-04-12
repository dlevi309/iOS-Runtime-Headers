/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAssetsdResourceWriteOnlyService.h>
#import <libobjc.A.dylib/PLAssetsdResourceServiceProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, PLAssetsdConnectionAuthorization, PLAssetsdCPLResourceDownloader, NSString;

@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol> {

	NSObject*<OS_dispatch_queue> _asyncImageDataQueue;
	PLAssetsdConnectionAuthorization* _connectionAuthorization;
	PLAssetsdCPLResourceDownloader* _resourceDownloader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAssetGroupWithName:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)filePathForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)fileDescriptorForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
-(void)imageDataForAssetWithObjectURI:(id)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 reply:(/*^block*/id)arg7 ;
-(void)getSandboxExtensionForAssetResourcePath:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getSandboxExtensionForFileSystemBookmark:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)asynchronousVideoURLForAsset:(id)arg1 format:(unsigned short)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(BOOL)arg4 streamingAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 restrictToPlayable:(BOOL)arg7 reply:(/*^block*/id)arg8 ;
-(void)asynchronousAdjustmentDataForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 withDataBlob:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)estimatedFileLengthOfVideo:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)downloadCloudSharedAsset:(id)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 reply:(/*^block*/id)arg5 ;
-(void)generateOnDemandResourcesForAsset:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)consolidateAssets:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 sandboxExtension:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)projectExtensionDataForProjectUuid:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)saveAssetWithDataAndPorts:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)initWithLibraryServicesManager:(id)arg1 connectionAuthorization:(id)arg2 resourceDownloader:(id)arg3 ;
-(BOOL)_requiresFullsizeRenderGenerationForAsset:(id)arg1 format:(id)arg2 ;
-(void)_generateFullsizeRenderForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_generateFullsizeRenderForAssetIfNecessary:(id)arg1 format:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_utiFromPathConstrainedToImageOrMovie:(id)arg1 ;
-(void)translatePersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_consolidateResource:(id)arg1 assetUUID:(id)arg2 error:(id*)arg3 ;
@end

