/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(SPObservationLocation *)location;
-(NSUUID *)beaconIdentifier;
-(id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4 ;
@end

