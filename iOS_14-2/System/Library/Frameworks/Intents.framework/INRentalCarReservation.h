/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 rentalCar:(id)arg8 rentalDuration:(id)arg9 pickupLocation:(id)arg10 dropOffLocation:(id)arg11 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INRentalCar *)rentalCar;
-(CLPlacemark *)dropOffLocation;
-(CLPlacemark *)pickupLocation;
-(INDateComponentsRange *)rentalDuration;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

