/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/CFXReviewViewControllerDelegate.h>
#import <libobjc.A.dylib/PUOneUpAssetTransitionViewController.h>

@class PUReviewAsset, PUMediaProvider, PUReviewScreenBarsModel, PUObserverRegistry, CFXReviewViewController, PUReviewScreenTopBar, PUReviewScreenControlBar, PUReviewAdjustmentOutput, PUProgressIndicatorView, NSString;

@interface PUFunEffectsViewController : UIViewController <PXChangeObserver, CFXReviewViewControllerDelegate, PUOneUpAssetTransitionViewController> {

	BOOL __inputHasKnownAdjustments;
	BOOL __shouldHideBars;
	PUReviewAsset* _reviewAsset;
	PUMediaProvider* _mediaProvider;
	PUReviewScreenBarsModel* _reviewBarsModel;
	PUObserverRegistry* __observerRegistry;
	CFXReviewViewController* __effectsViewController;
	PUReviewScreenTopBar* __topBar;
	PUReviewScreenControlBar* __controlBar;
	long long __inputAdjustmentBaseVersion;
	PUReviewAdjustmentOutput* __exportAdjustmentOutput;
	unsigned long long __exportCompletion;
	PUProgressIndicatorView* __progressIndicatorView;

}

@property (nonatomic,readonly) PUObserverRegistry * _observerRegistry;                                                        //@synthesize _observerRegistry=__observerRegistry - In the implementation block
@property (nonatomic,readonly) CFXReviewViewController * _effectsViewController;                                              //@synthesize _effectsViewController=__effectsViewController - In the implementation block
@property (nonatomic,readonly) PUReviewScreenTopBar * _topBar;                                                                //@synthesize _topBar=__topBar - In the implementation block
@property (nonatomic,readonly) PUReviewScreenControlBar * _controlBar;                                                        //@synthesize _controlBar=__controlBar - In the implementation block
@property (nonatomic,readonly) BOOL _inputHasKnownAdjustments;                                                                //@synthesize _inputHasKnownAdjustments=__inputHasKnownAdjustments - In the implementation block
@property (nonatomic,readonly) long long _inputAdjustmentBaseVersion;                                                         //@synthesize _inputAdjustmentBaseVersion=__inputAdjustmentBaseVersion - In the implementation block
@property (nonatomic,retain) PUReviewAdjustmentOutput * _exportAdjustmentOutput;                                              //@synthesize _exportAdjustmentOutput=__exportAdjustmentOutput - In the implementation block
@property (assign,nonatomic) unsigned long long _exportCompletion;                                                            //@synthesize _exportCompletion=__exportCompletion - In the implementation block
@property (setter=_setProgressIndicatorView:,nonatomic,retain) PUProgressIndicatorView * _progressIndicatorView;              //@synthesize _progressIndicatorView=__progressIndicatorView - In the implementation block
@property (assign,setter=_setShouldHideBars:,nonatomic) BOOL _shouldHideBars;                                                 //@synthesize _shouldHideBars=__shouldHideBars - In the implementation block
@property (nonatomic,readonly) PUReviewAsset * reviewAsset;                                                                   //@synthesize reviewAsset=_reviewAsset - In the implementation block
@property (nonatomic,readonly) PUMediaProvider * mediaProvider;                                                               //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,retain) PUReviewScreenBarsModel * reviewBarsModel;                                                       //@synthesize reviewBarsModel=_reviewBarsModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(PUReviewScreenTopBar *)_topBar;
-(PUMediaProvider *)mediaProvider;
-(void)viewWillLayoutSubviews;
-(void)_updateLayout;
-(void)registerObserver:(id)arg1 ;
-(PUReviewScreenBarsModel *)reviewBarsModel;
-(id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(PUReviewAsset *)reviewAsset;
-(void)oneUpAssetTransition:(id)arg1 requestTransitionContextWithCompletion:(/*^block*/id)arg2 ;
-(void)oneUpAssetTransition:(id)arg1 animateTransitionWithContext:(id)arg2 duration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)oneUpAssetTransitionWillBegin:(id)arg1 ;
-(void)oneUpAssetTransitionDidEnd:(id)arg1 ;
-(void)reviewViewController:(id)arg1 didFinishExportingMediaItem:(id)arg2 withError:(id)arg3 ;
-(void)_handleDidTapRetakeButton:(id)arg1 ;
-(void)reviewViewController:(id)arg1 didProgress:(double)arg2 exportingMediaItem:(id)arg3 ;
-(void)reviewViewController:(id)arg1 didStartExportingMediaItem:(id)arg2 ;
-(void)reviewViewControllerDidHideUserInterface:(id)arg1 ;
-(void)reviewViewControllerDidShowUserInterface:(id)arg1 ;
-(void)_setShouldHideBars:(BOOL)arg1 ;
-(id)_barControlsForModelControls:(id)arg1 transitioning:(BOOL)arg2 ;
-(void)_setShouldHideBars:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_handleDidTapDoneButton:(id)arg1 ;
-(void)_handleDidTapFunEffectsButton:(id)arg1 ;
-(void)_handleDidTapMarkupButton:(id)arg1 ;
-(void)_handleDidTapEditButton:(id)arg1 ;
-(void)_handleDidTapSendButton:(id)arg1 ;
-(void)reviewViewControllerEffectsButtonWasTapped:(id)arg1 ;
-(void)_handleDismissCompletion;
-(void)_handleExportWithCompletion:(unsigned long long)arg1 ;
-(void)_exportWithCompletion:(unsigned long long)arg1 ;
-(void)_handleExportFailureWithError:(id)arg1 ;
-(void)_finishExportingWithMediaItem:(id)arg1 ;
-(void)_showProgressIndicator;
-(void)_dismissProgressIndicator;
-(void)_updateProgressIndicatorWithProgress:(double)arg1 ;
-(void)_signalCompletion:(unsigned long long)arg1 withSavedAsset:(id)arg2 ;
-(PUObserverRegistry *)_observerRegistry;
-(CFXReviewViewController *)_effectsViewController;
-(PUReviewScreenControlBar *)_controlBar;
-(BOOL)_inputHasKnownAdjustments;
-(long long)_inputAdjustmentBaseVersion;
-(PUReviewAdjustmentOutput *)_exportAdjustmentOutput;
-(void)set_exportAdjustmentOutput:(PUReviewAdjustmentOutput *)arg1 ;
-(unsigned long long)_exportCompletion;
-(void)set_exportCompletion:(unsigned long long)arg1 ;
-(PUProgressIndicatorView *)_progressIndicatorView;
-(void)_setProgressIndicatorView:(id)arg1 ;
-(BOOL)_shouldHideBars;
-(void)_updateBars;
-(void)viewDidLoad;
-(void)_handleCompletion:(unsigned long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setReviewBarsModel:(PUReviewScreenBarsModel *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

