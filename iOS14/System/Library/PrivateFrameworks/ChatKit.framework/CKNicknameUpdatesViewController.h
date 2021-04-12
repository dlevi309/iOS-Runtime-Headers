/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) NSArray * nicknameUpdates;                                                //@synthesize nicknameUpdates=_nicknameUpdates - In the implementation block
@property (nonatomic,retain) CKNicknameUpdatesCollectionView * collectionView;                         //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) _UICollectionViewDiffableDataSource * dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) UICollectionViewCompositionalLayout * collectionViewLayout;               //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (assign,nonatomic,__weak) id<CKNicknameUpdatesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setCollectionView:(CKNicknameUpdatesCollectionView *)arg1 ;
-(id<CKNicknameUpdatesViewControllerDelegate>)delegate;
-(CKNicknameUpdatesCollectionView *)collectionView;
-(_UICollectionViewDiffableDataSource *)dataSource;
-(BOOL)canBecomeFirstResponder;
-(void)setDelegate:(id<CKNicknameUpdatesViewControllerDelegate>)arg1 ;
-(void)setDataSource:(_UICollectionViewDiffableDataSource *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)reloadData;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 selectedAction:(unsigned long long)arg2 sourceView:(id)arg3 ;
-(id)cellForItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 withIdentifier:(id)arg3 ;
-(void)_nicknameStateChanged:(id)arg1 ;
-(void)updatePreferredContentSize;
-(unsigned long long)cellOrderForIndexPath:(id)arg1 ;
-(void)setNicknameUpdates:(NSArray *)arg1 ;
-(NSArray *)nicknameUpdates;
-(void)setCollectionViewLayout:(UICollectionViewCompositionalLayout *)arg1 ;
-(UICollectionViewCompositionalLayout *)collectionViewLayout;
-(void)viewDidLayoutSubviews;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)dealloc;
@end

