/*
* Generated on Thursday, January 14, 2021 at 2:28:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramSet : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _confidenceOfMostConfidentModel;
	int _durationSinceLastSuccessfulTraining;
	int _fallbackModelConfidence;
	NSMutableArray* _instances;
	int _modelType;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * instances;                               //@synthesize instances=_instances - In the implementation block
@property (assign,nonatomic) BOOL hasModelType; 
@property (assign,nonatomic) int modelType;                                            //@synthesize modelType=_modelType - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackModelConfidence; 
@property (assign,nonatomic) int fallbackModelConfidence;                              //@synthesize fallbackModelConfidence=_fallbackModelConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceOfMostConfidentModel; 
@property (assign,nonatomic) int confidenceOfMostConfidentModel;                       //@synthesize confidenceOfMostConfidentModel=_confidenceOfMostConfidentModel - In the implementation block
@property (assign,nonatomic) BOOL hasDurationSinceLastSuccessfulTraining; 
@property (assign,nonatomic) int durationSinceLastSuccessfulTraining;                  //@synthesize durationSinceLastSuccessfulTraining=_durationSinceLastSuccessfulTraining - In the implementation block
+(Class)instanceType;
-(int)modelType;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)instances;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setModelType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)instanceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)instancesCount;
-(void)addInstance:(id)arg1 ;
-(void)clearInstances;
-(void)setInstances:(NSMutableArray *)arg1 ;
-(void)setHasModelType:(BOOL)arg1 ;
-(BOOL)hasModelType;
-(void)setDurationSinceLastSuccessfulTraining:(int)arg1 ;
-(void)setHasDurationSinceLastSuccessfulTraining:(BOOL)arg1 ;
-(BOOL)hasDurationSinceLastSuccessfulTraining;
-(int)durationSinceLastSuccessfulTraining;
-(void)setFallbackModelConfidence:(int)arg1 ;
-(void)setHasFallbackModelConfidence:(BOOL)arg1 ;
-(BOOL)hasFallbackModelConfidence;
-(void)setConfidenceOfMostConfidentModel:(int)arg1 ;
-(void)setHasConfidenceOfMostConfidentModel:(BOOL)arg1 ;
-(BOOL)hasConfidenceOfMostConfidentModel;
-(int)fallbackModelConfidence;
-(int)confidenceOfMostConfidentModel;
@end

