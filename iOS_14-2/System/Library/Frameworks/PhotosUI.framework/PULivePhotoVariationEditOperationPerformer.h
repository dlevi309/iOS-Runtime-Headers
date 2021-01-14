/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXAssetEditOperationPerformer.h>
#import <libobjc.A.dylib/PUPhotoEditResourceLoaderDelegate.h>

@class PUPhotoEditResourceLoader, PUPhotoEditResourceLoadResult, PUPhotoKitPhotoEditMediaDestination, PHAsset, NSString;

@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer <PUPhotoEditResourceLoaderDelegate> {

	/*^block*/id _completionHandler;
	BOOL _didSave;
	PUPhotoEditResourceLoader* _resourceLoader;
	PUPhotoEditResourceLoadResult* _loadResult;
	PUPhotoKitPhotoEditMediaDestination* _mediaDestination;

}

@property (nonatomic,readonly) PHAsset * asset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHAsset *)asset;
-(void)_calculateAnalysisResult;
-(void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2 ;
-(void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)performEditOperationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_completeWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleAnalysisCalculatorResponse:(id)arg1 ;
-(void)_handleAnalysisResult:(id)arg1 ;
-(void)_handleDidFinishSavingEditsForAsset:(id)arg1 error:(id)arg2 ;
@end

