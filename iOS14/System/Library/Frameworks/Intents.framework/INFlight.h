/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INAirline, NSString, INDateComponentsRange, INAirportGate;

@interface INFlight : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INAirline* _airline;
	NSString* _flightNumber;
	INDateComponentsRange* _boardingTime;
	INDateComponentsRange* _flightDuration;
	INAirportGate* _departureAirportGate;
	INAirportGate* _arrivalAirportGate;

}

@property (nonatomic,copy,readonly) INAirline * airline;                                 //@synthesize airline=_airline - In the implementation block
@property (nonatomic,copy,readonly) NSString * flightNumber;                             //@synthesize flightNumber=_flightNumber - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * boardingTime;                //@synthesize boardingTime=_boardingTime - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * flightDuration;              //@synthesize flightDuration=_flightDuration - In the implementation block
@property (nonatomic,copy,readonly) INAirportGate * departureAirportGate;                //@synthesize departureAirportGate=_departureAirportGate - In the implementation block
@property (nonatomic,copy,readonly) INAirportGate * arrivalAirportGate;                  //@synthesize arrivalAirportGate=_arrivalAirportGate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INAirline *)airline;
-(NSString *)flightNumber;
-(INDateComponentsRange *)boardingTime;
-(INDateComponentsRange *)flightDuration;
-(INAirportGate *)departureAirportGate;
-(INAirportGate *)arrivalAirportGate;
-(id)initWithAirline:(id)arg1 flightNumber:(id)arg2 boardingTime:(id)arg3 flightDuration:(id)arg4 departureAirportGate:(id)arg5 arrivalAirportGate:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

