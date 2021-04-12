/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)addLanguageConfigs:(id)arg1 ;
-(void)setFallbackLanguageTag:(NSString *)arg1 ;
-(BOOL)hasFallbackLanguageTag;
-(void)clearLanguageConfigs;
-(unsigned long long)languageConfigsCount;
-(id)languageConfigsAtIndex:(unsigned long long)arg1 ;
-(NSString *)fallbackLanguageTag;
-(NSMutableArray *)languageConfigs;
-(void)setLanguageConfigs:(NSMutableArray *)arg1 ;
@end

