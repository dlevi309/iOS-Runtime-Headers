/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface PBBProtoOfflineTerms : PBCodable <NSCopying> {

	NSMutableArray* _appleLanguages;
	NSString* _countryCode;
	NSString* _languageCode;
	NSData* _license;
	NSData* _multiterms;
	NSData* _warranty;

}

@property (nonatomic,readonly) BOOL hasLicense; 
@property (nonatomic,retain) NSData * license;                             //@synthesize license=_license - In the implementation block
@property (nonatomic,readonly) BOOL hasMultiterms; 
@property (nonatomic,retain) NSData * multiterms;                          //@synthesize multiterms=_multiterms - In the implementation block
@property (nonatomic,readonly) BOOL hasWarranty; 
@property (nonatomic,retain) NSData * warranty;                            //@synthesize warranty=_warranty - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * appleLanguages;              //@synthesize appleLanguages=_appleLanguages - In the implementation block
+(Class)appleLanguagesType;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(NSString *)languageCode;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(NSData *)license;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWarranty:(NSData *)arg1 ;
-(NSData *)warranty;
-(void)addAppleLanguages:(id)arg1 ;
-(unsigned long long)appleLanguagesCount;
-(void)clearAppleLanguages;
-(id)appleLanguagesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)appleLanguages;
-(void)setAppleLanguages:(NSMutableArray *)arg1 ;
-(void)setLicense:(NSData *)arg1 ;
-(void)setMultiterms:(NSData *)arg1 ;
-(BOOL)hasLicense;
-(BOOL)hasMultiterms;
-(BOOL)hasWarranty;
-(NSData *)multiterms;
@end

