/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>
#import <libobjc.A.dylib/PXOneUpPresentationDelegate.h>
#import <libobjc.A.dylib/PXActionPerformerDelegate.h>

@class PXPhotoKitAdjustedUIMediaProvider, PXForYouSuggestionAssetsDataSourceManager, PXAssetReference, NSString;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <PXOneUpPresentationDelegate, PXActionPerformerDelegate> {

	PXPhotoKitAdjustedUIMediaProvider* _oneUpMediaProvider;
	PXForYouSuggestionAssetsDataSourceManager* _oneUpDataSourceManager;
	PXAssetReference* _oneUpInitialAssetReference;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)_prepareForOneUpPresentationForSuggestion:(id)arg1 ;
-(void)presentOneUpForSuggestion:(id)arg1 animated:(BOOL)arg2 ;
-(id)suggestionGadgetPreviewController:(id)arg1 ;
-(void)suggestionGadget:(id)arg1 commitViewController:(id)arg2 ;
-(void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(BOOL)arg3 ;
-(void)_insertRemoveSuggestionActionIntoPreview:(id)arg1 forGadget:(id)arg2 ;
-(void)_fileRadarForSuggestion:(id)arg1 ;
-(void)_addTTRActionIntoPreview:(id)arg1 forGadget:(id)arg2 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
@end

