/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDSymptomsNetworkUsageAttributionMetric : PBCodable <NSCopying> {

	unsigned long long _flowsImpactedCount;
	unsigned long long _timestamp;
	unsigned long long _usageBytes;
	int _networkType;
	int _usageAttributedTo;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                    //@synthesize networkType=_networkType - In the implementation block
@property (assign,nonatomic) BOOL hasUsageAttributedTo; 
@property (assign,nonatomic) int usageAttributedTo;                              //@synthesize usageAttributedTo=_usageAttributedTo - In the implementation block
@property (assign,nonatomic) BOOL hasUsageBytes; 
@property (assign,nonatomic) unsigned long long usageBytes;                      //@synthesize usageBytes=_usageBytes - In the implementation block
@property (assign,nonatomic) BOOL hasFlowsImpactedCount; 
@property (assign,nonatomic) unsigned long long flowsImpactedCount;              //@synthesize flowsImpactedCount=_flowsImpactedCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(int)usageAttributedTo;
-(void)setUsageAttributedTo:(int)arg1 ;
-(void)setHasUsageAttributedTo:(BOOL)arg1 ;
-(BOOL)hasUsageAttributedTo;
-(id)usageAttributedToAsString:(int)arg1 ;
-(int)StringAsUsageAttributedTo:(id)arg1 ;
-(void)setUsageBytes:(unsigned long long)arg1 ;
-(void)setHasUsageBytes:(BOOL)arg1 ;
-(BOOL)hasUsageBytes;
-(void)setFlowsImpactedCount:(unsigned long long)arg1 ;
-(void)setHasFlowsImpactedCount:(BOOL)arg1 ;
-(BOOL)hasFlowsImpactedCount;
-(unsigned long long)usageBytes;
-(unsigned long long)flowsImpactedCount;
@end

