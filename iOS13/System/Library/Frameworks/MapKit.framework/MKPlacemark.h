/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreLocation/CLPlacemark.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>

@property (nonatomic,readonly) NSString * countryCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(NSString *)countryCode;
-(CLLocationCoordinate2D)coordinate;
-(NSString *)title;
-(id)thoroughfare;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2 ;
-(id)mkPostalAddressDictionary;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 postalAddress:(id)arg2 ;
@end

