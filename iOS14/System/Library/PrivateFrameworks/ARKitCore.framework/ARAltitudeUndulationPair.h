/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@interface ARAltitudeUndulationPair : NSObject {

	BOOL _lookupFailed;
	double _altitude;
	double _undulation;

}

@property (nonatomic,readonly) double altitude;                //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) double undulation;              //@synthesize undulation=_undulation - In the implementation block
@property (nonatomic,readonly) BOOL lookupFailed;              //@synthesize lookupFailed=_lookupFailed - In the implementation block
-(double)altitude;
-(double)undulation;
-(id)initWithAltitude:(double)arg1 undulation:(double)arg2 lookupFailed:(BOOL)arg3 ;
-(BOOL)lookupFailed;
@end

