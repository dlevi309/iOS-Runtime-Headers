/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAllRouteETAsManagerDelegate;
@class _MKRouteETAFetcher, GEOAutomobileOptions, GEOTransitOptions, MKMapItem;

@interface MKAllRouteETAsManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	id<MKAllRouteETAsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKAllRouteETAsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) MKMapItem * originMapItem; 
-(id)init;
-(id<MKAllRouteETAsManagerDelegate>)delegate;
-(void)setDelegate:(id<MKAllRouteETAsManagerDelegate>)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(void)updateETA;
-(MKMapItem *)originMapItem;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
@end

