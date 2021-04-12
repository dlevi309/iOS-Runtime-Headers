/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <UIKitCore/UICollectionViewController.h>

@protocol WKWallpaperLocketViewControllerDelegate;
@class UIButton, UITapGestureRecognizer;

@interface WKWallpaperLocketViewController : UICollectionViewController {

	id<WKWallpaperLocketViewControllerDelegate> _delegate;
	UIButton* __openSettingsButton;
	UIButton* __setWallpaperButton;
	UIButton* __doneButton;
	UITapGestureRecognizer* __tapGestureRecognizer;

}

@property (nonatomic,retain) UIButton * _openSettingsButton;                                           //@synthesize _openSettingsButton=__openSettingsButton - In the implementation block
@property (nonatomic,retain) UIButton * _setWallpaperButton;                                           //@synthesize _setWallpaperButton=__setWallpaperButton - In the implementation block
@property (nonatomic,retain) UIButton * _doneButton;                                                   //@synthesize _doneButton=__doneButton - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * _tapGestureRecognizer;                           //@synthesize _tapGestureRecognizer=__tapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<WKWallpaperLocketViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)locketCollectionViewLayout;
-(id)init;
-(id<WKWallpaperLocketViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WKWallpaperLocketViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_configureSubviews;
-(UITapGestureRecognizer *)_tapGestureRecognizer;
-(BOOL)prefersStatusBarHidden;
-(UIButton *)_doneButton;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)_configureCollectionView;
-(void)_userDidTapOnView:(id)arg1 ;
-(void)_showButtonsAnimated;
-(UIButton *)_setWallpaperButton;
-(UIButton *)_openSettingsButton;
-(void)set_tapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)set_doneButton:(UIButton *)arg1 ;
-(void)_userDidTapOnDoneButton:(id)arg1 ;
-(void)set_setWallpaperButton:(UIButton *)arg1 ;
-(void)_userDidTapOnSetWallpaperButton:(id)arg1 ;
-(void)set_openSettingsButton:(UIButton *)arg1 ;
-(void)_userDidTapOnOpenSettingsButton:(id)arg1 ;
-(void)_hideButtonsAnimated;
@end

