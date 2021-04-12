/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface AWDSymptomsNetworkTCPFlowThroughputEstimator : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _clientIdentifier;
	NSMutableArray* _flowThroughputEvents;
	int _networkType;
	NSString* _sourceAppIdentifier;
	SCD_Struct_AW35 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType;                                    //@synthesize networkType=_networkType - In the implementation block
@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceAppIdentifier; 
@property (nonatomic,retain) NSString * sourceAppIdentifier;                     //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * flowThroughputEvents;              //@synthesize flowThroughputEvents=_flowThroughputEvents - In the implementation block
+(Class)flowThroughputEventType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(NSString *)sourceAppIdentifier;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)clientIdentifier;
-(BOOL)hasClientIdentifier;
-(BOOL)hasSourceAppIdentifier;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)addFlowThroughputEvent:(id)arg1 ;
-(unsigned long long)flowThroughputEventsCount;
-(void)clearFlowThroughputEvents;
-(id)flowThroughputEventAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)flowThroughputEvents;
-(void)setFlowThroughputEvents:(NSMutableArray *)arg1 ;
@end

