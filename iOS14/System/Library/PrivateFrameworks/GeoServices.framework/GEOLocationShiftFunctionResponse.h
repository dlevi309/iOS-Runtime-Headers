/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GEOLocationShiftFunctionResponse : NSObject <NSSecureCoding> {

	GEOCoarseLocationLatLng _originalCoordinate;
	double _params[9];
	double _radius;
	BOOL _shouldUsePolyShiftFunction;
	unsigned _version;

}

@property (nonatomic,readonly) GEOCoarseLocationLatLng originalCoordinate;              //@synthesize originalCoordinate=_originalCoordinate - In the implementation block
@property (nonatomic,readonly) double radius;                                           //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) unsigned version;                                        //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)radius;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValidForCoordinate:(GEOCoarseLocationLatLng)arg1 ;
-(GEOCoarseLocationLatLng)shiftedCoordinateForCoordinate:(GEOCoarseLocationLatLng)arg1 accuracy:(double*)arg2 ;
-(id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(GEOCoarseLocationLatLng)arg2 version:(unsigned)arg3 ;
-(GEOCoarseLocationLatLng)originalCoordinate;
-(id)contractFunctionTo:(id)arg1 withRadius:(double)arg2 ;
-(unsigned)version;
-(BOOL)isEqual:(id)arg1 ;
@end

