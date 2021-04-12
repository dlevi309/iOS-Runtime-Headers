/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/PXPlacesGeotaggable.h>

@class NSString;

@interface PXPlacesTestDataPoint : NSObject <PXPlacesGeotaggable> {

	CLLocationCoordinate2D _coordinate;
	NSString* _name;

}

@property (readonly) CGImageRef image; 
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CLLocationCoordinate2D)coordinate;
-(CGImageRef)image;
-(long long)compareTo:(id)arg1 ;
-(NSString *)name;
-(NSString *)description;
-(id)initWithName:(id)arg1 location:(CLLocationCoordinate2D)arg2 ;
@end

