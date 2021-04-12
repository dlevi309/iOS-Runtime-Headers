/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSString, CLCircularRegion, MKMapView, MKCircle, MKPointAnnotation, OBBoldTrayButton, OBLinkTrayButton;

@interface CPSLocationConsentViewController : OBWelcomeController <MKMapViewDelegate> {

	NSString* _appName;
	NSString* _clipBundleID;
	CLCircularRegion* _region;
	CLLocationCoordinate2D _deviceLocationCoordinate;
	NSString* _deviceLocationSymbolName;
	MKMapView* _mapView;
	MKCircle* _circleOverlay;
	MKPointAnnotation* _deviceLocationAnnotation;
	OBBoldTrayButton* _allowForAllButton;
	OBLinkTrayButton* _allowOnceButton;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy) id actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)actionHandler;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)setActionHandler:(id)arg1 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithRequest:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_setupContentView;
-(void)_buttonActionTriggered:(id)arg1 ;
@end

