/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBPublisherFavorabilityScores : PBCodable <NSCopying> {

	NSMutableArray* _scores;

}

@property (nonatomic,retain) NSMutableArray * scores;              //@synthesize scores=_scores - In the implementation block
+(Class)scoresType;
-(id)dictionaryRepresentation;
-(NSMutableArray *)scores;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addScores:(id)arg1 ;
-(void)clearScores;
-(unsigned long long)scoresCount;
-(id)scoresAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setScores:(NSMutableArray *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

