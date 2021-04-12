/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKCollectionCarouselRoutingDelegate.h>
#import <libobjc.A.dylib/MKCollectionCarouselAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceCollectionsDelegate;
@class MKMapItem, MKPlaceSectionHeaderView, MKCollectionsCarouselView, NSArray, MKCuratedCollectionsPlacecardAnalyticsManager, NSString;

@interface MKPlaceCuratedCollectionsViewController : MKPlaceSectionViewController <MKCollectionCarouselRoutingDelegate, MKCollectionCarouselAnalyticsDelegate, MKModuleViewControllerProtocol> {

	MKMapItem* _mapItem;
	CGSize _viewSize;
	MKPlaceSectionHeaderView* _headerView;
	MKCollectionsCarouselView* _carouselView;
	NSArray* _placeCollections;
	NSArray* _collectionIds;
	MKCuratedCollectionsPlacecardAnalyticsManager* _analyticsManager;
	id<MKPlaceCollectionsDelegate> _collectionsDelegate;

}

@property (nonatomic,retain) MKPlaceSectionHeaderView * headerView;                                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) MKCollectionsCarouselView * carouselView;                                      //@synthesize carouselView=_carouselView - In the implementation block
@property (nonatomic,retain) NSArray * placeCollections;                                                    //@synthesize placeCollections=_placeCollections - In the implementation block
@property (nonatomic,retain) NSArray * collectionIds;                                                       //@synthesize collectionIds=_collectionIds - In the implementation block
@property (nonatomic,retain) MKCuratedCollectionsPlacecardAnalyticsManager * analyticsManager;              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceCollectionsDelegate> collectionsDelegate;                     //@synthesize collectionsDelegate=_collectionsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCollectionIds:(NSArray *)arg1 ;
-(NSArray *)collectionIds;
-(void)setHeaderView:(MKPlaceSectionHeaderView *)arg1 ;
-(id)initWithDelegate:(id)arg1 withPlaceCollections:(id)arg2 usingSyncCoordinator:(id)arg3 usingMapItem:(id)arg4 usingCollectionIds:(id)arg5 ;
-(MKCollectionsCarouselView *)carouselView;
-(void)setUpHeaderView;
-(void)updateConstraintsForCarouselView;
-(NSArray *)placeCollections;
-(void)showMoreTapped;
-(id<MKPlaceCollectionsDelegate>)collectionsDelegate;
-(void)setCarouselView:(MKCollectionsCarouselView *)arg1 ;
-(void)setPlaceCollections:(NSArray *)arg1 ;
-(void)setAnalyticsManager:(MKCuratedCollectionsPlacecardAnalyticsManager *)arg1 ;
-(void)setCollectionsDelegate:(id<MKPlaceCollectionsDelegate>)arg1 ;
-(MKCuratedCollectionsPlacecardAnalyticsManager *)analyticsManager;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(MKPlaceSectionHeaderView *)headerView;
-(void)refreshCollections;
-(void)routeToCuratedCollection:(id)arg1 ;
-(void)collectionsCarouselDidRouteToCollectionId:(id)arg1 atIndex:(long long)arg2 isSaved:(BOOL)arg3 ;
-(void)collectionsCarouselDidScrollForward;
-(void)collectionsCarouselDidScrollBackward;
-(void)viewDidLayoutSubviews;
@end

