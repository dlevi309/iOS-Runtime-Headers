/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
*/


@interface PRProximity : NSObject {

	BOOL _azimuthIsValid;
	BOOL _elevationIsValid;
	float _range;
	float _azimuth;
	float _elevation;
	double _timestamp;

}

@property (nonatomic,readonly) double timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) float range;                        //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) float azimuth;                      //@synthesize azimuth=_azimuth - In the implementation block
@property (nonatomic,readonly) float elevation;                    //@synthesize elevation=_elevation - In the implementation block
@property (nonatomic,readonly) BOOL azimuthIsValid;                //@synthesize azimuthIsValid=_azimuthIsValid - In the implementation block
@property (nonatomic,readonly) BOOL elevationIsValid;              //@synthesize elevationIsValid=_elevationIsValid - In the implementation block
-(float)range;
-(double)timestamp;
-(1)vector;
-(float)azimuth;
-(float)elevation;
-(id)initWithTime:(double)arg1 range:(float)arg2 azimuth:(float)arg3 elevation:(float)arg4 ;
-(id)initWithTime:(double)arg1 range:(float)arg2 ;
-(BOOL)azimuthIsValid;
-(BOOL)elevationIsValid;
@end

