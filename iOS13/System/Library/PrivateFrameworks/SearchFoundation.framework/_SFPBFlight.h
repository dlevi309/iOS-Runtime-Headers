/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBFlight.h>
@class NSString, NSArray, NSData;


@protocol _SFPBFlight <NSObject>
@property (nonatomic,copy) NSString * flightID; 
@property (nonatomic,copy) NSString * carrierCode; 
@property (nonatomic,copy) NSString * carrierName; 
@property (nonatomic,copy) NSString * flightNumber; 
@property (nonatomic,copy) NSArray * legs; 
@property (nonatomic,copy) NSString * operatorCarrierCode; 
@property (nonatomic,copy) NSString * operatorFlightNumber; 
@property (nonatomic,copy) NSString * carrierPhoneNumber; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)carrierName;
-(void)setCarrierName:(id)arg1;
-(unsigned long long)legsCount;
-(void)clearLegs;
-(NSArray *)legs;
-(void)setLegs:(id)arg1;
-(NSString *)flightID;
-(void)setFlightID:(id)arg1;
-(NSString *)carrierCode;
-(void)setCarrierCode:(id)arg1;
-(NSString *)flightNumber;
-(void)setFlightNumber:(id)arg1;
-(NSString *)operatorCarrierCode;
-(void)setOperatorCarrierCode:(id)arg1;
-(NSString *)operatorFlightNumber;
-(void)setOperatorFlightNumber:(id)arg1;
-(NSString *)carrierPhoneNumber;
-(void)setCarrierPhoneNumber:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)addLegs:(id)arg1;
-(id)legsAtIndex:(unsigned long long)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData;

@interface _SFPBFlight : PBCodable <_SFPBFlight, NSSecureCoding> {

	NSString* _flightID;
	NSString* _carrierCode;
	NSString* _carrierName;
	NSString* _flightNumber;
	NSArray* _legs;
	NSString* _operatorCarrierCode;
	NSString* _operatorFlightNumber;
	NSString* _carrierPhoneNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * flightID;                          //@synthesize flightID=_flightID - In the implementation block
@property (nonatomic,copy) NSString * carrierCode;                       //@synthesize carrierCode=_carrierCode - In the implementation block
@property (nonatomic,copy) NSString * carrierName;                       //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy) NSString * flightNumber;                      //@synthesize flightNumber=_flightNumber - In the implementation block
@property (nonatomic,copy) NSArray * legs;                               //@synthesize legs=_legs - In the implementation block
@property (nonatomic,copy) NSString * operatorCarrierCode;               //@synthesize operatorCarrierCode=_operatorCarrierCode - In the implementation block
@property (nonatomic,copy) NSString * operatorFlightNumber;              //@synthesize operatorFlightNumber=_operatorFlightNumber - In the implementation block
@property (nonatomic,copy) NSString * carrierPhoneNumber;                //@synthesize carrierPhoneNumber=_carrierPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)carrierName;
-(void)setCarrierName:(NSString *)arg1 ;
-(unsigned long long)legsCount;
-(void)clearLegs;
-(NSArray *)legs;
-(void)setLegs:(NSArray *)arg1 ;
-(NSString *)flightID;
-(void)setFlightID:(NSString *)arg1 ;
-(NSString *)carrierCode;
-(void)setCarrierCode:(NSString *)arg1 ;
-(NSString *)flightNumber;
-(void)setFlightNumber:(NSString *)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSString *)operatorCarrierCode;
-(void)setOperatorCarrierCode:(NSString *)arg1 ;
-(NSString *)operatorFlightNumber;
-(void)setOperatorFlightNumber:(NSString *)arg1 ;
-(NSString *)carrierPhoneNumber;
-(void)setCarrierPhoneNumber:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)addLegs:(id)arg1 ;
-(id)legsAtIndex:(unsigned long long)arg1 ;
@end

