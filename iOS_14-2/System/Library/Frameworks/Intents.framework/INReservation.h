/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString, NSDate, NSArray, NSURL, INDateComponentsRange;

@interface INReservation : NSObject <NSCopying, NSSecureCoding> {

	INSpeakableString* _itemReference;
	NSString* _reservationNumber;
	NSDate* _bookingTime;
	long long _reservationStatus;
	NSString* _reservationHolderName;
	NSArray* _actions;
	NSURL* _URL;
	INDateComponentsRange* __duration;

}

@property (nonatomic,copy,readonly) INDateComponentsRange * _duration;              //@synthesize _duration=__duration - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * itemReference;              //@synthesize itemReference=_itemReference - In the implementation block
@property (nonatomic,copy,readonly) NSString * reservationNumber;                   //@synthesize reservationNumber=_reservationNumber - In the implementation block
@property (nonatomic,copy,readonly) NSDate * bookingTime;                           //@synthesize bookingTime=_bookingTime - In the implementation block
@property (nonatomic,readonly) long long reservationStatus;                         //@synthesize reservationStatus=_reservationStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * reservationHolderName;               //@synthesize reservationHolderName=_reservationHolderName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * actions;                              //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,copy,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 URL:(id)arg7 ;
-(NSArray *)actions;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSURL *)url;
-(id)description;
-(NSDate *)bookingTime;
-(INSpeakableString *)itemReference;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(INDateComponentsRange *)_duration;
-(NSString *)reservationNumber;
-(long long)reservationStatus;
-(NSString *)reservationHolderName;
-(id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

