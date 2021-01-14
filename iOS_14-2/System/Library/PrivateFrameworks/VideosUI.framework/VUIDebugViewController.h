/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class VUIDebugContainerView, UICollectionView, VUIDebugViewDataSource, NSString;

@interface VUIDebugViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	BOOL _requiresRelayout;
	VUIDebugContainerView* _containerView;
	UICollectionView* _collectionView;
	VUIDebugViewDataSource* _dataSource;

}

@property (nonatomic,retain) VUIDebugContainerView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                  //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL requiresRelayout;                              //@synthesize requiresRelayout=_requiresRelayout - In the implementation block
@property (nonatomic,retain) VUIDebugViewDataSource * dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setContainerView:(VUIDebugContainerView *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)preferredFocusEnvironments;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(VUIDebugViewDataSource *)dataSource;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)setDataSource:(VUIDebugViewDataSource *)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(VUIDebugContainerView *)containerView;
-(void)viewDidLoad;
-(void)_dismissViewController;
-(long long)preferredStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(BOOL)requiresRelayout;
-(void)setRequiresRelayout:(BOOL)arg1 ;
@end

