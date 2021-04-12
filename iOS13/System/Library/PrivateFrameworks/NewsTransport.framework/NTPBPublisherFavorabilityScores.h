/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)scores;
-(void)setScores:(NSMutableArray *)arg1 ;
-(void)addScores:(id)arg1 ;
-(void)clearScores;
-(unsigned long long)scoresCount;
-(id)scoresAtIndex:(unsigned long long)arg1 ;
@end

