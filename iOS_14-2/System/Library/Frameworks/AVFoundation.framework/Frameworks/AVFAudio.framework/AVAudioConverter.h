/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSString, NSArray, AVAudioFormat, NSData;

@interface AVAudioConverter : NSObject {

	void* _impl;

}

@property (assign,nonatomic) long long bitRate; 
@property (nonatomic,retain) NSString * bitRateStrategy; 
@property (nonatomic,readonly) long long maximumOutputPacketSize; 
@property (nonatomic,readonly) NSArray * availableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeBitRates; 
@property (nonatomic,readonly) NSArray * availableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * applicableEncodeSampleRates; 
@property (nonatomic,readonly) NSArray * availableEncodeChannelLayoutTags; 
@property (nonatomic,readonly) AVAudioFormat * inputFormat; 
@property (nonatomic,readonly) AVAudioFormat * outputFormat; 
@property (nonatomic,retain) NSArray * channelMap; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (assign,nonatomic) BOOL downmix; 
@property (assign,nonatomic) BOOL dither; 
@property (assign,nonatomic) long long sampleRateConverterQuality; 
@property (nonatomic,retain) NSString * sampleRateConverterAlgorithm; 
@property (assign,nonatomic) long long primeMethod; 
@property (assign,nonatomic) AVAudioConverterPrimeInfo primeInfo; 
-(AVAudioFormat *)outputFormat;
-(AVAudioFormat *)inputFormat;
-(BOOL)dither;
-(long long)convertToBuffer:(id)arg1 error:(id*)arg2 withInputFromBlock:(/*^block*/id)arg3 ;
-(id)initFromFormat:(id)arg1 toFormat:(id)arg2 ;
-(void)setDither:(BOOL)arg1 ;
-(void)setMagicCookie:(NSData *)arg1 ;
-(BOOL)downmix;
-(long long)bitRate;
-(void)reset;
-(void)setDownmix:(BOOL)arg1 ;
-(NSArray *)channelMap;
-(long long)primeMethod;
-(long long)sampleRateConverterQuality;
-(void)setSampleRateConverterQuality:(long long)arg1 ;
-(NSString *)sampleRateConverterAlgorithm;
-(void)setSampleRateConverterAlgorithm:(NSString *)arg1 ;
-(void)setChannelMap:(NSArray *)arg1 ;
-(long long)maximumOutputPacketSize;
-(void)setPrimeMethod:(long long)arg1 ;
-(void)setPrimeInfo:(AVAudioConverterPrimeInfo)arg1 ;
-(BOOL)convertToBuffer:(id)arg1 fromBuffer:(id)arg2 error:(id*)arg3 ;
-(void)setBitRate:(long long)arg1 ;
-(NSString *)bitRateStrategy;
-(void)setBitRateStrategy:(NSString *)arg1 ;
-(NSArray *)availableEncodeBitRates;
-(NSArray *)applicableEncodeBitRates;
-(NSArray *)availableEncodeSampleRates;
-(NSArray *)applicableEncodeSampleRates;
-(NSArray *)availableEncodeChannelLayoutTags;
-(AVAudioConverterPrimeInfo)primeInfo;
-(void)dealloc;
-(NSData *)magicCookie;
@end

