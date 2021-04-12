/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaLocaleIdentifier : PBCodable {

	NSString* _countryCode;
	NSString* _languageCode;
	BOOL _hasCountryCode;
	BOOL _hasLanguageCode;

}

@property (nonatomic,copy) NSString * countryCode;               //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasCountryCode;                //@synthesize hasCountryCode=_hasCountryCode - In the implementation block
@property (nonatomic,copy) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
@property (assign,nonatomic) BOOL hasLanguageCode;               //@synthesize hasLanguageCode=_hasLanguageCode - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(NSData *)jsonData;
-(NSString *)languageCode;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCountryCode:(BOOL)arg1 ;
-(void)setHasLanguageCode:(BOOL)arg1 ;
@end

