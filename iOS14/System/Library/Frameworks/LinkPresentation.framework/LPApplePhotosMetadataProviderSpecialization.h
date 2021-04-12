/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@class PHPhotoLibrary, PHFetchResult, LPApplePhotosMomentMetadata, NSString;

@interface LPApplePhotosMetadataProviderSpecialization : LPMetadataProviderSpecialization <PXPhotoLibraryUIChangeObserver> {

	BOOL _cancelled;
	int _pendingImageRequest;
	PHPhotoLibrary* _photoLibrary;
	PHFetchResult* _keyAssetFetch;
	PHFetchResult* _anyAssetFetch;
	LPApplePhotosMomentMetadata* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(unsigned long long)specialization;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(void)fail;
-(void)start;
-(void)didFetchAsset:(id)arg1 ;
-(void)completeWithMetadata:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

