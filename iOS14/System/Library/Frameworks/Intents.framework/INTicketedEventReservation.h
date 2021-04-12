/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INTicketedEvent, INSeat;

@interface INTicketedEventReservation : INReservation <NSCopying, NSSecureCoding> {

	INTicketedEvent* _event;
	INSeat* _reservedSeat;

}

@property (nonatomic,copy,readonly) INTicketedEvent * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) INSeat * reservedSeat;                //@synthesize reservedSeat=_reservedSeat - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 event:(id)arg8 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(INSeat *)reservedSeat;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 reservedSeat:(id)arg8 event:(id)arg9 ;
-(INTicketedEvent *)event;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

