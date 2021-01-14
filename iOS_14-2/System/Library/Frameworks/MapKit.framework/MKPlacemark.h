/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <CoreLocation/CLPlacemark.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MKPlacemark : CLPlacemark <MKAnnotation>

@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)countryCode;
-(CLLocationCoordinate2D)coordinate;
-(id)mkPostalAddressDictionary;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 postalAddress:(id)arg2 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 addressDictionary:(id)arg2 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)thoroughfare;
-(NSString *)title;
@end

