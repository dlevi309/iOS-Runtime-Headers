/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INReservation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INLodgingReservation : INReservation <NSCopying, NSSecureCoding> {

	CLPlacemark* _lodgingBusinessLocation;
	INDateComponentsRange* _reservationDuration;
	NSNumber* _numberOfAdults;
	NSNumber* _numberOfChildren;

}

@property (nonatomic,copy,readonly) CLPlacemark * lodgingBusinessLocation;                    //@synthesize lodgingBusinessLocation=_lodgingBusinessLocation - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * reservationDuration;              //@synthesize reservationDuration=_reservationDuration - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfAdults;                                //@synthesize numberOfAdults=_numberOfAdults - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfChildren;                              //@synthesize numberOfChildren=_numberOfChildren - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 lodgingBusinessLocation:(id)arg8 reservationDuration:(id)arg9 numberOfAdults:(id)arg10 numberOfChildren:(id)arg11 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 lodgingBusinessLocation:(id)arg7 reservationDuration:(id)arg8 numberOfAdults:(id)arg9 numberOfChildren:(id)arg10 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSNumber *)numberOfAdults;
-(CLPlacemark *)lodgingBusinessLocation;
-(INDateComponentsRange *)reservationDuration;
-(NSNumber *)numberOfChildren;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

