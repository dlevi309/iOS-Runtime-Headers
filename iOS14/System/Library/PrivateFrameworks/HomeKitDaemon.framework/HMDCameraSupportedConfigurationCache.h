/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class HMDSupportedVideoStreamConfiguration, HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject {

	HMDSupportedVideoStreamConfiguration* _supportedVideoStreamConfiguration;
	HMDSupportedAudioStreamConfiguration* _supportedAudioStreamConfiguration;
	HMDSupportedRTPConfiguration* _supportedRTPConfiguration;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,retain) HMDSupportedVideoStreamConfiguration * supportedVideoStreamConfiguration;              //@synthesize supportedVideoStreamConfiguration=_supportedVideoStreamConfiguration - In the implementation block
@property (nonatomic,retain) HMDSupportedAudioStreamConfiguration * supportedAudioStreamConfiguration;              //@synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration - In the implementation block
@property (nonatomic,retain) HMDSupportedRTPConfiguration * supportedRTPConfiguration;                              //@synthesize supportedRTPConfiguration=_supportedRTPConfiguration - In the implementation block
-(BOOL)isValid;
-(HMDSupportedAudioStreamConfiguration *)supportedAudioStreamConfiguration;
-(HMDSupportedVideoStreamConfiguration *)supportedVideoStreamConfiguration;
-(void)setSupportedVideoStreamConfiguration:(HMDSupportedVideoStreamConfiguration *)arg1 ;
-(void)setSupportedAudioStreamConfiguration:(HMDSupportedAudioStreamConfiguration *)arg1 ;
-(HMDSupportedRTPConfiguration *)supportedRTPConfiguration;
-(void)setSupportedRTPConfiguration:(HMDSupportedRTPConfiguration *)arg1 ;
@end

