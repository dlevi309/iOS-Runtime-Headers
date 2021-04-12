/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INDateComponentsRange, NSNumber, CLPlacemark;

@interface INRestaurantReservation : INReservation <NSCopying, NSSecureCoding> {

	INDateComponentsRange* _reservationDuration;
	NSNumber* _partySize;
	CLPlacemark* _restaurantLocation;

}

@property (nonatomic,copy,readonly) INDateComponentsRange * reservationDuration;              //@synthesize reservationDuration=_reservationDuration - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * partySize;                                     //@synthesize partySize=_partySize - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * restaurantLocation;                         //@synthesize restaurantLocation=_restaurantLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservationDuration:(id)arg8 partySize:(id)arg9 restaurantLocation:(id)arg10 ;
-(CLPlacemark *)restaurantLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INDateComponentsRange *)reservationDuration;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)partySize;
-(id)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

