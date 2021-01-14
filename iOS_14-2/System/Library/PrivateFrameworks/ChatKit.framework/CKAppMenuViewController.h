/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/CKAppMenuCollectionViewCellDelegate.h>

@protocol CKAppMenuViewControllerDelegate;
@class UICollectionView, UICollectionViewDiffableDataSource, NSArray, UIVisualEffectView, NSString;

@interface CKAppMenuViewController : UIViewController <UICollectionViewDelegate, CKAppMenuCollectionViewCellDelegate> {

	UICollectionView* _collectionView;
	id<CKAppMenuViewControllerDelegate> _delegate;
	UICollectionViewDiffableDataSource* _dataSource;
	NSArray* _menuItems;
	UIVisualEffectView* _backgroundView;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * menuItems;                                              //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) id<CKAppMenuViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id<CKAppMenuViewControllerDelegate>)delegate;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIVisualEffectView *)backgroundView;
-(UICollectionView *)collectionView;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)setDelegate:(id<CKAppMenuViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)menuItems;
-(void)setMenuItems:(NSArray *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateBackgroundVisualEffect;
-(void)keyCommandReturn:(id)arg1 ;
-(void)keyCommandEscape:(id)arg1 ;
-(void)handleSelectionOfIndexPath:(id)arg1 ;
-(void)appMenuCollectionViewCellWasTapped:(id)arg1 ;
-(void)appMenuCollectionViewCell:(id)arg1 didHoverWithState:(long long)arg2 ;
@end

