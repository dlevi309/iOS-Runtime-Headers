/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)articles;
-(void)addArticles:(id)arg1 ;
-(void)setArticles:(NSMutableArray *)arg1 ;
-(void)clearArticles;
-(unsigned long long)articlesCount;
-(id)articlesAtIndex:(unsigned long long)arg1 ;
@end

