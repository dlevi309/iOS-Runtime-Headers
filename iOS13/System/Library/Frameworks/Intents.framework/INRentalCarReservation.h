/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INRentalCar, INDateComponentsRange, CLPlacemark;

@interface INRentalCarReservation : INReservation <NSCopying, NSSecureCoding> {

	INRentalCar* _rentalCar;
	INDateComponentsRange* _rentalDuration;
	CLPlacemark* _pickupLocation;
	CLPlacemark* _dropOffLocation;

}

@property (nonatomic,copy,readonly) INRentalCar * rentalCar;                             //@synthesize rentalCar=_rentalCar - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * rentalDuration;              //@synthesize rentalDuration=_rentalDuration - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * pickupLocation;                        //@synthesize pickupLocation=_pickupLocation - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * dropOffLocation;                       //@synthesize dropOffLocation=_dropOffLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(CLPlacemark *)pickupLocation;
-(CLPlacemark *)dropOffLocation;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10 ;
-(INRentalCar *)rentalCar;
-(INDateComponentsRange *)rentalDuration;
@end

