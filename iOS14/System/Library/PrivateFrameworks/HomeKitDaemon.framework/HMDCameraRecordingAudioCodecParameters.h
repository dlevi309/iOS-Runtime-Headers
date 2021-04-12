/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDCameraRecordingAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _audioChannelCount;
	NSArray* _bitRateModes;
	NSArray* _audioSampleRates;
	NSNumber* _maxAudioBitRate;

}

@property (nonatomic,copy,readonly) NSNumber * audioChannelCount;              //@synthesize audioChannelCount=_audioChannelCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * bitRateModes;                    //@synthesize bitRateModes=_bitRateModes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSampleRates;                //@synthesize audioSampleRates=_audioSampleRates - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * maxAudioBitRate;                //@synthesize maxAudioBitRate=_maxAudioBitRate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)audioChannelCount;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSArray *)audioSampleRates;
-(NSArray *)bitRateModes;
-(id)initWithChannelCount:(id)arg1 bitRateModes:(id)arg2 audioSampleRates:(id)arg3 maxAudioBitRate:(id)arg4 ;
-(NSNumber *)maxAudioBitRate;
@end

