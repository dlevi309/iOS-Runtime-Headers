/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(NSMutableArray *)annotations;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(NSArray *)geoTags;
-(void)setGeoTags:(NSArray *)arg1 ;
-(void)addMap;
-(void)addAnnotations;
-(void)setVisibleMapRegion;
-(void)showPinsOnMap;
-(void)addAnnotationForGeotag:(id)arg1 ;
@end

