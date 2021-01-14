/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface FlowClassification : NSObject {

	unsigned long long _condensedValues;
	BOOL _automatedExpiration;
	unsigned _disposition;
	unsigned _latency;
	unsigned _jitter;
	unsigned _lossTolerance;
	unsigned _burstiness;
	unsigned _size;
	unsigned _requiredBandwidth;
	unsigned _preferredBandwidth;
	FlowClassification* _nextClassification;
	double _expirationTime;

}

@property (assign,nonatomic) unsigned disposition;                                 //@synthesize disposition=_disposition - In the implementation block
@property (assign,nonatomic) unsigned latency;                                     //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) unsigned jitter;                                      //@synthesize jitter=_jitter - In the implementation block
@property (assign,nonatomic) unsigned lossTolerance;                               //@synthesize lossTolerance=_lossTolerance - In the implementation block
@property (assign,nonatomic) unsigned burstiness;                                  //@synthesize burstiness=_burstiness - In the implementation block
@property (assign,nonatomic) unsigned size;                                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned requiredBandwidth;                           //@synthesize requiredBandwidth=_requiredBandwidth - In the implementation block
@property (assign,nonatomic) unsigned preferredBandwidth;                          //@synthesize preferredBandwidth=_preferredBandwidth - In the implementation block
@property (assign,nonatomic) BOOL automatedExpiration;                             //@synthesize automatedExpiration=_automatedExpiration - In the implementation block
@property (assign,nonatomic) double expirationTime;                                //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,retain) FlowClassification * nextClassification;              //@synthesize nextClassification=_nextClassification - In the implementation block
@property (nonatomic,readonly) unsigned duration; 
+(id)classificationWithDictionary:(id)arg1 ;
+(unsigned)requiredBandwidthsizeFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)latencyFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)jitterFromDigest:(FlowClassificationDigest*)arg1 ;
+(id)undefinedInstance;
+(id)defaultInstance;
+(unsigned)desiredBandwidthsizeFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)dispositionFromDigest:(FlowClassificationDigest*)arg1 ;
+(id)classFlagsToString:(unsigned)arg1 ;
+(id)propertyFlagsToString:(unsigned)arg1 ;
+(unsigned)lossToleranceFromDigest:(FlowClassificationDigest*)arg1 ;
-(BOOL)configure:(id)arg1 ;
-(id)dictionaryForm;
-(BOOL)automatedExpiration;
-(unsigned)requiredBandwidth;
-(unsigned)lossTolerance;
-(void)setAutomatedExpiration:(BOOL)arg1 ;
-(unsigned)size;
-(void)setLatency:(unsigned)arg1 ;
-(BOOL)setOnExpiry:(id)arg1 ;
-(unsigned)jitter;
-(void)setSize:(unsigned)arg1 ;
-(void)setNextClassification:(FlowClassification *)arg1 ;
-(void)setRequiredBandwidth:(unsigned)arg1 ;
-(void)setDisposition:(unsigned)arg1 ;
-(void)setJitter:(unsigned)arg1 ;
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(id)description;
-(unsigned)latency;
-(void)setPreferredBandwidth:(unsigned)arg1 ;
-(unsigned)disposition;
-(unsigned)duration;
-(unsigned)burstiness;
-(void)setLossTolerance:(unsigned)arg1 ;
-(void)setBurstiness:(unsigned)arg1 ;
-(unsigned)preferredBandwidth;
-(FlowClassification *)nextClassification;
@end

