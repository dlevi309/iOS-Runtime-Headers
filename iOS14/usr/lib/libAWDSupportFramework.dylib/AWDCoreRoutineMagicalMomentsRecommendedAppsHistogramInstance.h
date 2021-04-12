/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)confidence;
-(id)dictionaryRepresentation;
-(void)setRank:(int)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(BOOL)hasBundleId;
-(BOOL)hasRank;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(unsigned long long)hash;
-(int)rank;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setHasRank:(BOOL)arg1 ;
@end

