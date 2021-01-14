/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


#import <AVFCore/AVFCore-Structs.h>
@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject {

	AudioStreamBasicDescription _inputASBD;
	AudioStreamBasicDescription _outputASBD;
	OpaqueAudioConverterRef _audioConverter;
	unsigned _outputDataRate;
	BOOL _needNewConverter;
	BOOL _needAvailableSampleRates;
	BOOL _needApplicableParameters;
	NSArray* _availableOutputSampleRates;
	NSMutableArray* _availableOutputDataRates;
	NSMutableArray* _applicableOutputSampleRatesForDataRate;
	NSMutableArray* _applicableOutputDataRatesForSampleRate;

}

@property (assign,nonatomic) float outputSampleRate; 
@property (assign,nonatomic) unsigned outputFormat; 
@property (assign,nonatomic) unsigned outputFormatFlags; 
@property (assign,nonatomic) unsigned outputBitsPerChannel; 
@property (assign,nonatomic) unsigned outputChannelCount; 
@property (assign,nonatomic) unsigned outputDataRate; 
-(void)setOutputFormat:(unsigned)arg1 ;
-(id)init;
-(float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2 ;
-(id)_fetchApplicableOutputDataRates;
-(unsigned)outputFormat;
-(unsigned)outputChannelCount;
-(unsigned)outputFormatFlags;
-(void)_bringUpToDate;
-(void)_buildApplicableDataRatesForSampleRates;
-(void)setOutputFormatFlags:(unsigned)arg1 ;
-(void)setOutputSampleRate:(float)arg1 ;
-(void)setOutputChannelCount:(unsigned)arg1 ;
-(void)_buildAudioConverter;
-(float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2 ;
-(void)_buildAvailableSampleRates;
-(void)setOutputDataRate:(unsigned)arg1 ;
-(unsigned)availableOutputChannelCountForDesiredChannelCount:(unsigned)arg1 rounding:(long long)arg2 ;
-(void)setOutputBitsPerChannel:(unsigned)arg1 ;
-(float)outputSampleRate;
-(unsigned)outputBitsPerChannel;
-(void)setInputPropertiesFromASBD:(AudioStreamBasicDescription)arg1 ;
-(void)dealloc;
-(unsigned)outputDataRate;
@end

