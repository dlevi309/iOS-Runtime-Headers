/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/CKFeedCollectionViewLayoutDelegate.h>
#import <libobjc.A.dylib/CKAttachmentCellDelegate.h>
#import <libobjc.A.dylib/CKFeedCollectionViewLayoutDatasource.h>
#import <libobjc.A.dylib/CKQLPreviewControllerDelegate.h>
#import <UIKit/UICollectionViewDragSource.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/CKSharedAssetsControllerProtocol.h>

@protocol CKSharedAssetsControllerDelegate;
@class CKAttachmentCollectionView, NSArray, CKFeedCollectionViewLayout, CKQLDetailsPreviewController, UIBarButtonItem, NSString;

@interface CKDetailsPhotosViewController : CKViewController <CKFeedCollectionViewLayoutDelegate, CKAttachmentCellDelegate, CKFeedCollectionViewLayoutDatasource, CKQLPreviewControllerDelegate, UICollectionViewDragSource, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIGestureRecognizerDelegate, UICollectionViewDataSource, QLPreviewControllerDelegate, CKSharedAssetsControllerProtocol> {

	BOOL _initialLoad;
	BOOL _selectingAttachments;
	id<CKSharedAssetsControllerDelegate> _delegate;
	CKAttachmentCollectionView* _collectionView;
	NSArray* _mediaObjects;
	CKFeedCollectionViewLayout* _feedLayout;
	CKQLDetailsPreviewController* _qlPreviewController;
	UIBarButtonItem* _saveButton;
	UIBarButtonItem* _deleteButton;
	NSArray* _visibleMediaObjects;
	UIBarButtonItem* _parentRightBarButtonItem;

}

@property (nonatomic,retain) NSArray * mediaObjects;                                               //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,retain) CKAttachmentCollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) CKFeedCollectionViewLayout * feedLayout;                              //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) CKQLDetailsPreviewController * qlPreviewController;                   //@synthesize qlPreviewController=_qlPreviewController - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad;                                //@synthesize initialLoad=_initialLoad - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * saveButton;                                         //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteButton;                                       //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,getter=isSelectingAttachments,nonatomic) BOOL selectingAttachments;              //@synthesize selectingAttachments=_selectingAttachments - In the implementation block
@property (nonatomic,retain) NSArray * visibleMediaObjects;                                        //@synthesize visibleMediaObjects=_visibleMediaObjects - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * parentRightBarButtonItem;                           //@synthesize parentRightBarButtonItem=_parentRightBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInitialLoad;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(unsigned long long)assetType;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(CKAttachmentCollectionView *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id<CKSharedAssetsControllerDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_invalidateCaches;
-(void)didMoveToParentViewController:(id)arg1 ;
-(CKAttachmentCollectionView *)collectionView;
-(void)setDeleteButton:(UIBarButtonItem *)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)_collectionView:(id)arg1 dragItemsForItemAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<CKSharedAssetsControllerDelegate>)arg1 ;
-(NSArray *)mediaObjects;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(CKFeedCollectionViewLayout *)feedLayout;
-(UIBarButtonItem *)saveButton;
-(void)didReceiveMemoryWarning;
-(void)reloadData;
-(void)setFeedLayout:(CKFeedCollectionViewLayout *)arg1 ;
-(void)setInitialLoad:(BOOL)arg1 ;
-(void)setMediaObjects:(NSArray *)arg1 ;
-(void)setSelectingAttachments:(BOOL)arg1 ;
-(void)_faultInAttachments;
-(void)viewDidAppearDeferredSetup;
-(void)_prewarmNextChunk;
-(void)_updateToolbar;
-(NSArray *)visibleMediaObjects;
-(void)_configureCell:(id)arg1 withCollectionView:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)isSelectingAttachments;
-(void)setVisibleMediaObjects:(NSArray *)arg1 ;
-(id)_iconForFileURL:(id)arg1 UTIType:(id)arg2 ;
-(id)selectedAttachmentIndexes;
-(void)_saveSelectedAttachments:(id)arg1 ;
-(void)_deleteSelectedAttachments:(id)arg1 ;
-(void)selectAttachments:(id)arg1 ;
-(void)setParentRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)parentRightBarButtonItem;
-(void)_saveAttachments:(id)arg1 ;
-(void)_deleteAttachments:(id)arg1 ;
-(CKQLDetailsPreviewController *)qlPreviewController;
-(CGSize)contentSizeThatFits:(CGSize)arg1 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideSection:(long long)arg3 ;
-(long long)collectionView:(id)arg1 layout:(id)arg2 typeForSection:(long long)arg3 ;
-(void)parentScrollViewDidScroll:(CGPoint)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 contentInsetsForSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 imageSizeForTileAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 mininumSizeForTileAtIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 batchIDForTileAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldShowCaptionForTileAtIndexPath:(id)arg3 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 forFeedLayout:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 captionSizeForTileAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(void)performAction:(SEL)arg1 forAttachmentCell:(id)arg2 ;
-(void)collectionView:(id)arg1 layout:(id)arg2 referenceMaximumLength:(double*)arg3 minimumNumberOfTilesToOmit:(long long*)arg4 forSection:(long long)arg5 ;
-(void)attachmentCellTapped:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForRowAtIndexPath:(id)arg3 proposedSize:(CGSize)arg4 ;
-(CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenRowAtIndexPath:(id)arg3 andRowAtIndexPath:(id)arg4 proposedMetrics:(CKFeedSeparatorMetrics)arg5 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForThumbnailInSection:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 shouldHideHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForHeaderOfSections:(id)arg3 proposedSize:(CGSize)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 groupIDForSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(CGSize)arg4 ;
-(void)previewControllerDidCancelDismiss:(id)arg1 ;
-(CKFeedSeparatorMetrics)collectionView:(id)arg1 layout:(id)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(CKFeedSeparatorMetrics)arg5 ;
-(void)setSaveButton:(UIBarButtonItem *)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4 ;
-(unsigned long long)numberOfSectionsInFeedLayout:(id)arg1 ;
-(id)invisibleInkEffectControllerForPreviewController:(id)arg1 ;
-(void)updateAttachmentItems:(id)arg1 ;
-(BOOL)isDisplayingAttachmentContent;
-(id)initWithAttachmentItems:(id)arg1 ;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3 realSize:(CGSize*)arg4 ;
-(void)setQlPreviewController:(CKQLDetailsPreviewController *)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(UIBarButtonItem *)deleteButton;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)viewDidLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
@end

