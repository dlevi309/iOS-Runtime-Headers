/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLVertex : NSObject <NSCopying, NSSecureCoding> {

	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
+(BOOL)supportsSecureCoding;
-(CLLocationCoordinate2D)coordinate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)getDistanceFrom:(CLLocationCoordinate2D)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

