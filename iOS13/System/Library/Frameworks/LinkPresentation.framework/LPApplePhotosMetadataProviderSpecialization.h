/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	LPApplePhotosMomentMetadata* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)specialization;
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(void)start;
-(void)fail;
-(void)didFetchKeyAsset:(id)arg1 ;
-(void)completeWithMetadata:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
@end

