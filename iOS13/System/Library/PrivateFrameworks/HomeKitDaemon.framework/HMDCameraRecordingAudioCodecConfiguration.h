/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingAudioCodec, HMDCameraRecordingAudioCodecParameters;

@interface HMDCameraRecordingAudioCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingAudioCodec* _codec;
	HMDCameraRecordingAudioCodecParameters* _parameters;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDCameraRecordingAudioCodecParameters *)parameters;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDCameraRecordingAudioCodec *)codec;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(id)initWithAudioCodec:(id)arg1 codecParameters:(id)arg2 ;
@end

