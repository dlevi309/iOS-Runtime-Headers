/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VideosExtrasTemplateViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <VideosUI/VideosExtrasMainMenuSectionMetricsDataSource.h>

@protocol UICollectionViewDelegate;
@class VideosExtrasMainMenuSectionMetrics, UICollectionViewFlowLayout, NSLayoutConstraint, UICollectionView, UIView, NSIndexPath, NSArray, NSString;

@interface VideosExtrasMainTemplateViewController : VideosExtrasTemplateViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate, VideosExtrasMainMenuSectionMetricsDataSource> {

	VideosExtrasMainMenuSectionMetrics* _mainMenuMetrics;
	UICollectionViewFlowLayout* _collectionViewLayout;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	UICollectionView* _menuBarCollectionView;
	BOOL _hasHadMenuSelection;
	UIView* _menuBarView;
	id<UICollectionViewDelegate> _didSelectDelegate;

}

@property (nonatomic,readonly) double collectionViewHeight; 
@property (nonatomic,readonly) NSIndexPath * indexPathOfFeaturedItem; 
@property (nonatomic,readonly) UIView * menuBarView;                                             //@synthesize menuBarView=_menuBarView - In the implementation block
@property (assign,nonatomic,__weak) id<UICollectionViewDelegate> didSelectDelegate;              //@synthesize didSelectDelegate=_didSelectDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * mainMenuItemElements; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)dealloc;
-(id)_menuItems;
-(void)setCollectionViewHeight:(double)arg1 ;
-(double)collectionViewHeight;
-(id)templateElement;
-(void)_prepareLayout;
-(BOOL)showsPlaceholder;
-(void)_startBackgroundAudio;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(UIView *)menuBarView;
-(NSArray *)mainMenuItemElements;
-(long long)numberOfItemsForSectionMetrics:(id)arg1 ;
-(void)_recalculateSizes;
-(CGSize)sectionMetrics:(id)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(id)arg3 ;
-(void)setDidSelectDelegate:(id<UICollectionViewDelegate>)arg1 ;
-(NSIndexPath *)indexPathOfFeaturedItem;
-(void)_dynamicTypeChanged;
-(void)_prepareCollectionView;
-(id)_textElementAtIndex:(long long)arg1 ;
-(BOOL)_isFeatureItemAtIndexPath:(id)arg1 ;
-(BOOL)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2 ;
-(id<UICollectionViewDelegate>)didSelectDelegate;
@end

