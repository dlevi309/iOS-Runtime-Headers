/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBTrendingLanguageConfig : PBCodable <NSCopying> {

	NSString* _languageTag;
	NSMutableArray* _trendingTopics;

}

@property (nonatomic,readonly) BOOL hasLanguageTag; 
@property (nonatomic,retain) NSString * languageTag;                       //@synthesize languageTag=_languageTag - In the implementation block
@property (nonatomic,retain) NSMutableArray * trendingTopics;              //@synthesize trendingTopics=_trendingTopics - In the implementation block
+(Class)trendingTopicsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)languageTag;
-(id)description;
-(void)addTrendingTopics:(id)arg1 ;
-(BOOL)hasLanguageTag;
-(void)clearTrendingTopics;
-(unsigned long long)trendingTopicsCount;
-(NSMutableArray *)trendingTopics;
-(id)trendingTopicsAtIndex:(unsigned long long)arg1 ;
-(void)setTrendingTopics:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLanguageTag:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

