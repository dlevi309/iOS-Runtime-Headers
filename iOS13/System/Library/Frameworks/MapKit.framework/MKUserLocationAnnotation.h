/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKAnnotationPrivate.h>

@class CLLocation, NSString;

@interface MKUserLocationAnnotation : NSObject <MKAnnotationPrivate> {

	CLLocationCoordinate2D _coordinate;
	CLLocation* _location;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) long long representation; 
@property (nonatomic,retain) CLLocation * location;                          //@synthesize location=_location - In the implementation block
-(CLLocationCoordinate2D)coordinate;
-(CLLocation *)location;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
@end

