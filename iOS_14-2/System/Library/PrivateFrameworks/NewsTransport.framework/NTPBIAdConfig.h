/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBIAdConfig : PBCodable <NSCopying> {

	long long _segmentsHistoryWindowInterval;
	long long _segmentsMinimumArticleCount;
	long long _segmentsSubmissionFrequency;
	double _segmentsThreshold;
	BOOL _segmentsEnabled;
	SCD_Struct_NT11 _has;

}

@property (assign,nonatomic) BOOL hasSegmentsEnabled; 
@property (assign,nonatomic) BOOL segmentsEnabled;                                 //@synthesize segmentsEnabled=_segmentsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsThreshold; 
@property (assign,nonatomic) double segmentsThreshold;                             //@synthesize segmentsThreshold=_segmentsThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsSubmissionFrequency; 
@property (assign,nonatomic) long long segmentsSubmissionFrequency;                //@synthesize segmentsSubmissionFrequency=_segmentsSubmissionFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsHistoryWindowInterval; 
@property (assign,nonatomic) long long segmentsHistoryWindowInterval;              //@synthesize segmentsHistoryWindowInterval=_segmentsHistoryWindowInterval - In the implementation block
@property (assign,nonatomic) BOOL hasSegmentsMinimumArticleCount; 
@property (assign,nonatomic) long long segmentsMinimumArticleCount;                //@synthesize segmentsMinimumArticleCount=_segmentsMinimumArticleCount - In the implementation block
-(id)dictionaryRepresentation;
-(long long)segmentsHistoryWindowInterval;
-(void)mergeFrom:(id)arg1 ;
-(void)setSegmentsEnabled:(BOOL)arg1 ;
-(void)setHasSegmentsEnabled:(BOOL)arg1 ;
-(double)segmentsThreshold;
-(BOOL)hasSegmentsEnabled;
-(void)setSegmentsThreshold:(double)arg1 ;
-(void)setHasSegmentsThreshold:(BOOL)arg1 ;
-(BOOL)hasSegmentsThreshold;
-(void)setSegmentsSubmissionFrequency:(long long)arg1 ;
-(void)setHasSegmentsSubmissionFrequency:(BOOL)arg1 ;
-(BOOL)hasSegmentsSubmissionFrequency;
-(void)setSegmentsHistoryWindowInterval:(long long)arg1 ;
-(void)setHasSegmentsHistoryWindowInterval:(BOOL)arg1 ;
-(BOOL)hasSegmentsHistoryWindowInterval;
-(void)setSegmentsMinimumArticleCount:(long long)arg1 ;
-(void)setHasSegmentsMinimumArticleCount:(BOOL)arg1 ;
-(BOOL)hasSegmentsMinimumArticleCount;
-(BOOL)segmentsEnabled;
-(long long)segmentsSubmissionFrequency;
-(id)description;
-(long long)segmentsMinimumArticleCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

