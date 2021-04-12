/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLLSLLocationCoordinate : NSObject <NSCopying, NSSecureCoding> {

	double _latitude;
	double _longitude;

}

@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

