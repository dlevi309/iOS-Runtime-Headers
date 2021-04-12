/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface FlowClassification : NSObject {

	unsigned long long _condensedValues;
	unsigned _disposition;
	unsigned _latency;
	unsigned _jitter;
	unsigned _lossTolerance;
	unsigned _burstiness;
	unsigned _size;
	unsigned _requiredBandwidth;
	unsigned _preferredBandwidth;

}

@property (assign,nonatomic) unsigned disposition;                     //@synthesize disposition=_disposition - In the implementation block
@property (assign,nonatomic) unsigned latency;                         //@synthesize latency=_latency - In the implementation block
@property (assign,nonatomic) unsigned jitter;                          //@synthesize jitter=_jitter - In the implementation block
@property (assign,nonatomic) unsigned lossTolerance;                   //@synthesize lossTolerance=_lossTolerance - In the implementation block
@property (assign,nonatomic) unsigned burstiness;                      //@synthesize burstiness=_burstiness - In the implementation block
@property (assign,nonatomic) unsigned size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned requiredBandwidth;               //@synthesize requiredBandwidth=_requiredBandwidth - In the implementation block
@property (assign,nonatomic) unsigned preferredBandwidth;              //@synthesize preferredBandwidth=_preferredBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned duration; 
+(id)defaultInstance;
+(unsigned)dispositionFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)latencyFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)jitterFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)lossToleranceFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)requiredBandwidthsizeFromDigest:(FlowClassificationDigest*)arg1 ;
+(unsigned)desiredBandwidthsizeFromDigest:(FlowClassificationDigest*)arg1 ;
+(id)propertyFlagsToString:(unsigned)arg1 ;
+(id)classFlagsToString:(unsigned)arg1 ;
+(id)undefinedInstance;
-(id)description;
-(unsigned)size;
-(unsigned)duration;
-(unsigned)latency;
-(void)setSize:(unsigned)arg1 ;
-(BOOL)configure:(id)arg1 ;
-(unsigned)disposition;
-(void)setDisposition:(unsigned)arg1 ;
-(void)setLatency:(unsigned)arg1 ;
-(unsigned)jitter;
-(void)setJitter:(unsigned)arg1 ;
-(unsigned)burstiness;
-(unsigned)lossTolerance;
-(unsigned)requiredBandwidth;
-(unsigned)preferredBandwidth;
-(void)setLossTolerance:(unsigned)arg1 ;
-(void)setBurstiness:(unsigned)arg1 ;
-(void)setRequiredBandwidth:(unsigned)arg1 ;
-(void)setPreferredBandwidth:(unsigned)arg1 ;
@end

