/*
* Generated on Monday, March 1, 2021 at 2:36:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/UB.bundle/UB
*/


@class NSData;

@interface UBProgressiveBracketingStatistics : NSObject {

	BOOL _aeLimitsReached;
	BOOL _stationary;
	float _conversionGain;
	float _readNoise_1x;
	float _readNoise_8x;
	float _agc;
	float _ispDGain;
	float _sensorDGain;
	float _ispDGainRangeExpansionFactor;
	float _gain;
	float _aeAverage;
	float _aeTarget;
	int _motionFromAEMatrix;
	int _aeThumbnailWidth;
	int _aeThumbnailHeight;
	float _motionDataBiasErrorEstimate;
	double _integrationTime;
	NSData* _aeThumbnail;

}

@property (assign,nonatomic) float conversionGain;                            //@synthesize conversionGain=_conversionGain - In the implementation block
@property (assign,nonatomic) float readNoise_1x;                              //@synthesize readNoise_1x=_readNoise_1x - In the implementation block
@property (assign,nonatomic) float readNoise_8x;                              //@synthesize readNoise_8x=_readNoise_8x - In the implementation block
@property (assign,nonatomic) double integrationTime;                          //@synthesize integrationTime=_integrationTime - In the implementation block
@property (assign,nonatomic) float agc;                                       //@synthesize agc=_agc - In the implementation block
@property (assign,nonatomic) float ispDGain;                                  //@synthesize ispDGain=_ispDGain - In the implementation block
@property (assign,nonatomic) float sensorDGain;                               //@synthesize sensorDGain=_sensorDGain - In the implementation block
@property (assign,nonatomic) float ispDGainRangeExpansionFactor;              //@synthesize ispDGainRangeExpansionFactor=_ispDGainRangeExpansionFactor - In the implementation block
@property (assign,nonatomic) float gain;                                      //@synthesize gain=_gain - In the implementation block
@property (assign,nonatomic) BOOL aeLimitsReached;                            //@synthesize aeLimitsReached=_aeLimitsReached - In the implementation block
@property (assign,nonatomic) float aeAverage;                                 //@synthesize aeAverage=_aeAverage - In the implementation block
@property (assign,nonatomic) float aeTarget;                                  //@synthesize aeTarget=_aeTarget - In the implementation block
@property (assign,nonatomic) int motionFromAEMatrix;                          //@synthesize motionFromAEMatrix=_motionFromAEMatrix - In the implementation block
@property (nonatomic,retain) NSData * aeThumbnail;                            //@synthesize aeThumbnail=_aeThumbnail - In the implementation block
@property (assign,nonatomic) int aeThumbnailWidth;                            //@synthesize aeThumbnailWidth=_aeThumbnailWidth - In the implementation block
@property (assign,nonatomic) int aeThumbnailHeight;                           //@synthesize aeThumbnailHeight=_aeThumbnailHeight - In the implementation block
@property (assign,nonatomic) BOOL stationary;                                 //@synthesize stationary=_stationary - In the implementation block
@property (assign,nonatomic) float motionDataBiasErrorEstimate;               //@synthesize motionDataBiasErrorEstimate=_motionDataBiasErrorEstimate - In the implementation block
-(BOOL)stationary;
-(void)setGain:(float)arg1 ;
-(float)gain;
-(float)conversionGain;
-(float)readNoise_1x;
-(float)readNoise_8x;
-(double)integrationTime;
-(float)agc;
-(float)ispDGain;
-(float)sensorDGain;
-(float)ispDGainRangeExpansionFactor;
-(float)aeAverage;
-(float)aeTarget;
-(BOOL)aeLimitsReached;
-(int)motionFromAEMatrix;
-(float)motionDataBiasErrorEstimate;
-(void)setConversionGain:(float)arg1 ;
-(void)setReadNoise_1x:(float)arg1 ;
-(void)setReadNoise_8x:(float)arg1 ;
-(void)setIntegrationTime:(double)arg1 ;
-(void)setAgc:(float)arg1 ;
-(void)setIspDGain:(float)arg1 ;
-(void)setSensorDGain:(float)arg1 ;
-(void)setIspDGainRangeExpansionFactor:(float)arg1 ;
-(void)setAeLimitsReached:(BOOL)arg1 ;
-(void)setAeAverage:(float)arg1 ;
-(void)setAeTarget:(float)arg1 ;
-(void)setMotionFromAEMatrix:(int)arg1 ;
-(void)setStationary:(BOOL)arg1 ;
-(void)setMotionDataBiasErrorEstimate:(float)arg1 ;
-(void)setAeThumbnail:(NSData *)arg1 ;
-(void)setAeThumbnailWidth:(int)arg1 ;
-(void)setAeThumbnailHeight:(int)arg1 ;
-(NSData *)aeThumbnail;
-(int)aeThumbnailWidth;
-(int)aeThumbnailHeight;
@end

