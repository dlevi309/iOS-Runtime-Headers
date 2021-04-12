/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKAllRouteETAsManagerDelegate;
@class _MKRouteETAFetcher, GEOAutomobileOptions, GEOTransitOptions, GEOCyclingOptions, MKMapItem;

@interface MKAllRouteETAsManager : NSObject {

	_MKRouteETAFetcher* _etaFetcher;
	id<MKAllRouteETAsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKAllRouteETAsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,copy) GEOTransitOptions * transitOptions; 
@property (nonatomic,copy) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,retain) MKMapItem * mapItem; 
@property (nonatomic,retain) MKMapItem * originMapItem; 
-(GEOTransitOptions *)transitOptions;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id)init;
-(id<MKAllRouteETAsManagerDelegate>)delegate;
-(MKMapItem *)mapItem;
-(void)updateETA;
-(void)setDelegate:(id<MKAllRouteETAsManagerDelegate>)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)originMapItem;
-(void)setOriginMapItem:(MKMapItem *)arg1 ;
-(id)routeETAForTransportType:(unsigned long long)arg1 ;
-(GEOCyclingOptions *)cyclingOptions;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
@end

