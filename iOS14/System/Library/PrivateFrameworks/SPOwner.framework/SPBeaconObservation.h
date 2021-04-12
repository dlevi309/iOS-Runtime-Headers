/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, SPObservationLocation;

@interface SPBeaconObservation : NSObject <NSSecureCoding> {

	NSUUID* _beaconIdentifier;
	long long _type;
	NSDate* _date;
	SPObservationLocation* _location;

}

@property (nonatomic,copy,readonly) NSUUID * beaconIdentifier;                     //@synthesize beaconIdentifier=_beaconIdentifier - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) SPObservationLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(SPObservationLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSUUID *)beaconIdentifier;
-(id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
@end

