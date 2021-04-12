/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@interface RTMapItemProviderBaseParameters : NSObject {

	double _locationUncertaintyMax;
	double _locationUncertaintyMin;
	double _mapItemUncertaintyMax;
	double _mapItemUncertaintyMin;

}

@property (nonatomic,readonly) double locationUncertaintyMax;              //@synthesize locationUncertaintyMax=_locationUncertaintyMax - In the implementation block
@property (nonatomic,readonly) double locationUncertaintyMin;              //@synthesize locationUncertaintyMin=_locationUncertaintyMin - In the implementation block
@property (nonatomic,readonly) double mapItemUncertaintyMax;               //@synthesize mapItemUncertaintyMax=_mapItemUncertaintyMax - In the implementation block
@property (nonatomic,readonly) double mapItemUncertaintyMin;               //@synthesize mapItemUncertaintyMin=_mapItemUncertaintyMin - In the implementation block
-(id)init;
-(id)initWithDefaultsManager:(id)arg1 ;
-(double)locationUncertaintyMax;
-(double)locationUncertaintyMin;
-(double)mapItemUncertaintyMin;
-(double)mapItemUncertaintyMax;
-(id)initWithLocationUncertaintyMax:(double)arg1 locationUncertaintyMin:(double)arg2 mapItemUncertaintyMax:(double)arg3 mapItemUncertaintyMin:(double)arg4 ;
@end

