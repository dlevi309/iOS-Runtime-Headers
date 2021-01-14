/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _CLLocationGroundAltitude : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isAltitudeWgs84Available;
	int _undulationModel;
	double _estimate;
	double _uncertainty;
	double _undulation;
	double _altitudeWgs84;
	double _uncertaintyWgs84;

}

@property (nonatomic,readonly) double estimate;                            //@synthesize estimate=_estimate - In the implementation block
@property (nonatomic,readonly) double uncertainty;                         //@synthesize uncertainty=_uncertainty - In the implementation block
@property (nonatomic,readonly) double undulation;                          //@synthesize undulation=_undulation - In the implementation block
@property (nonatomic,readonly) int undulationModel;                        //@synthesize undulationModel=_undulationModel - In the implementation block
@property (nonatomic,readonly) double altitude; 
@property (nonatomic,readonly) BOOL isAltitudeWgs84Available;              //@synthesize isAltitudeWgs84Available=_isAltitudeWgs84Available - In the implementation block
@property (nonatomic,readonly) double altitudeWgs84;                       //@synthesize altitudeWgs84=_altitudeWgs84 - In the implementation block
@property (nonatomic,readonly) double uncertaintyWgs84;                    //@synthesize uncertaintyWgs84=_uncertaintyWgs84 - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)altitude;
-(double)estimate;
-(void)encodeWithCoder:(id)arg1 ;
-(int)undulationModel;
-(double)uncertaintyWgs84;
-(double)undulation;
-(double)altitudeWgs84;
-(BOOL)isAltitudeWgs84Available;
-(id)initWithEstimate:(double)arg1 uncertainty:(double)arg2 ;
-(id)initWithEstimate:(double)arg1 uncertainty:(double)arg2 undulation:(double)arg3 undulationModel:(int)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

