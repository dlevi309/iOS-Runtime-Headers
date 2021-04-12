/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSNumber *)numberOfChildren;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 lodgingBusinessLocation:(id)arg7 reservationDuration:(id)arg8 numberOfAdults:(id)arg9 numberOfChildren:(id)arg10 ;
-(CLPlacemark *)lodgingBusinessLocation;
-(INDateComponentsRange *)reservationDuration;
-(NSNumber *)numberOfAdults;
@end

