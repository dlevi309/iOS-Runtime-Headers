/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration, HMDCameraRecordingAudioCodecConfiguration;

@interface HMDCameraRecordingSelectedConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingGeneralConfiguration* _generalConfiguration;
	HMDCameraRecordingVideoCodecConfiguration* _videoConfiguration;
	HMDCameraRecordingAudioCodecConfiguration* _audioConfiguration;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingGeneralConfiguration * generalConfiguration;               //@synthesize generalConfiguration=_generalConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecConfiguration * videoConfiguration;              //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodecConfiguration * audioConfiguration;              //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDCameraRecordingAudioCodecConfiguration *)audioConfiguration;
-(HMDCameraRecordingVideoCodecConfiguration *)videoConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(HMDCameraRecordingGeneralConfiguration *)generalConfiguration;
-(id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3 ;
@end

