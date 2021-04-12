/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic) BOOL resizableViewsDisabled;              //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inlineMapWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
-(CLLocation *)location;
-(void)_handleTapOnMap;
-(id)visibleMapItems;
-(void)fetchPoisForBrand;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)geoCamera;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_updateMap;
-(long long)preferredUserInterfaceStyle;
-(void)loadView;
@end

