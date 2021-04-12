/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDCameraRecordingAudioCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

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
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)audioChannelCount;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSArray *)audioSampleRates;
-(NSArray *)bitRateModes;
-(id)initWithChannelCount:(id)arg1 bitRateModes:(id)arg2 audioSampleRates:(id)arg3 maxAudioBitRate:(id)arg4 ;
-(NSNumber *)maxAudioBitRate;
@end

