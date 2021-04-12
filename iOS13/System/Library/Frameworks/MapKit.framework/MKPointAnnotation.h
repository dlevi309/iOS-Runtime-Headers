/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKShape.h>
#import <libobjc.A.dylib/MKGeoJSONObject.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>
#import <libobjc.A.dylib/MKAnnotationRepresentation.h>
#import <libobjc.A.dylib/MKAnnotationPrivate.h>

@class CLLocation, VKCustomFeature, NSString;

@interface MKPointAnnotation : MKShape <MKGeoJSONObject, MKCustomFeatureAnnotation, MKAnnotationRepresentation, MKAnnotationPrivate> {

	CLLocationCoordinate2D _coordinate;
	long long _representation;
	VKCustomFeature* _customFeature;
	CLLocation* _location;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long representation;                       //@synthesize representation=_representation - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double course; 
@property (nonatomic,readonly) BOOL showsBalloonCallout; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
-(id)init;
-(CLLocationCoordinate2D)coordinate;
-(void)prepareForReuse;
-(CLLocation *)location;
-(id)feature;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)isPersistent;
-(long long)representation;
-(id)reuseIdentifier;
-(id)annotation;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)viewRepresentation;
-(BOOL)_shouldDeselectWhenDragged;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(BOOL)shouldRepresentSelf;
-(void)_invalidateCachedCoordinate;
-(BOOL)_isPendingSelectionAnimated;
-(BOOL)showsBalloonCallout;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setShowsBalloonCallout:(BOOL)arg1 ;
-(void)setRepresentation:(long long)arg1 ;
@end

