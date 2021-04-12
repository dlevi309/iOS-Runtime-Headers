/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MKMapCameraZoomRange : NSObject <NSSecureCoding, NSCopying> {

	double _minCenterCoordinateDistance;
	double _maxCenterCoordinateDistance;

}

@property (nonatomic,readonly) double minCenterCoordinateDistance;              //@synthesize minCenterCoordinateDistance=_minCenterCoordinateDistance - In the implementation block
@property (nonatomic,readonly) double maxCenterCoordinateDistance;              //@synthesize maxCenterCoordinateDistance=_maxCenterCoordinateDistance - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)minCenterCoordinateDistance;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToMapCameraZoomRange:(id)arg1 ;
-(double)maxCenterCoordinateDistance;
-(id)initWithMinCenterCoordinateDistance:(double)arg1 maxCenterCoordinateDistance:(double)arg2 ;
-(id)initWithMaxCenterCoordinateDistance:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMinCenterCoordinateDistance:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

