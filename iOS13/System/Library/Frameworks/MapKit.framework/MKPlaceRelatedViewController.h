/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceRelatedViewControllerDelegate, _MKInfoCardAnalyticsDelegate;
@class NSArray, MKMapItem, NSString;

@interface MKPlaceRelatedViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	NSArray* _fetchedMapItems;
	NSArray* _cells;
	MKMapItem* _mapItem;
	id<MKPlaceRelatedViewControllerDelegate> _delegate;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceRelatedViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)placeRelatedViewControllerFor:(id)arg1 ;
-(id<MKPlaceRelatedViewControllerDelegate>)delegate;
-(void)setDelegate:(id<MKPlaceRelatedViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_updateHeightConstraints;
-(void)_updateTitle;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)fetchPOIs;
-(void)_reloadRelatedMapItems:(id)arg1 ;
-(void)_updateRows;
-(id)_moduleTitle;
-(void)_seeAllAction:(id)arg1 ;
-(void)_captureSeeAllAction;
-(void)_captureTapActionWithMapItem:(id)arg1 ;
@end

