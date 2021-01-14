/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol MKPlaceRelatedViewControllerDelegate, _MKInfoCardAnalyticsDelegate;
@class NSArray, MKMapItem, NSString;

@interface MKPlaceRelatedViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	NSArray* _fetchedMapItems;
	NSArray* _cells;
	BOOL _isExpanded;
	id<MKPlaceRelatedViewControllerDelegate> _delegate;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
	MKMapItem* _mapItem;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                                                  //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKPlaceRelatedViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateTitle;
-(id<MKPlaceRelatedViewControllerDelegate>)delegate;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(MKMapItem *)mapItem;
-(unsigned long long)maxItems;
-(void)setDelegate:(id<MKPlaceRelatedViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateHeightConstraints;
-(void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_setExpanded:(BOOL)arg1 ;
-(void)_reloadRelatedMapItems:(id)arg1 ;
-(void)_updateRows;
-(id)_moduleTitle;
-(void)_seeAllAction:(id)arg1 ;
-(void)_captureSeeAllAction;
-(void)_captureTapActionWithMapItem:(id)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(void)fetchPOIs;
@end

