/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@protocol PXOneUpPresentationImplementationDelegate, PXOneUpPresentationDelegate;
@class UIContextMenuInteraction, UIViewController, UITargetedPreview, NSMapTable, PXAssetsDataSourceManager, PXUIMediaProvider, PXGestureProvider, PXPhotosDetailsContext, PXAssetReference, PXAssetActionManager, UIScrollView, NSString;

@interface PXOneUpPresentation : NSObject <UIContextMenuInteractionDelegate> {

	struct {
		BOOL respondsToPhotosDetailsContext;
		BOOL respondsToInitialAssetReference;
		BOOL respondsToCanStartPreviewingForContextMenuInteraction;
		BOOL respondsToAllowsActionsForContextMenuInteraction;
		BOOL respondsToAllowsPreviewCommitingForContextMenuInteraction;
		BOOL respondsToCommitPreviewForContextMenuInteraction;
		BOOL respondsToWillStartPreviewingForContextMenuInteraction;
		BOOL respondsToDidEndPreviewingForContextMenuInteraction;
		BOOL respondsToCurrentImageForAssetReference;
		BOOL respondsToRegionOfInterestForAssetReference;
		BOOL respondsToScrollAssetReferenceToVisible;
		BOOL respondsToSetHiddenAssetReferences;
		BOOL respondsToShouldAutoPlay;
		BOOL respondsToPreventShowInAllPhotos;
		BOOL respondsToActionManager;
		BOOL respondsToActionManagerForPreviewing;
		BOOL respondsToActionContext;
		BOOL respondsToGestureProvider;
		BOOL respondsToImportStatusManager;
		BOOL respondsToOrigin;
		BOOL respondsToScrollView;
	}  _delegateFlags;
	SCD_Struct_PX45 _implementationDelegateFlags;
	BOOL _isContextMenuInteractionActive;
	BOOL _enabled;
	id<PXOneUpPresentationImplementationDelegate> __implementationDelegate;
	UIContextMenuInteraction* _contextMenuInteraction;
	id<PXOneUpPresentationDelegate> _delegate;
	UIViewController* _currentPreviewViewController;
	UITargetedPreview* _interactionTargetedPreview;
	NSMapTable* _contextMenuStateByConfiguration;
	UIViewController* _presentingViewController;
	UIViewController* _originalPresentingViewController;
	id<PXOneUpPresentationImplementationDelegate> _implementationDelegate;

}

@property (nonatomic,retain) UIViewController * currentPreviewViewController;                                                                              //@synthesize currentPreviewViewController=_currentPreviewViewController - In the implementation block
@property (nonatomic,retain) UITargetedPreview * interactionTargetedPreview;                                                                               //@synthesize interactionTargetedPreview=_interactionTargetedPreview - In the implementation block
@property (nonatomic,retain) NSMapTable * contextMenuStateByConfiguration;                                                                                 //@synthesize contextMenuStateByConfiguration=_contextMenuStateByConfiguration - In the implementation block
@property (assign,setter=_setImplementationDelegate:,nonatomic,__weak) id<PXOneUpPresentationImplementationDelegate> _implementationDelegate;              //@synthesize _implementationDelegate=__implementationDelegate - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * presentingViewController;                                                                         //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,readonly) long long origin; 
@property (assign,nonatomic,__weak) UIViewController * originalPresentingViewController;                                                                   //@synthesize originalPresentingViewController=_originalPresentingViewController - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                                                                //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<PXOneUpPresentationImplementationDelegate> implementationDelegate;                                                  //@synthesize implementationDelegate=_implementationDelegate - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSourceManager * dataSourceManager; 
@property (nonatomic,readonly) PXUIMediaProvider * mediaProvider; 
@property (nonatomic,readonly) PXGestureProvider * gestureProvider; 
@property (nonatomic,readonly) PXPhotosDetailsContext * photosDetailsContext; 
@property (nonatomic,readonly) PXAssetReference * initialAssetReference; 
@property (nonatomic,readonly) PXAssetActionManager * actionManager; 
@property (nonatomic,readonly) PXAssetActionManager * actionManagerForPreviewing; 
@property (nonatomic,readonly) long long actionContext; 
@property (nonatomic,readonly) id<PXAssetImportStatusManager> importStatusManager; 
@property (nonatomic,readonly) BOOL shouldAutoPlay; 
@property (nonatomic,readonly) BOOL preventShowInAllPhotosAction; 
@property (nonatomic,readonly) BOOL wantsShowInLibraryButton; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic,__weak) id<PXOneUpPresentationDelegate> delegate;                                                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canStart; 
@property (nonatomic,readonly) BOOL canStop; 
@property (nonatomic,readonly) UIContextMenuInteraction * contextMenuInteraction;                                                                          //@synthesize contextMenuInteraction=_contextMenuInteraction - In the implementation block
@property (nonatomic,readonly) BOOL isContextMenuInteractionActive;                                                                                        //@synthesize isContextMenuInteractionActive=_isContextMenuInteractionActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultImplementationDelegate;
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(PXUIMediaProvider *)mediaProvider;
-(id)previewViewControllerAllowingActions:(BOOL)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)invalidatePresentingGeometry;
-(UIContextMenuInteraction *)contextMenuInteraction;
-(long long)origin;
-(id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2 ;
-(id)init;
-(BOOL)wantsShowInLibraryButton;
-(BOOL)isContextMenuInteractionActive;
-(id<PXOneUpPresentationDelegate>)delegate;
-(id)initWithPresentingViewController:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)waitUntilPresentationCanStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(UITargetedPreview *)interactionTargetedPreview;
-(void)setInteractionTargetedPreview:(UITargetedPreview *)arg1 ;
-(NSMapTable *)contextMenuStateByConfiguration;
-(void)setContextMenuStateByConfiguration:(NSMapTable *)arg1 ;
-(void)setOriginalPresentingViewController:(UIViewController *)arg1 ;
-(long long)actionContext;
-(PXAssetActionManager *)actionManager;
-(void)setHiddenAssetReferences:(id)arg1 ;
-(void)scrollAssetReferenceToVisible:(id)arg1 ;
-(id)currentImageForAssetReference:(id)arg1 ;
-(BOOL)canStart;
-(UIViewController *)originalPresentingViewController;
-(BOOL)preventShowInAllPhotosAction;
-(BOOL)shouldAutoPlay;
-(PXAssetActionManager *)actionManagerForPreviewing;
-(PXAssetReference *)initialAssetReference;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<PXOneUpPresentationDelegate>)arg1 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(PXAssetsDataSourceManager *)dataSourceManager;
-(PXGestureProvider *)gestureProvider;
-(PXPhotosDetailsContext *)photosDetailsContext;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg1 ;
-(BOOL)canStop;
-(void)stopAnimated:(BOOL)arg1 ;
-(id)regionOfInterestForAssetReference:(id)arg1 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)startAnimated:(BOOL)arg1 interactiveMode:(long long)arg2 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(id<PXAssetImportStatusManager>)importStatusManager;
-(UIScrollView *)scrollView;
-(id<PXOneUpPresentationImplementationDelegate>)_implementationDelegate;
-(void)_updateImplementationDelegate;
-(void)_setImplementationDelegate:(id)arg1 ;
-(id<PXOneUpPresentationImplementationDelegate>)implementationDelegate;
-(void)setImplementationDelegate:(id<PXOneUpPresentationImplementationDelegate>)arg1 ;
-(UIViewController *)currentPreviewViewController;
-(void)setCurrentPreviewViewController:(UIViewController *)arg1 ;
@end

