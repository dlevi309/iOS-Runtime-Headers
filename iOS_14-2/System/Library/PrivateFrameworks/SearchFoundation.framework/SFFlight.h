/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFFlight.h>
@class NSString, NSArray, NSDictionary, NSData;


@protocol SFFlight <NSObject>
@property (nonatomic,copy) NSString * flightID; 
@property (nonatomic,copy) NSString * carrierCode; 
@property (nonatomic,copy) NSString * carrierName; 
@property (nonatomic,copy) NSString * flightNumber; 
@property (nonatomic,copy) NSArray * legs; 
@property (nonatomic,copy) NSString * operatorCarrierCode; 
@property (nonatomic,copy) NSString * operatorFlightNumber; 
@property (nonatomic,copy) NSString * carrierPhoneNumber; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)legs;
-(NSString *)flightNumber;
-(void)setFlightNumber:(id)arg1;
-(void)setFlightID:(id)arg1;
-(void)setCarrierCode:(id)arg1;
-(void)setOperatorCarrierCode:(id)arg1;
-(void)setOperatorFlightNumber:(id)arg1;
-(NSString *)carrierCode;
-(NSString *)operatorCarrierCode;
-(NSString *)operatorFlightNumber;
-(NSString *)carrierName;
-(NSData *)jsonData;
-(void)setLegs:(id)arg1;
-(NSString *)carrierPhoneNumber;
-(void)setCarrierPhoneNumber:(id)arg1;
-(NSString *)flightID;
-(void)setCarrierName:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSData;

@interface SFFlight : NSObject <SFFlight, NSSecureCoding, NSCopying> {

	NSString* _flightID;
	NSString* _carrierCode;
	NSString* _carrierName;
	NSString* _flightNumber;
	NSArray* _legs;
	NSString* _operatorCarrierCode;
	NSString* _operatorFlightNumber;
	NSString* _carrierPhoneNumber;

}

@property (nonatomic,copy) NSString * flightID;                                      //@synthesize flightID=_flightID - In the implementation block
@property (nonatomic,copy) NSString * carrierCode;                                   //@synthesize carrierCode=_carrierCode - In the implementation block
@property (nonatomic,copy) NSString * carrierName;                                   //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy) NSString * flightNumber;                                  //@synthesize flightNumber=_flightNumber - In the implementation block
@property (nonatomic,copy) NSArray * legs;                                           //@synthesize legs=_legs - In the implementation block
@property (nonatomic,copy) NSString * operatorCarrierCode;                           //@synthesize operatorCarrierCode=_operatorCarrierCode - In the implementation block
@property (nonatomic,copy) NSString * operatorFlightNumber;                          //@synthesize operatorFlightNumber=_operatorFlightNumber - In the implementation block
@property (nonatomic,copy) NSString * carrierPhoneNumber;                            //@synthesize carrierPhoneNumber=_carrierPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(NSArray *)legs;
-(NSString *)flightNumber;
-(void)setFlightNumber:(NSString *)arg1 ;
-(void)setFlightID:(NSString *)arg1 ;
-(void)setCarrierCode:(NSString *)arg1 ;
-(void)setOperatorCarrierCode:(NSString *)arg1 ;
-(void)setOperatorFlightNumber:(NSString *)arg1 ;
-(NSString *)carrierCode;
-(NSString *)operatorCarrierCode;
-(NSString *)operatorFlightNumber;
-(NSString *)carrierName;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLegs:(NSArray *)arg1 ;
-(NSString *)carrierPhoneNumber;
-(void)setCarrierPhoneNumber:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)flightID;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

