/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKPlaceInlineMapViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>

@class NSArray, _MKPlacePoisInlineMapContentView, CLLocation, NSString;

@interface MKPlacePoisInlineMapViewController : MKPlaceInlineMapViewController <MKStackingViewControllerFixedHeightAware> {

	NSArray* _fetchedMapItems;
	_MKPlacePoisInlineMapContentView* _mapContentView;
	BOOL _resizableViewsDisabled;
	CLLocation* _location;

}

@property (nonatomic,retain) CLLocation * location;                    //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;              //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
+(id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)_updateMap;
-(long long)preferredUserInterfaceStyle;
-(void)_handleTapOnMap;
-(id)visibleMapItems;
-(void)fetchPoisForBrand;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(id)geoCamera;
@end

