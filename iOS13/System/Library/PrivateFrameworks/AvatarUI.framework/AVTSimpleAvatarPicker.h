/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/AVTAvatarRecordDataSourceObserver.h>
#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/AVTNotifyingContainerViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/AVTObjectViewController.h>
#import <libobjc.A.dylib/AVTAvatarPicker.h>

@protocol AVTPresenterDelegate, AVTAvatarPickerDelegate;
@class UIView, UICollectionView, AVTEdgeDisappearingCollectionViewLayout, AVTAvatarPickerDataSource, _AVTAvatarRecordImageProvider, AVTViewSessionProvider, AVTRenderingScope, AVTSimpleAvatarPickerHeaderView, NSString;

@interface AVTSimpleAvatarPicker : NSObject <AVTAvatarRecordDataSourceObserver, AVTAvatarEditorViewControllerDelegate, AVTAvatarActionsViewControllerDelegate, AVTNotifyingContainerViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTObjectViewController, AVTAvatarPicker> {

	BOOL _allowEditing;
	id<AVTPresenterDelegate> presenterDelegate;
	id<AVTAvatarPickerDelegate> avatarPickerDelegate;
	double _minimumInteritemSpacing;
	UIView* _view;
	UICollectionView* _collectionView;
	AVTEdgeDisappearingCollectionViewLayout* _collectionViewLayout;
	AVTAvatarPickerDataSource* _dataSource;
	_AVTAvatarRecordImageProvider* _imageProvider;
	AVTViewSessionProvider* _viewSessionProvider;
	AVTRenderingScope* _renderingScope;
	AVTSimpleAvatarPickerHeaderView* _headerView;

}

@property (nonatomic,retain) UIView * view;                                                               //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) AVTEdgeDisappearingCollectionViewLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,retain) AVTAvatarPickerDataSource * dataSource;                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) _AVTAvatarRecordImageProvider * imageProvider;                             //@synthesize imageProvider=_imageProvider - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * viewSessionProvider;                              //@synthesize viewSessionProvider=_viewSessionProvider - In the implementation block
@property (nonatomic,readonly) AVTRenderingScope * renderingScope;                                        //@synthesize renderingScope=_renderingScope - In the implementation block
@property (assign,nonatomic,__weak) AVTSimpleAvatarPickerHeaderView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) BOOL allowEditing;                                                           //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                                              //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AVTPresenterDelegate> presenterDelegate; 
@property (assign,nonatomic,__weak) id<AVTAvatarPickerDelegate> avatarPickerDelegate; 
-(AVTAvatarPickerDataSource *)dataSource;
-(void)setDataSource:(AVTAvatarPickerDataSource *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)loadView;
-(UICollectionView *)collectionView;
-(void)setCollectionViewLayout:(AVTEdgeDisappearingCollectionViewLayout *)arg1 ;
-(void)reloadData;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(AVTSimpleAvatarPickerHeaderView *)headerView;
-(void)setHeaderView:(AVTSimpleAvatarPickerHeaderView *)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(AVTEdgeDisappearingCollectionViewLayout *)collectionViewLayout;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)minimumInteritemSpacing;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(_AVTAvatarRecordImageProvider *)imageProvider;
-(void)setPresenterDelegate:(id<AVTPresenterDelegate>)arg1 ;
-(id<AVTPresenterDelegate>)presenterDelegate;
-(BOOL)canCreateAvatar;
-(AVTRenderingScope *)renderingScope;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(BOOL)allowEditing;
-(void)setAllowEditing:(BOOL)arg1 ;
-(void)notifyingContainerViewWillChangeSize:(CGSize)arg1 ;
-(void)notifyingContainerViewDidChangeSize:(CGSize)arg1 ;
-(id<AVTAvatarPickerDelegate>)avatarPickerDelegate;
-(id)avatarActionsViewController:(id)arg1 recordUpdateForDeletingRecord:(id)arg2 ;
-(void)avatarActionsViewControllerDidFinish:(id)arg1 ;
-(void)selectAvatarRecordWithIdentifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setAvatarPickerDelegate:(id<AVTAvatarPickerDelegate>)arg1 ;
-(void)wrapAndPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)significantRecordChangeInDataSource:(id)arg1 ;
-(AVTViewSessionProvider *)viewSessionProvider;
-(id)initWithDataSource:(id)arg1 recordImageProvider:(id)arg2 allowEditing:(BOOL)arg3 ;
-(BOOL)shouldShowHeaderButton;
-(long long)indexForSelectedAvatar;
-(id)selectedAvatar;
-(void)presentActionsForAvatarRecord:(id)arg1 ;
-(void)presentMemojiEditorForCreation;
-(void)reloadDataSource;
-(void)headerViewButtonPressed;
-(void)updateHeaderButtonForSelectedAvatar:(id)arg1 invalidateLayout:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)deselectPreviousSelectedItem;
-(BOOL)isItemAtIndexPathOffscreen:(id)arg1 ;
-(id)initWithStore:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(id)viewForAddItem;
-(void)presentActionsForAvatarForPPT:(id)arg1 ;
@end

