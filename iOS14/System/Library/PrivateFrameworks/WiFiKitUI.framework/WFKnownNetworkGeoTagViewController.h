/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSArray, MKMapView, NSMutableArray, NSDateFormatter, NSString;

@interface WFKnownNetworkGeoTagViewController : UIViewController <MKMapViewDelegate> {

	NSArray* _geoTags;
	MKMapView* _mapView;
	NSMutableArray* _annotations;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) MKMapView * mapView;                          //@synthesize mapView=_mapView - In the implementation block
@property (nonatomic,retain) NSMutableArray * annotations;                 //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSArray * geoTags;                            //@synthesize geoTags=_geoTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)annotations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)viewDidLoad;
-(void)addMap;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(MKMapView *)mapView;
-(NSArray *)geoTags;
-(void)setGeoTags:(NSArray *)arg1 ;
-(void)addAnnotations;
-(void)setVisibleMapRegion;
-(void)showPinsOnMap;
-(void)addAnnotationForGeotag:(id)arg1 ;
@end

