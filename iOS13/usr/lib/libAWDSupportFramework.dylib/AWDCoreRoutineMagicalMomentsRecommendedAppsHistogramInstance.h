/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramInstance : PBCodable <NSCopying> {

	NSString* _bundleId;
	int _confidence;
	int _rank;
	SCD_Struct_AW3 _has;

}

@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;              //@synthesize bundleId=_bundleId - In the implementation block
@property (assign,nonatomic) BOOL hasRank; 
@property (assign,nonatomic) int rank;                         //@synthesize rank=_rank - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                   //@synthesize confidence=_confidence - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)confidence;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setRank:(int)arg1 ;
-(int)rank;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setHasRank:(BOOL)arg1 ;
-(BOOL)hasRank;
-(BOOL)hasBundleId;
@end

