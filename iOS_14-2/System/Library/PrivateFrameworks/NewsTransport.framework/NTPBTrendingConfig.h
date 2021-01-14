/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTrendingConfig : PBCodable <NSCopying> {

	NSString* _fallbackLanguageTag;
	NSMutableArray* _languageConfigs;

}

@property (nonatomic,readonly) BOOL hasFallbackLanguageTag; 
@property (nonatomic,retain) NSString * fallbackLanguageTag;                //@synthesize fallbackLanguageTag=_fallbackLanguageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * languageConfigs;              //@synthesize languageConfigs=_languageConfigs - In the implementation block
+(Class)languageConfigsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addLanguageConfigs:(id)arg1 ;
-(void)setFallbackLanguageTag:(NSString *)arg1 ;
-(BOOL)hasFallbackLanguageTag;
-(void)clearLanguageConfigs;
-(unsigned long long)languageConfigsCount;
-(NSMutableArray *)languageConfigs;
-(id)languageConfigsAtIndex:(unsigned long long)arg1 ;
-(NSString *)fallbackLanguageTag;
-(void)setLanguageConfigs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

