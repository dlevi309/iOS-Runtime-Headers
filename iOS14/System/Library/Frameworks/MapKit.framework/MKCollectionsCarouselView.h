/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <libobjc.A.dylib/MKCollectionCarouselSizeProvider.h>
#import <libobjc.A.dylib/MKCollectionCarouselUpdater.h>

@protocol MKCollectionsSizeProvider, MKCollectionCarouselRoutingDelegate, UIScrollViewDelegate, MKCollectionCarouselAnalyticsDelegate;
@class UICollectionView, UICollectionViewFlowLayout, MKPlaceCollectionsLogicController, NSString;

@interface MKCollectionsCarouselView : UIView <UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, MKCollectionCarouselSizeProvider, MKCollectionCarouselUpdater> {

	SCD_Struct_MK21 _collectionsConfiguration;
	BOOL _hasDisplayedCollections;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	MKPlaceCollectionsLogicController* _logicController;
	id<MKCollectionsSizeProvider> _sizeController;
	id<MKCollectionCarouselRoutingDelegate> _routingDelegate;
	id<UIScrollViewDelegate> _scrollViewDelegate;
	id<MKCollectionCarouselAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                               //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                         //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) MKPlaceCollectionsLogicController * logicController;                             //@synthesize logicController=_logicController - In the implementation block
@property (nonatomic,retain) id<MKCollectionsSizeProvider> sizeController;                                    //@synthesize sizeController=_sizeController - In the implementation block
@property (assign,nonatomic,__weak) id<MKCollectionCarouselRoutingDelegate> routingDelegate;                  //@synthesize routingDelegate=_routingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollViewDelegate;                              //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<MKCollectionCarouselAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)horizontalLayoutHeight;
+(double)verticalLayoutHeightWithNumberOfItems:(unsigned long long)arg1 maxWidth:(double)arg2 usingTraitEnvironment:(id)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)collectionView;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)setScrollViewDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)configureCarouselMetadata:(long long)arg1 ;
-(void)configureCarouselCollectionView;
-(void)fetchCollections;
-(MKPlaceCollectionsLogicController *)logicController;
-(void)refreshCollections;
-(void)displayCollections;
-(id<MKCollectionCarouselRoutingDelegate>)routingDelegate;
-(id<MKCollectionsSizeProvider>)sizeController;
-(id<MKCollectionCarouselAnalyticsDelegate>)analyticsDelegate;
-(void)updateCollections:(id)arg1 ;
-(void)displayCollectionsUsingBatchIds:(id)arg1 usingGuideFetcher:(id)arg2 ;
-(BOOL)isDisplayingCollections;
-(id)initCollectionsCarouselViewWithContext:(long long)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 withRoutingDelegate:(id)arg4 withScrollViewDelegate:(id)arg5 withAnalyticsDelegate:(id)arg6 ;
-(void)setLogicController:(MKPlaceCollectionsLogicController *)arg1 ;
-(void)setSizeController:(id<MKCollectionsSizeProvider>)arg1 ;
-(void)setRoutingDelegate:(id<MKCollectionCarouselRoutingDelegate>)arg1 ;
-(void)setAnalyticsDelegate:(id<MKCollectionCarouselAnalyticsDelegate>)arg1 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
@end

