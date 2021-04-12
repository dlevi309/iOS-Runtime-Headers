/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CKNicknameUpdatesCollectionViewCellDelegate.h>

@protocol CKNicknameUpdatesViewControllerDelegate;
@class NSArray, CKNicknameUpdatesCollectionView, _UICollectionViewDiffableDataSource, UICollectionViewCompositionalLayout, NSString;

@interface CKNicknameUpdatesViewController : UIViewController <UICollectionViewDelegate, CKNicknameUpdatesCollectionViewCellDelegate> {

	id<CKNicknameUpdatesViewControllerDelegate> _delegate;
	NSArray* _nicknameUpdates;
	CKNicknameUpdatesCollectionView* _collectionView;
	_UICollectionViewDiffableDataSource* _dataSource;
	UICollectionViewCompositionalLayout* _collectionViewLayout;

}

@property (nonatomic,retain) NSArray * nicknameUpdates;                                               //@synthesize nicknameUpdates=_nicknameUpdates - In the implementation block
@property (nonatomic,retain) CKNicknameUpdatesCollectionView * collectionView;                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UICollectionViewDiffableDataSource * dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic) id<CKNicknameUpdatesViewControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKNicknameUpdatesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKNicknameUpdatesViewControllerDelegate>)arg1 ;
-(_UICollectionViewDiffableDataSource *)dataSource;
-(void)setDataSource:(_UICollectionViewDiffableDataSource *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(CKNicknameUpdatesCollectionView *)collectionView;
-(void)setCollectionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(void)viewDidLoad;
-(void)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)setCollectionView:(CKNicknameUpdatesCollectionView *)arg1 ;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setNicknameUpdates:(NSArray *)arg1 ;
-(NSArray *)nicknameUpdates;
-(void)updateCell:(id)arg1 updateButtonTappedForBannerView:(id)arg2 ;
-(void)updateCell:(id)arg1 ignoreButtonTappedForBannerView:(id)arg2 ;
-(id)layoutSectionForSection:(long long)arg1 withEnvironment:(id)arg2 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_nicknameStateChanged:(id)arg1 ;
@end

