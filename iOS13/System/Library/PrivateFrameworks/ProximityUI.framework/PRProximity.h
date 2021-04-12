/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)timestamp;
-(float)range;
-(float)azimuth;
-(float)elevation;
-(1)vector;
-(id)initWithTime:(double)arg1 range:(float)arg2 azimuth:(float)arg3 elevation:(float)arg4 ;
-(id)initWithTime:(double)arg1 range:(float)arg2 ;
-(BOOL)azimuthIsValid;
-(BOOL)elevationIsValid;
@end

