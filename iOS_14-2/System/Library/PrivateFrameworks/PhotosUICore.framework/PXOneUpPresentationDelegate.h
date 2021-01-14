/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXOneUpPresentationDelegate <NSObject>
@optional
-(id)oneUpPresentationHelperScrollView:(id)arg1;
-(id)oneUpPresentationPhotosDetailsContext:(id)arg1;
-(id)oneUpPresentationInitialAssetReference:(id)arg1;
-(BOOL)oneUpPresentation:(id)arg1 canStartPreviewingForContextMenuInteraction:(id)arg2;
-(BOOL)oneUpPresentationShouldAutoPlay:(id)arg1;
-(BOOL)oneUpPresentation:(id)arg1 allowsActionsForContextMenuInteraction:(id)arg2;
-(BOOL)oneUpPresentation:(id)arg1 allowsPreviewCommitingForContextMenuInteraction:(id)arg2;
-(BOOL)oneUpPresentation:(id)arg1 commitPreviewForContextMenuInteraction:(id)arg2;
-(void)oneUpPresentation:(id)arg1 willStartPreviewingForContextMenuInteraction:(id)arg2;
-(void)oneUpPresentation:(id)arg1 didEndPreviewingForContextMenuInteraction:(id)arg2;
-(BOOL)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg1;
-(id)oneUpPresentationActionManager:(id)arg1;
-(BOOL)oneUpPresentationWantsShowInLibraryButton:(id)arg1;
-(id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
-(long long)oneUpPresentationActionContext:(id)arg1;
-(id)oneUpPresentationGestureProvider:(id)arg1;
-(id)oneUpPresentationImportStatusManager:(id)arg1;

@required
-(long long)oneUpPresentationOrigin:(id)arg1;
-(id)oneUpPresentationDataSourceManager:(id)arg1;
-(id)oneUpPresentationMediaProvider:(id)arg1;

@end

