/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/MKStackingViewControllerPreferredSizeUse.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOTransitLineItem, MKTransitAttributionViewControllerDelegate;
@class MKMapItem, NSString;

@interface MKTransitAttributionViewController : _MKTableViewController <GEOResourceManifestTileGroupObserver, MKStackingViewControllerPreferredSizeUse, MKModuleViewControllerProtocol> {

	BOOL _isAttributionURLAvailable;
	MKMapItem* _mapItem;
	id<GEOTransitLineItem> _lineItem;
	id<MKTransitAttributionViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) MKMapItem * mapItem;                                                         //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) id<GEOTransitLineItem> lineItem;                                             //@synthesize lineItem=_lineItem - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitAttributionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL requiresPreferredContentSizeInStackingView; 
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)_attribution;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<MKTransitAttributionViewControllerDelegate>)delegate;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(MKMapItem *)mapItem;
-(void)setDelegate:(id<MKTransitAttributionViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(id<GEOTransitLineItem>)lineItem;
-(void)_commonInit;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_transitInfoUpdated;
-(void)setLineItem:(id<GEOTransitLineItem>)arg1 ;
-(BOOL)_hasAttribution;
-(id)_attributionCell;
-(void)_presentTransitAttributionDetails;
-(id)initWithTransitLineItem:(id)arg1 ;
-(BOOL)requiresPreferredContentSizeInStackingView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithMapItem:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

