/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSNumber, NSString;

@interface NBPhoneNumber : NSObject <NSCopying, NSCoding> {

	BOOL _italianLeadingZero;
	NSNumber* _countryCode;
	NSNumber* _nationalNumber;
	NSString* _extension;
	NSString* _rawInput;
	NSNumber* _countryCodeSource;
	NSString* _preferredDomesticCarrierCode;

}

@property (nonatomic,retain) NSNumber * countryCode;                               //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSNumber * nationalNumber;                            //@synthesize nationalNumber=_nationalNumber - In the implementation block
@property (nonatomic,retain) NSString * extension;                                 //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL italianLeadingZero;                              //@synthesize italianLeadingZero=_italianLeadingZero - In the implementation block
@property (nonatomic,retain) NSString * rawInput;                                  //@synthesize rawInput=_rawInput - In the implementation block
@property (nonatomic,retain) NSNumber * countryCodeSource;                         //@synthesize countryCodeSource=_countryCodeSource - In the implementation block
@property (nonatomic,retain) NSString * preferredDomesticCarrierCode;              //@synthesize preferredDomesticCarrierCode=_preferredDomesticCarrierCode - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)countryCode;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(void)setCountryCode:(NSNumber *)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
-(void)clearCountryCodeSource;
-(int)getCountryCodeSourceOrDefault;
-(NSNumber *)nationalNumber;
-(void)setNationalNumber:(NSNumber *)arg1 ;
-(BOOL)italianLeadingZero;
-(void)setItalianLeadingZero:(BOOL)arg1 ;
-(NSString *)rawInput;
-(void)setRawInput:(NSString *)arg1 ;
-(NSNumber *)countryCodeSource;
-(void)setCountryCodeSource:(NSNumber *)arg1 ;
-(NSString *)preferredDomesticCarrierCode;
-(void)setPreferredDomesticCarrierCode:(NSString *)arg1 ;
@end

