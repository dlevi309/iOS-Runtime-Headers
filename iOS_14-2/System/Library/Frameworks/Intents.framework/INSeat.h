/*
* Generated on Thursday, January 14, 2021 at 2:21:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface INSeat : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _seatSection;
	NSString* _seatRow;
	NSString* _seatNumber;
	NSString* _seatingType;

}

@property (nonatomic,copy,readonly) NSString * seatSection;              //@synthesize seatSection=_seatSection - In the implementation block
@property (nonatomic,copy,readonly) NSString * seatRow;                  //@synthesize seatRow=_seatRow - In the implementation block
@property (nonatomic,copy,readonly) NSString * seatNumber;               //@synthesize seatNumber=_seatNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * seatingType;              //@synthesize seatingType=_seatingType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)seatRow;
-(id)initWithSeatSection:(id)arg1 seatRow:(id)arg2 seatNumber:(id)arg3 seatingType:(id)arg4 ;
-(NSString *)seatSection;
-(NSString *)seatingType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)seatNumber;
@end

