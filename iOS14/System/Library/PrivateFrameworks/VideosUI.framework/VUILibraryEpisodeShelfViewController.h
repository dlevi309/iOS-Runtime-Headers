/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIShelfViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TVShelfViewLayoutDelegate.h>
#import <libobjc.A.dylib/VUIEpisodeDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/VUIDialogInteractionControllerDelegate.h>
#import <libobjc.A.dylib/VUILibraryDownloadPopoverViewControllerDelegate.h>

@protocol VUILibraryEpisodeShelfViewControllerDelegate;
@class VUILibraryEpisodeListCell, VUIDialogInteractionController, NSArray, VUIEpisodeDetailViewController, NSIndexPath, UICollectionViewDiffableDataSource, NSString;

@interface VUILibraryEpisodeShelfViewController : VUIShelfViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate, VUIEpisodeDetailViewControllerDelegate, VUIDialogInteractionControllerDelegate, VUILibraryDownloadPopoverViewControllerDelegate> {

	VUILibraryEpisodeListCell* _sizingCell;
	VUIDialogInteractionController* _dialogInteractionController;
	BOOL _shouldIgnoreSelectEvent;
	id<VUILibraryEpisodeShelfViewControllerDelegate> _delegate;
	NSArray* _episodeViewModels;
	VUIEpisodeDetailViewController* _episodeDetailViewController;
	NSIndexPath* _popoverIndexPath;
	UICollectionViewDiffableDataSource* _diffableDataSource;

}

@property (nonatomic,copy) NSArray * episodeViewModels;                                                     //@synthesize episodeViewModels=_episodeViewModels - In the implementation block
@property (nonatomic,retain) VUIEpisodeDetailViewController * episodeDetailViewController;                  //@synthesize episodeDetailViewController=_episodeDetailViewController - In the implementation block
@property (nonatomic,retain) NSIndexPath * popoverIndexPath;                                                //@synthesize popoverIndexPath=_popoverIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreSelectEvent;                                                  //@synthesize shouldIgnoreSelectEvent=_shouldIgnoreSelectEvent - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * diffableDataSource;                       //@synthesize diffableDataSource=_diffableDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<VUILibraryEpisodeShelfViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id<VUILibraryEpisodeShelfViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDelegate:(id<VUILibraryEpisodeShelfViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(UICollectionViewDiffableDataSource *)diffableDataSource;
-(void)_updateHeaderView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setDiffableDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_episodeViewModelsWithFetchedEpisodes:(id)arg1 ;
-(void)setEpisodeDetailViewController:(VUIEpisodeDetailViewController *)arg1 ;
-(id)_createDiffableDataSourceSnapshot;
-(void)updateShelfLayout:(id)arg1 ;
-(VUIEpisodeDetailViewController *)episodeDetailViewController;
-(id)_episodeWithIdentifier:(id)arg1 ;
-(id)_createDiffableDataSourceForCollectionView:(id)arg1 ;
-(BOOL)_canRemoveEpisodeAtIndexPath:(id)arg1 ;
-(NSArray *)episodeViewModels;
-(id)_getEntityIdentifiersFromViewModels;
-(void)episodeDetailViewControllerWasDismissed:(id)arg1 ;
-(BOOL)dialogInteractionController:(id)arg1 shouldBeginInteractionForIndexPath:(id)arg2 ;
-(void)dialogInteractionController:(id)arg1 interactionDidBeginForIndexPath:(id)arg2 ;
-(void)dialogInteractionController:(id)arg1 interactionDidEndForIndexPath:(id)arg2 ;
-(void)removeDownloadPressed;
-(void)removeDownloadDismissed;
-(id)initWithEpisodes:(id)arg1 ;
-(void)updateWithEpisodes:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg1 ;
-(void)_configureShelfLayout:(id)arg1 ;
-(void)setEpisodeViewModels:(NSArray *)arg1 ;
-(NSIndexPath *)popoverIndexPath;
-(void)setPopoverIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)shouldIgnoreSelectEvent;
-(void)setShouldIgnoreSelectEvent:(BOOL)arg1 ;
@end

