/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable <NSCopying> {

	double _score;
	unsigned long long _topicId;
	unsigned long long _unixTimestampSec;
	NSString* _algorithm;
	NSString* _namedEntity;
	NSString* _sourceBundleId;
	SCD_Struct_PP3 _has;

}

@property (nonatomic,readonly) BOOL hasSourceBundleId; 
@property (nonatomic,retain) NSString * sourceBundleId;                        //@synthesize sourceBundleId=_sourceBundleId - In the implementation block
@property (nonatomic,readonly) BOOL hasAlgorithm; 
@property (nonatomic,retain) NSString * algorithm;                             //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                     //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasTopicId; 
@property (assign,nonatomic) unsigned long long topicId;                       //@synthesize topicId=_topicId - In the implementation block
@property (nonatomic,readonly) BOOL hasNamedEntity; 
@property (nonatomic,retain) NSString * namedEntity;                           //@synthesize namedEntity=_namedEntity - In the implementation block
@property (assign,nonatomic) BOOL hasUnixTimestampSec; 
@property (assign,nonatomic) unsigned long long unixTimestampSec;              //@synthesize unixTimestampSec=_unixTimestampSec - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)score;
-(void)writeTo:(id)arg1 ;
-(NSString *)algorithm;
-(void)setScore:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)setAlgorithm:(NSString *)arg1 ;
-(BOOL)hasAlgorithm;
-(void)setTopicId:(unsigned long long)arg1 ;
-(BOOL)hasTopicId;
-(unsigned long long)topicId;
-(BOOL)hasSourceBundleId;
-(NSString *)sourceBundleId;
-(void)setSourceBundleId:(NSString *)arg1 ;
-(void)setHasTopicId:(BOOL)arg1 ;
-(BOOL)hasNamedEntity;
-(NSString *)namedEntity;
-(void)setNamedEntity:(NSString *)arg1 ;
-(void)setUnixTimestampSec:(unsigned long long)arg1 ;
-(void)setHasUnixTimestampSec:(BOOL)arg1 ;
-(BOOL)hasUnixTimestampSec;
-(unsigned long long)unixTimestampSec;
@end

