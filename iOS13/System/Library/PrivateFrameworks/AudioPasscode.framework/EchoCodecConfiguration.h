/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/

#import <AudioPasscode/AudioPasscode-Structs.h>
#import <AudioPasscode/AUPasscodeCodecConfiguration.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EchoCodecConfiguration : AUPasscodeCodecConfiguration <NSCopying> {

	BOOL _hfNoiseFillingFlag;
	float _delayForBit0;
	float _delayForBit1;
	float _syncDetectThreshold;
	float _echoGainDB;
	float _noiseGainDB;
	float _hpfCutOffFreq;
	unsigned long long _frameSize;
	unsigned long long _numFrameRepeat;
	unsigned long long _randomSeed;
	unsigned long long _algorithmVersionNumber;

}

@property (assign,nonatomic) unsigned long long frameSize;                           //@synthesize frameSize=_frameSize - In the implementation block
@property (assign,nonatomic) unsigned long long numFrameRepeat;                      //@synthesize numFrameRepeat=_numFrameRepeat - In the implementation block
@property (assign,nonatomic) float delayForBit0;                                     //@synthesize delayForBit0=_delayForBit0 - In the implementation block
@property (assign,nonatomic) float delayForBit1;                                     //@synthesize delayForBit1=_delayForBit1 - In the implementation block
@property (assign,nonatomic) float syncDetectThreshold;                              //@synthesize syncDetectThreshold=_syncDetectThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long randomSeed;                          //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign,nonatomic) float echoGainDB;                                       //@synthesize echoGainDB=_echoGainDB - In the implementation block
@property (assign,nonatomic) float noiseGainDB;                                      //@synthesize noiseGainDB=_noiseGainDB - In the implementation block
@property (assign,nonatomic) float hpfCutOffFreq;                                    //@synthesize hpfCutOffFreq=_hpfCutOffFreq - In the implementation block
@property (assign,nonatomic) BOOL hfNoiseFillingFlag;                                //@synthesize hfNoiseFillingFlag=_hfNoiseFillingFlag - In the implementation block
@property (assign,nonatomic) unsigned long long algorithmVersionNumber;              //@synthesize algorithmVersionNumber=_algorithmVersionNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDefaultValues;
-(void)setFrameSize:(unsigned long long)arg1 ;
-(unsigned long long)randomSeed;
-(unsigned long long)frameSize;
-(unsigned long long)numFrameRepeat;
-(float)delayForBit0;
-(float)delayForBit1;
-(float)hpfCutOffFreq;
-(unsigned long long)algorithmVersionNumber;
-(float)echoGainDB;
-(float)noiseGainDB;
-(BOOL)hfNoiseFillingFlag;
-(float)syncDetectThreshold;
-(id)initWithCapabilityData:(id)arg1 ;
-(id)commandLineOptions;
-(id)initWithCommandLineArgs:(id)arg1 ;
-(void)setNumFrameRepeat:(unsigned long long)arg1 ;
-(void)setDelayForBit0:(float)arg1 ;
-(void)setDelayForBit1:(float)arg1 ;
-(void)setRandomSeed:(unsigned long long)arg1 ;
-(void)setSyncDetectThreshold:(float)arg1 ;
-(void)setEchoGainDB:(float)arg1 ;
-(void)setNoiseGainDB:(float)arg1 ;
-(void)setHpfCutOffFreq:(float)arg1 ;
-(void)setHfNoiseFillingFlag:(BOOL)arg1 ;
-(void)setAlgorithmVersionNumber:(unsigned long long)arg1 ;
@end

