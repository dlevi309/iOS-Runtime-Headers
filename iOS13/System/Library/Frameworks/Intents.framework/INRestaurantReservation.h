/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INDateComponentsRange *)reservationDuration;
-(NSNumber *)partySize;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9 ;
-(CLPlacemark *)restaurantLocation;
@end

