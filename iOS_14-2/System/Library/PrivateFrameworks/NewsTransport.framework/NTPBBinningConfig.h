/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBBinningConfig : PBCodable <NSCopying> {

	double _decreaseConsumptionThreshold;
	long long _evaluationFrequency;
	long long _historyLength;
	double _increaseConsumptionThreshold;
	long long _minimumArticleCount;
	int _defaultChannelBin;
	int _defaultTopicBin;
	BOOL _enabled;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationFrequency; 
@property (assign,nonatomic) long long evaluationFrequency;                     //@synthesize evaluationFrequency=_evaluationFrequency - In the implementation block
@property (assign,nonatomic) BOOL hasHistoryLength; 
@property (assign,nonatomic) long long historyLength;                           //@synthesize historyLength=_historyLength - In the implementation block
@property (assign,nonatomic) BOOL hasIncreaseConsumptionThreshold; 
@property (assign,nonatomic) double increaseConsumptionThreshold;               //@synthesize increaseConsumptionThreshold=_increaseConsumptionThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasDecreaseConsumptionThreshold; 
@property (assign,nonatomic) double decreaseConsumptionThreshold;               //@synthesize decreaseConsumptionThreshold=_decreaseConsumptionThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasMinimumArticleCount; 
@property (assign,nonatomic) long long minimumArticleCount;                     //@synthesize minimumArticleCount=_minimumArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultTopicBin; 
@property (assign,nonatomic) int defaultTopicBin;                               //@synthesize defaultTopicBin=_defaultTopicBin - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultChannelBin; 
@property (assign,nonatomic) int defaultChannelBin;                             //@synthesize defaultChannelBin=_defaultChannelBin - In the implementation block
-(id)dictionaryRepresentation;
-(BOOL)enabled;
-(BOOL)hasEnabled;
-(void)setHasEnabled:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setEvaluationFrequency:(long long)arg1 ;
-(void)setHasEvaluationFrequency:(BOOL)arg1 ;
-(BOOL)hasEvaluationFrequency;
-(void)setHistoryLength:(long long)arg1 ;
-(void)setHasHistoryLength:(BOOL)arg1 ;
-(BOOL)hasHistoryLength;
-(void)setIncreaseConsumptionThreshold:(double)arg1 ;
-(void)setMinimumArticleCount:(long long)arg1 ;
-(void)setHasIncreaseConsumptionThreshold:(BOOL)arg1 ;
-(BOOL)hasIncreaseConsumptionThreshold;
-(void)setDecreaseConsumptionThreshold:(double)arg1 ;
-(void)setHasDecreaseConsumptionThreshold:(BOOL)arg1 ;
-(BOOL)hasDecreaseConsumptionThreshold;
-(void)setHasMinimumArticleCount:(BOOL)arg1 ;
-(BOOL)hasMinimumArticleCount;
-(int)defaultTopicBin;
-(void)setDefaultTopicBin:(int)arg1 ;
-(void)setHasDefaultTopicBin:(BOOL)arg1 ;
-(BOOL)hasDefaultTopicBin;
-(int)defaultChannelBin;
-(void)setDefaultChannelBin:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDefaultChannelBin:(BOOL)arg1 ;
-(BOOL)hasDefaultChannelBin;
-(long long)evaluationFrequency;
-(long long)historyLength;
-(double)increaseConsumptionThreshold;
-(double)decreaseConsumptionThreshold;
-(long long)minimumArticleCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

