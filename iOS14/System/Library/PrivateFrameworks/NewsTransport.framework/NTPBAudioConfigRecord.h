/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBRecordBase, NSString, NSMutableArray;

@interface NTPBAudioConfigRecord : PBCodable <NSCopying> {

	NTPBRecordBase* _base;
	NSString* _configuration;
	NSString* _dailyBriefingArticleID;
	NSString* _featuredAudioArticleListID;
	NSMutableArray* _heroArticleIDs;
	NSString* _latestAudioArticleListID;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                              //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasConfiguration; 
@property (nonatomic,retain) NSString * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BOOL hasDailyBriefingArticleID; 
@property (nonatomic,retain) NSString * dailyBriefingArticleID;                  //@synthesize dailyBriefingArticleID=_dailyBriefingArticleID - In the implementation block
@property (nonatomic,readonly) BOOL hasFeaturedAudioArticleListID; 
@property (nonatomic,retain) NSString * featuredAudioArticleListID;              //@synthesize featuredAudioArticleListID=_featuredAudioArticleListID - In the implementation block
@property (nonatomic,retain) NSMutableArray * heroArticleIDs;                    //@synthesize heroArticleIDs=_heroArticleIDs - In the implementation block
@property (nonatomic,readonly) BOOL hasLatestAudioArticleListID; 
@property (nonatomic,retain) NSString * latestAudioArticleListID;                //@synthesize latestAudioArticleListID=_latestAudioArticleListID - In the implementation block
+(Class)heroArticleIDsType;
-(id)dictionaryRepresentation;
-(NTPBRecordBase *)base;
-(void)addHeroArticleIDs:(id)arg1 ;
-(NSString *)featuredAudioArticleListID;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(BOOL)hasBase;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasConfiguration;
-(NSMutableArray *)heroArticleIDs;
-(void)setDailyBriefingArticleID:(NSString *)arg1 ;
-(BOOL)hasLatestAudioArticleListID;
-(id)description;
-(BOOL)hasFeaturedAudioArticleListID;
-(unsigned long long)heroArticleIDsCount;
-(NSString *)configuration;
-(void)setFeaturedAudioArticleListID:(NSString *)arg1 ;
-(BOOL)hasDailyBriefingArticleID;
-(NSString *)dailyBriefingArticleID;
-(void)setHeroArticleIDs:(NSMutableArray *)arg1 ;
-(NSString *)latestAudioArticleListID;
-(unsigned long long)hash;
-(id)heroArticleIDsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLatestAudioArticleListID:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)clearHeroArticleIDs;
-(void)dealloc;
-(void)setConfiguration:(NSString *)arg1 ;
@end

