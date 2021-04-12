/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingGeneralConfiguration, HMDCameraRecordingVideoCodecConfiguration, HMDCameraRecordingAudioCodecConfiguration;

@interface HMDCameraRecordingSelectedConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingGeneralConfiguration* _generalConfiguration;
	HMDCameraRecordingVideoCodecConfiguration* _videoConfiguration;
	HMDCameraRecordingAudioCodecConfiguration* _audioConfiguration;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingGeneralConfiguration * generalConfiguration;               //@synthesize generalConfiguration=_generalConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecConfiguration * videoConfiguration;              //@synthesize videoConfiguration=_videoConfiguration - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingAudioCodecConfiguration * audioConfiguration;              //@synthesize audioConfiguration=_audioConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDCameraRecordingAudioCodecConfiguration *)audioConfiguration;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDCameraRecordingGeneralConfiguration *)generalConfiguration;
-(HMDCameraRecordingVideoCodecConfiguration *)videoConfiguration;
-(id)initWithGeneralConfiguration:(id)arg1 videoCodecConfiguration:(id)arg2 audioCodecConfiguration:(id)arg3 ;
@end

