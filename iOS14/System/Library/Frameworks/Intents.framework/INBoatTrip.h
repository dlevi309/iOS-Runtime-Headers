/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INDateComponentsRange, CLPlacemark;

@interface INBoatTrip : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _provider;
	NSString* _boatName;
	NSString* _boatNumber;
	INDateComponentsRange* _tripDuration;
	CLPlacemark* _departureBoatTerminalLocation;
	CLPlacemark* _arrivalBoatTerminalLocation;

}

@property (nonatomic,copy,readonly) NSString * provider;                                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,copy,readonly) NSString * boatName;                                      //@synthesize boatName=_boatName - In the implementation block
@property (nonatomic,copy,readonly) NSString * boatNumber;                                    //@synthesize boatNumber=_boatNumber - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * tripDuration;                     //@synthesize tripDuration=_tripDuration - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * departureBoatTerminalLocation;              //@synthesize departureBoatTerminalLocation=_departureBoatTerminalLocation - In the implementation block
@property (nonatomic,copy,readonly) CLPlacemark * arrivalBoatTerminalLocation;                //@synthesize arrivalBoatTerminalLocation=_arrivalBoatTerminalLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithProvider:(id)arg1 boatName:(id)arg2 boatNumber:(id)arg3 tripDuration:(id)arg4 departureBoatTerminalLocation:(id)arg5 arrivalBoatTerminalLocation:(id)arg6 ;
-(INDateComponentsRange *)tripDuration;
-(NSString *)provider;
-(NSString *)boatNumber;
-(CLPlacemark *)arrivalBoatTerminalLocation;
-(void)encodeWithCoder:(id)arg1 ;
-(CLPlacemark *)departureBoatTerminalLocation;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(NSString *)boatName;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

