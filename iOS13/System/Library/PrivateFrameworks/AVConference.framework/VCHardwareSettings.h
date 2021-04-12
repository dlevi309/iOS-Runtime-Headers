/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary;

@interface VCHardwareSettings : NSObject {

	int _supportHEVC;
	BOOL _supportVCPEncoderInitialized;
	BOOL _supportVCPEncoder;
	NSMutableDictionary* _hardwareUsageModeSettings;

}

@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
+(long long)deviceClass;
-(id)init;
-(void)dealloc;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(unsigned)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1 ;
-(BOOL)isHEVCEncodeSupported:(int)arg1 ;
-(unsigned)tilesPerVideoFrame:(int)arg1 ;
-(id)featureListStringForH264:(int)arg1 ;
-(id)featureListStringForHEVC:(int)arg1 ;
-(BOOL)isHEVCDecodeSupported:(int)arg1 ;
-(BOOL)storeHardwareSettingsForAllOperatingModes;
-(unsigned)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1 ;
@end

