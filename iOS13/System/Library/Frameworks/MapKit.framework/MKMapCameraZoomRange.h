/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMinCenterCoordinateDistance:(double)arg1 maxCenterCoordinateDistance:(double)arg2 ;
-(double)minCenterCoordinateDistance;
-(double)maxCenterCoordinateDistance;
-(BOOL)isEqualToMapCameraZoomRange:(id)arg1 ;
-(id)initWithMinCenterCoordinateDistance:(double)arg1 ;
-(id)initWithMaxCenterCoordinateDistance:(double)arg1 ;
@end

