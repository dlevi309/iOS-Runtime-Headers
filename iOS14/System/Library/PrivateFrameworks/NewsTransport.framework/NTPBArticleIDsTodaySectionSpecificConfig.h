/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBArticleIDsTodaySectionSpecificConfig : PBCodable <NSCopying> {

	NSMutableArray* _articles;

}

@property (nonatomic,retain) NSMutableArray * articles;              //@synthesize articles=_articles - In the implementation block
+(Class)articlesType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)articles;
-(id)description;
-(void)clearArticles;
-(unsigned long long)articlesCount;
-(id)articlesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addArticles:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArticles:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

