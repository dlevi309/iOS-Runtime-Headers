/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdResourceServiceProtocol <PLAssetsdResourceWriteOnlyServiceProtocol>
@required
-(void)filePathForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)imageDataForAssetWithObjectURI:(id)arg1 formatID:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 reply:(/*^block*/id)arg7;
-(void)fileDescriptorForPersistentURL:(id)arg1 withAdjustments:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)getSandboxExtensionForFileSystemBookmark:(id)arg1 reply:(/*^block*/id)arg2;
-(void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 reply:(/*^block*/id)arg3;
-(void)projectExtensionDataForProjectUuid:(id)arg1 reply:(/*^block*/id)arg2;
-(id)consolidateAssets:(id)arg1 reply:(/*^block*/id)arg2;
-(void)downloadCloudSharedAsset:(id)arg1 wantedPlaceholderkind:(short)arg2 shouldPrioritize:(BOOL)arg3 shouldExtendTimer:(BOOL)arg4 reply:(/*^block*/id)arg5;
-(void)estimatedFileLengthOfVideo:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4 reply:(/*^block*/id)arg5;
-(void)getSandboxExtensionsForAssetWithUUID:(id)arg1 reply:(/*^block*/id)arg2;
-(void)generateOnDemandResourcesForAsset:(id)arg1 reply:(/*^block*/id)arg2;
-(void)asynchronousAdjustmentDataForAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 withDataBlob:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)updateInternalResourcePath:(id)arg1 objectURI:(id)arg2 sandboxExtension:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addAssetGroupWithName:(id)arg1 reply:(/*^block*/id)arg2;

@end

