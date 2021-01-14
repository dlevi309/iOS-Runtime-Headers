/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
*/

#import <BusinessChatService/BusinessChatService-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSString;

@interface NBPhoneNumber : NSObject <NSCopying, NSCoding> {

	BOOL _italianLeadingZero;
	NSNumber* _countryCode;
	NSNumber* _nationalNumber;
	NSString* _extension;
	NSNumber* _numberOfLeadingZeros;
	NSString* _rawInput;
	NSNumber* _countryCodeSource;
	NSString* _preferredDomesticCarrierCode;

}

@property (nonatomic,retain) NSNumber * countryCode;                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSNumber * nationalNumber;                            //@synthesize nationalNumber=_nationalNumber - In the implementation block
@property (nonatomic,retain) NSString * extension;                                 //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL italianLeadingZero;                              //@synthesize italianLeadingZero=_italianLeadingZero - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfLeadingZeros;                      //@synthesize numberOfLeadingZeros=_numberOfLeadingZeros - In the implementation block
@property (nonatomic,retain) NSString * rawInput;                                  //@synthesize rawInput=_rawInput - In the implementation block
@property (nonatomic,retain) NSNumber * countryCodeSource;                         //@synthesize countryCodeSource=_countryCodeSource - In the implementation block
@property (nonatomic,retain) NSString * preferredDomesticCarrierCode;              //@synthesize preferredDomesticCarrierCode=_preferredDomesticCarrierCode - In the implementation block
-(void)setCountryCode:(NSNumber *)arg1 ;
-(NSNumber *)countryCode;
-(id)init;
-(void)setExtension:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)extension;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setNationalNumber:(NSNumber *)arg1 ;
-(void)setNumberOfLeadingZeros:(NSNumber *)arg1 ;
-(void)setCountryCodeSource:(NSNumber *)arg1 ;
-(NSNumber *)countryCodeSource;
-(NSNumber *)nationalNumber;
-(NSNumber *)numberOfLeadingZeros;
-(BOOL)italianLeadingZero;
-(void)setItalianLeadingZero:(BOOL)arg1 ;
-(NSString *)rawInput;
-(void)setRawInput:(NSString *)arg1 ;
-(NSString *)preferredDomesticCarrierCode;
-(void)setPreferredDomesticCarrierCode:(NSString *)arg1 ;
-(void)clearCountryCodeSource;
-(long long)getCountryCodeSourceOrDefault;
@end

