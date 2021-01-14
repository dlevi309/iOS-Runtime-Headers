/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingAudioCodec, HMDCameraRecordingAudioCodecParameters;

@interface HMDCameraRecordingAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingAudioCodec* _codec;
	HMDCameraRecordingAudioCodecParameters* _parameters;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingAudioCodec *)codec;
-(HMDCameraRecordingAudioCodecParameters *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(id)initWithAudioCodec:(id)arg1 codecParameters:(id)arg2 ;
@end

