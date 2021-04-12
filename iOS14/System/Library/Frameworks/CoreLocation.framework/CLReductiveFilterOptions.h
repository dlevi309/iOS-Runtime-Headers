/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/


@interface CLReductiveFilterOptions : NSObject {

	unsigned long long _beaconType;
	double _transmitPower;

}

@property (nonatomic,readonly) unsigned long long beaconType;              //@synthesize beaconType=_beaconType - In the implementation block
@property (nonatomic,readonly) double transmitPower;                       //@synthesize transmitPower=_transmitPower - In the implementation block
-(id)init;
-(unsigned long long)beaconType;
-(double)transmitPower;
-(id)initWithBeaconType:(unsigned long long)arg1 transmitPower:(double)arg2 ;
-(id)initWithBeaconType:(unsigned long long)arg1 ;
@end

