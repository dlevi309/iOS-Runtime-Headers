/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
*/


#import <NLPLearner/NLPLearner-Structs.h>
@class NSURL, NSNumber, NSString;

@interface QuickTypePFLTrainerMLP : NSObject {

	NSURL* _seedModelPath;
	CFScopedPtr<void *>* _model;
	NSNumber* _initialLoss;
	NSNumber* _trainingLoss;
	unsigned long long _batchSize;
	NSNumber* _learningRate;
	NSNumber* _gradientClipMin;
	NSNumber* _gradientClipMax;
	NSNumber* _clippingNorm;
	unsigned long long _normBinCount;
	NSString* _privacyIdentifier;

}

@property (nonatomic,readonly) NSString * privacyIdentifier;               //@synthesize privacyIdentifier=_privacyIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                 //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,retain) NSNumber * learningRate;                      //@synthesize learningRate=_learningRate - In the implementation block
@property (nonatomic,retain) NSNumber * gradientClipMin;                   //@synthesize gradientClipMin=_gradientClipMin - In the implementation block
@property (nonatomic,retain) NSNumber * gradientClipMax;                   //@synthesize gradientClipMax=_gradientClipMax - In the implementation block
@property (nonatomic,retain) NSNumber * clippingNorm;                      //@synthesize clippingNorm=_clippingNorm - In the implementation block
@property (assign,nonatomic) unsigned long long normBinCount;              //@synthesize normBinCount=_normBinCount - In the implementation block
@property (nonatomic,readonly) NSNumber * initialLoss;                     //@synthesize initialLoss=_initialLoss - In the implementation block
@property (nonatomic,readonly) NSNumber * trainingLoss;                    //@synthesize trainingLoss=_trainingLoss - In the implementation block
+(void)initialize;
+(CFDataRef)copyToFlatBuffer:(void*)arg1 ;
+(id)reportingStringForModelUpdates:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(unsigned long long)batchSize;
-(BOOL)trainOn:(id)arg1 forNEpochs:(unsigned long long)arg2 ;
-(NSNumber *)gradientClipMin;
-(NSNumber *)gradientClipMax;
-(void)setGradientClipMin:(NSNumber *)arg1 ;
-(void)setGradientClipMax:(NSNumber *)arg1 ;
-(void)setLearningRate:(NSNumber *)arg1 ;
-(NSNumber *)learningRate;
-(NSNumber *)clippingNorm;
-(unsigned long long)normBinCount;
-(void)setClippingNorm:(NSNumber *)arg1 ;
-(void)setNormBinCount:(unsigned long long)arg1 ;
-(id)initWithSeedModelPath:(id)arg1 andPrivacyIdentifier:(id)arg2 ;
-(void)writeModelToURL:(id)arg1 ;
-(id)getWeightUpdatesAddNoise:(BOOL)arg1 encryptionKey:(id)arg2 recipe:(id)arg3 ;
-(NSNumber *)initialLoss;
-(NSNumber *)trainingLoss;
-(NSString *)privacyIdentifier;
@end

