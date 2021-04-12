/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <ActivitySharing/ActivitySharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ASCodableDatabaseCompetitionScore : PBCodable <NSCopying> {

	SCD_Struct_AS2* _scores;

}

@property (nonatomic,readonly) unsigned long long scoresCount; 
@property (nonatomic,readonly) long long* scores; 
-(id)dictionaryRepresentation;
-(long long*)scores;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)addScores:(long long)arg1 ;
-(void)clearScores;
-(unsigned long long)scoresCount;
-(long long)scoresAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setScores:(long long*)arg1 count:(unsigned long long)arg2 ;
@end

