/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSeat, INBusTrip;

@interface INBusReservation : INReservation <NSCopying, NSSecureCoding> {

	INSeat* _reservedSeat;
	INBusTrip* _busTrip;

}

@property (nonatomic,copy,readonly) INSeat * reservedSeat;              //@synthesize reservedSeat=_reservedSeat - In the implementation block
@property (nonatomic,copy,readonly) INBusTrip * busTrip;                //@synthesize busTrip=_busTrip - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 url:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 busTrip:(id)arg9 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSeat *)reservedSeat;
-(INBusTrip *)busTrip;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

