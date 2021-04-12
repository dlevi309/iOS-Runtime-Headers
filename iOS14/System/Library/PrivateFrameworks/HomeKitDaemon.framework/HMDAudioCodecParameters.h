/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSArray;

@interface HMDAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSNumber* _audioChannelCount;
	NSArray* _bitRateSettings;
	NSArray* _audioSampleRates;
	NSNumber* _rtpPtime;

}

@property (nonatomic,copy,readonly) NSNumber * audioChannelCount;              //@synthesize audioChannelCount=_audioChannelCount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * bitRateSettings;                 //@synthesize bitRateSettings=_bitRateSettings - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioSampleRates;                //@synthesize audioSampleRates=_audioSampleRates - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rtpPtime;                       //@synthesize rtpPtime=_rtpPtime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)audioChannelCount;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(NSArray *)bitRateSettings;
-(NSArray *)audioSampleRates;
-(NSNumber *)rtpPtime;
-(id)initWithChannelCount:(id)arg1 bitRateSetting:(id)arg2 audioSampleRate:(id)arg3 rtpPtime:(id)arg4 ;
@end

