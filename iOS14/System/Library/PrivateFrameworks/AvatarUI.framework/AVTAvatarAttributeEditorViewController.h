/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTAvatarAttributeEditorControllerSubSelectionDelegate.h>
#import <libobjc.A.dylib/AVTGroupPickerDelegate.h>
#import <libobjc.A.dylib/AVTCollapsibleHeaderControllerDelegate.h>
#import <libobjc.A.dylib/AVTTransitionModel.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <libobjc.A.dylib/AVTFaceTrackingManagerDelegate.h>
#import <libobjc.A.dylib/AVTAttributeEditorSectionHeaderViewDelegate.h>

@protocol AVTAvatarAttributeEditorViewControllerDelegate, AVTAvatarAttributeEditorLayout, AVTTaskScheduler;
@class AVTAvatarAttributeEditorModelManager, UIView, AVTGroupDial, AVTGroupListCollectionView, AVTShadowView, UICollectionView, AVTAvatarAttributeEditorDataSource, AVTAttributeEditorAnimationCoordinator, UILabel, CALayer, AVTViewSessionProvider, AVTViewSession, AVTCollapsibleHeaderController, UITapGestureRecognizer, AVTViewThrottler, AVTUIEnvironment, AVTImageTransitioningContainerView, AVTTransition, NSDate, _AVTAvatarRecordImageProvider, AVTAvatarRecord, AVTMemoji, NSString;

@interface AVTAvatarAttributeEditorViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout, AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTGroupPickerDelegate, AVTCollapsibleHeaderControllerDelegate, AVTTransitionModel, AVTNotifyingContainerViewDelegate, AVTFaceTrackingManagerDelegate, AVTAttributeEditorSectionHeaderViewDelegate> {

	BOOL _disableAvatarSnapshotting;
	BOOL _isCreating;
	BOOL _hasMadeAnySelection;
	BOOL _isAnimatingHighlight;
	BOOL _allowFacetracking;
	BOOL _collectionViewIsPerformingBatchUpdates;
	id<AVTAvatarAttributeEditorViewControllerDelegate> _delegate;
	id<AVTAvatarAttributeEditorLayout> _currentLayout;
	AVTAvatarAttributeEditorModelManager* _modelManager;
	id<AVTTaskScheduler> _imageProviderScheduler;
	UIView* _attributesContainerView;
	UIView* _sideGroupContainerView;
	UIView* _groupDialContainerView;
	AVTGroupDial* _groupDial;
	AVTGroupListCollectionView* _groupListView;
	UIView* _headerMaskingView;
	AVTShadowView* _shadowView;
	UICollectionView* _attributesCollectionView;
	AVTAvatarAttributeEditorDataSource* _dataSource;
	AVTAttributeEditorAnimationCoordinator* _animationCoordinator;
	UILabel* _alphaAssetsLabel;
	UIView* _verticleRuleContainer;
	CALayer* _verticleRule;
	AVTViewSessionProvider* _avtViewSessionProvider;
	AVTViewSession* _avtViewSession;
	AVTCollapsibleHeaderController* _collapsibleHeaderController;
	UITapGestureRecognizer* _tapGestureRecognizer;
	AVTViewThrottler* _avtViewThrottler;
	AVTUIEnvironment* _environment;
	/*^block*/id _postSessionDidBecomeActiveHandler;
	AVTImageTransitioningContainerView* _transitioningContainer;
	AVTTransition* _currentTransition;
	NSDate* _lastPosedAvatarImageRenderingTime;
	/*^block*/id _pendingUnhighlightBlock;
	_AVTAvatarRecordImageProvider* _headerPreviewImageRenderer;
	id<AVTTaskScheduler> _headerPreviewScheduler;
	/*^block*/id _pendingCollectionViewReloadDataBlock;

}

@property (nonatomic,retain) id<AVTAvatarAttributeEditorLayout> currentLayout;                                //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,readonly) AVTAvatarAttributeEditorModelManager * modelManager;                           //@synthesize modelManager=_modelManager - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> imageProviderScheduler;                                   //@synthesize imageProviderScheduler=_imageProviderScheduler - In the implementation block
@property (nonatomic,retain) UIView * attributesContainerView;                                                //@synthesize attributesContainerView=_attributesContainerView - In the implementation block
@property (nonatomic,retain) UIView * sideGroupContainerView;                                                 //@synthesize sideGroupContainerView=_sideGroupContainerView - In the implementation block
@property (nonatomic,retain) UIView * groupDialContainerView;                                                 //@synthesize groupDialContainerView=_groupDialContainerView - In the implementation block
@property (nonatomic,retain) AVTGroupDial * groupDial;                                                        //@synthesize groupDial=_groupDial - In the implementation block
@property (nonatomic,retain) AVTGroupListCollectionView * groupListView;                                      //@synthesize groupListView=_groupListView - In the implementation block
@property (nonatomic,retain) UIView * headerMaskingView;                                                      //@synthesize headerMaskingView=_headerMaskingView - In the implementation block
@property (nonatomic,retain) AVTShadowView * shadowView;                                                      //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UICollectionView * attributesCollectionView;                                     //@synthesize attributesCollectionView=_attributesCollectionView - In the implementation block
@property (nonatomic,retain) AVTAvatarAttributeEditorDataSource * dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) AVTAttributeEditorAnimationCoordinator * animationCoordinator;                   //@synthesize animationCoordinator=_animationCoordinator - In the implementation block
@property (nonatomic,retain) UILabel * alphaAssetsLabel;                                                      //@synthesize alphaAssetsLabel=_alphaAssetsLabel - In the implementation block
@property (nonatomic,retain) UIView * verticleRuleContainer;                                                  //@synthesize verticleRuleContainer=_verticleRuleContainer - In the implementation block
@property (nonatomic,retain) CALayer * verticleRule;                                                          //@synthesize verticleRule=_verticleRule - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * avtViewSessionProvider;                               //@synthesize avtViewSessionProvider=_avtViewSessionProvider - In the implementation block
@property (nonatomic,retain) AVTViewSession * avtViewSession;                                                 //@synthesize avtViewSession=_avtViewSession - In the implementation block
@property (nonatomic,retain) AVTCollapsibleHeaderController * collapsibleHeaderController;                    //@synthesize collapsibleHeaderController=_collapsibleHeaderController - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                                   //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) AVTViewThrottler * avtViewThrottler;                                             //@synthesize avtViewThrottler=_avtViewThrottler - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                                                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) id postSessionDidBecomeActiveHandler;                                              //@synthesize postSessionDidBecomeActiveHandler=_postSessionDidBecomeActiveHandler - In the implementation block
@property (nonatomic,readonly) BOOL isCreating;                                                               //@synthesize isCreating=_isCreating - In the implementation block
@property (assign,nonatomic) BOOL hasMadeAnySelection;                                                        //@synthesize hasMadeAnySelection=_hasMadeAnySelection - In the implementation block
@property (nonatomic,retain) AVTImageTransitioningContainerView * transitioningContainer;                     //@synthesize transitioningContainer=_transitioningContainer - In the implementation block
@property (nonatomic,retain) AVTTransition * currentTransition;                                               //@synthesize currentTransition=_currentTransition - In the implementation block
@property (nonatomic,retain) NSDate * lastPosedAvatarImageRenderingTime;                                      //@synthesize lastPosedAvatarImageRenderingTime=_lastPosedAvatarImageRenderingTime - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingHighlight;                                                       //@synthesize isAnimatingHighlight=_isAnimatingHighlight - In the implementation block
@property (nonatomic,copy) id pendingUnhighlightBlock;                                                        //@synthesize pendingUnhighlightBlock=_pendingUnhighlightBlock - In the implementation block
@property (assign,nonatomic) BOOL allowFacetracking;                                                          //@synthesize allowFacetracking=_allowFacetracking - In the implementation block
@property (nonatomic,retain) _AVTAvatarRecordImageProvider * headerPreviewImageRenderer;                      //@synthesize headerPreviewImageRenderer=_headerPreviewImageRenderer - In the implementation block
@property (nonatomic,readonly) id<AVTTaskScheduler> headerPreviewScheduler;                                   //@synthesize headerPreviewScheduler=_headerPreviewScheduler - In the implementation block
@property (assign,nonatomic) BOOL collectionViewIsPerformingBatchUpdates;                                     //@synthesize collectionViewIsPerformingBatchUpdates=_collectionViewIsPerformingBatchUpdates - In the implementation block
@property (nonatomic,copy) id pendingCollectionViewReloadDataBlock;                                           //@synthesize pendingCollectionViewReloadDataBlock=_pendingCollectionViewReloadDataBlock - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecord * avatarRecord; 
@property (nonatomic,readonly) AVTMemoji * avatar; 
@property (assign,nonatomic,__weak) id<AVTAvatarAttributeEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disableAvatarSnapshotting;                                                  //@synthesize disableAvatarSnapshotting=_disableAvatarSnapshotting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorRowIdentifier;
+(id)attributeRowIdentifier;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transitionStaticViewToFront;
-(AVTAttributeEditorAnimationCoordinator *)animationCoordinator;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)transitionLiveViewToFront;
-(void)setAnimationCoordinator:(AVTAttributeEditorAnimationCoordinator *)arg1 ;
-(AVTMemoji *)avatar;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id<AVTAvatarAttributeEditorViewControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id<AVTAvatarAttributeEditorLayout>)currentLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)setCurrentLayout:(id<AVTAvatarAttributeEditorLayout>)arg1 ;
-(AVTAvatarAttributeEditorDataSource *)dataSource;
-(AVTShadowView *)shadowView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(AVTGroupDial *)groupDial;
-(void)setDelegate:(id<AVTAvatarAttributeEditorViewControllerDelegate>)arg1 ;
-(void)setDataSource:(AVTAvatarAttributeEditorDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)liveView;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(AVTAvatarRecord *)avatarRecord;
-(void)viewDidLoad;
-(BOOL)allowFacetracking;
-(void)beginAVTViewSessionWithDidBeginBlock:(/*^block*/id)arg1 ;
-(id)postSessionDidBecomeActiveHandler;
-(void)setPostSessionDidBecomeActiveHandler:(id)arg1 ;
-(void)configureUserInfoLabel;
-(long long)interfaceOrientationForFaceTrackingManager:(id)arg1 ;
-(void)setAllowFacetracking:(BOOL)arg1 ;
-(void)groupPicker:(id)arg1 didSelectGroupAtIndex:(long long)arg2 tapped:(BOOL)arg3 ;
-(void)groupPicker:(id)arg1 didDeselectGroupAtIndex:(long long)arg2 ;
-(void)setCurrentTransition:(AVTTransition *)arg1 ;
-(void)collapsibleHeaderController:(id)arg1 willUpdateHeaderToHeight:(double)arg2 ;
-(void)applyLayout:(id)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)didTapAvatarView:(id)arg1 ;
-(AVTViewSessionProvider *)avtViewSessionProvider;
-(void)setDisableAvatarSnapshotting:(BOOL)arg1 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(void)setShadowView:(AVTShadowView *)arg1 ;
-(void)applyFullAlpha;
-(void)applyBaseAlpha;
-(AVTUIEnvironment *)environment;
-(AVTAvatarAttributeEditorModelManager *)modelManager;
-(void)setHeaderPreviewImageRenderer:(_AVTAvatarRecordImageProvider *)arg1 ;
-(id)createAlphaAssetsLabel;
-(void)updateImageViewWithPosedAvatarRecordForcingRender:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAlphaAssetsLabel:(UILabel *)arg1 ;
-(UILabel *)alphaAssetsLabel;
-(id<AVTTaskScheduler>)headerPreviewScheduler;
-(id<AVTTaskScheduler>)imageProviderScheduler;
-(void)setupPreview:(/*^block*/id)arg1 ;
-(void)updateLayoutAttributes;
-(CALayer *)verticleRule;
-(UICollectionView *)attributesCollectionView;
-(AVTTransition *)currentTransition;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)reloadCollectionViewDataWithCompletion:(/*^block*/id)arg1 ;
-(UIView *)attributesContainerView;
-(AVTImageTransitioningContainerView *)transitioningContainer;
-(_AVTAvatarRecordImageProvider *)headerPreviewImageRenderer;
-(void)setupImageView;
-(void)setupCollapsibleHeaderIfNeededForLayout:(id)arg1 withSession:(id)arg2 ;
-(void)configureThrottlerForAVTView:(id)arg1 ;
-(void)setupTapGestureForView:(id)arg1 ;
-(void)configureAVTViewFromSession:(id)arg1 ;
-(void)transitionToLiveViewAnimated:(BOOL)arg1 ;
-(void)tearDownThrottler;
-(void)tearDownCollapsibleHeaderIfNeeded;
-(void)setAvtViewThrottler:(AVTViewThrottler *)arg1 ;
-(AVTViewThrottler *)avtViewThrottler;
-(AVTCollapsibleHeaderController *)collapsibleHeaderController;
-(UIView *)headerMaskingView;
-(void)setCollapsibleHeaderController:(AVTCollapsibleHeaderController *)arg1 ;
-(void)updateCollapsibleHeaderHeightConstraintsAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)adjustedSafeAreaInsets;
-(void)applyLayout:(id)arg1 layoutAvatarView:(BOOL)arg2 ;
-(void)setupGroupSelectorIfNeeded;
-(UIView *)groupDialContainerView;
-(UIView *)sideGroupContainerView;
-(void)createVerticleRuleIfNeeded;
-(BOOL)isCreating;
-(void)updateAlphaAssetsLabelFrameIfNeeded;
-(UIView *)verticleRuleContainer;
-(void)setVerticleRuleContainer:(UIView *)arg1 ;
-(void)setVerticleRule:(CALayer *)arg1 ;
-(BOOL)collectionViewIsPerformingBatchUpdates;
-(void)setPendingCollectionViewReloadDataBlock:(id)arg1 ;
-(void)setIsAnimatingHighlight:(BOOL)arg1 ;
-(id)pendingUnhighlightBlock;
-(void)updateHeaderDependentLayoutWithHeaderFrame:(CGRect)arg1 fittingSize:(CGSize)arg2 ;
-(void)setPendingUnhighlightBlock:(id)arg1 ;
-(BOOL)isAnimatingHighlight;
-(void)updateForSelectionOfSupplementalItem:(id)arg1 senderRect:(CGRect)arg2 ;
-(void)presentActionSheetForSuppPicker:(id)arg1 sender:(id)arg2 ;
-(id)presetSectionItemForIndexPath:(id)arg1 ;
-(void)resetAllSectionControllersStateToDefault;
-(void)updateForSelectionOfItem:(id)arg1 controller:(id)arg2 ;
-(NSDate *)lastPosedAvatarImageRenderingTime;
-(void)setLastPosedAvatarImageRenderingTime:(NSDate *)arg1 ;
-(void)updateForSelectionOfItem:(id)arg1 inSection:(id)arg2 senderRect:(CGRect)arg3 ;
-(id)pendingCollectionViewReloadDataBlock;
-(void)rebuildUIModelAfterSelectionInSection:(id)arg1 senderRect:(CGRect)arg2 ;
-(void)setCollectionViewIsPerformingBatchUpdates:(BOOL)arg1 ;
-(void)updateForChangedSelectionIfNeeded;
-(BOOL)hasMadeAnySelection;
-(void)setHasMadeAnySelection:(BOOL)arg1 ;
-(id)selectedItemInSection:(id)arg1 ;
-(void)loadView;
-(void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2 ;
-(void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1 ;
-(void)sectionHeaderView:(id)arg1 didTapSupplementalPicker:(id)arg2 sender:(id)arg3 ;
-(void)setAttributesContainerView:(UIView *)arg1 ;
-(void)setSideGroupContainerView:(UIView *)arg1 ;
-(void)setGroupDial:(AVTGroupDial *)arg1 ;
-(void)setGroupDialContainerView:(UIView *)arg1 ;
-(AVTGroupListCollectionView *)groupListView;
-(void)setGroupListView:(AVTGroupListCollectionView *)arg1 ;
-(void)setHeaderMaskingView:(UIView *)arg1 ;
-(void)setAttributesCollectionView:(UICollectionView *)arg1 ;
-(void)setTransitioningContainer:(AVTImageTransitioningContainerView *)arg1 ;
-(void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)selectCategory:(id)arg1 withCompletionDelay:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)visibleLayout;
-(BOOL)disableAvatarSnapshotting;
-(id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3 isCreating:(BOOL)arg4 ;
-(void)didFinishEditing;
-(void)configurePPTMemoji:(/*^block*/id)arg1 ;
-(void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(/*^block*/id)arg2 ;
-(void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(AVTViewSession *)avtViewSession;
-(void)setAvtViewSession:(AVTViewSession *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)sectionHeaderView:(id)arg1 didSelectItem:(id)arg2 forPicker:(id)arg3 sender:(id)arg4 ;
@end

