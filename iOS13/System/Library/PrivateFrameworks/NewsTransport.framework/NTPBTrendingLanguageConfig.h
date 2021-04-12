/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)languageTag;
-(void)setLanguageTag:(NSString *)arg1 ;
-(BOOL)hasLanguageTag;
-(void)addTrendingTopics:(id)arg1 ;
-(void)clearTrendingTopics;
-(unsigned long long)trendingTopicsCount;
-(id)trendingTopicsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)trendingTopics;
-(void)setTrendingTopics:(NSMutableArray *)arg1 ;
@end

