/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSMutableDictionary, NSMutableSet, NSSet;

@interface VCHardwareSettings : NSObject {

	int _supportHEVC;
	BOOL _supportVCPEncoderInitialized;
	BOOL _supportVCPEncoder;
	NSMutableDictionary* _hardwareUsageModeSettings;
	NSMutableSet* _pixelFormatCollections;

}

@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) BOOL isVideoRenderingSupported; 
@property (nonatomic,readonly) NSSet * pixelFormatCollections;              //@synthesize pixelFormatCollections=_pixelFormatCollections - In the implementation block
+(long long)deviceClass;
+(unsigned)maxRemoteParticipants30fps;
+(unsigned)builtinMicCount;
-(id)init;
-(void)dealloc;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(unsigned)maxNetworkBitrateMultiwayAudioOnWifi:(BOOL)arg1 ;
-(BOOL)isHEVCEncodeSupported:(int)arg1 ;
-(BOOL)isHEVCDecodeSupported:(int)arg1 ;
-(unsigned)tilesPerVideoFrame:(int)arg1 hdrMode:(unsigned long long)arg2 ;
-(unsigned)tilesPerVideoFrame:(int)arg1 ;
-(BOOL)isVideoRenderingSupported;
-(NSSet *)pixelFormatCollections;
-(id)featureListStringForH264:(int)arg1 ;
-(id)featureListStringForHEVC:(int)arg1 ;
-(BOOL)storeHardwareSettingsForAllOperatingModes;
-(unsigned)maxNetworkBitrateMultiwayVideoOnWifi:(BOOL)arg1 ;
@end

