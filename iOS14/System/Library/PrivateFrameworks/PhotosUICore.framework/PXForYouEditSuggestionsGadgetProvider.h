/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>

@class PXPhotoKitAdjustedUIMediaProvider, PXForYouSuggestionAssetsDataSourceManager, PXAssetReference, PXGestureProvider, NSString;

@interface PXForYouEditSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate> {

	PXPhotoKitAdjustedUIMediaProvider* _oneUpMediaProvider;
	PXForYouSuggestionAssetsDataSourceManager* _oneUpDataSourceManager;
	PXAssetReference* _oneUpInitialAssetReference;
	PXGestureProvider* _oneUpGestureProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_prepareForOneUpPresentationForSuggestion:(id)arg1 ;
-(void)presentOneUpForSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(id)suggestionGadgetPreviewController:(id)arg1 ;
-(void)suggestionGadget:(id)arg1 commitViewController:(id)arg2 ;
-(void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(BOOL)arg3 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2 ;
-(void)configureGadget:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationGestureProvider:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
@end

