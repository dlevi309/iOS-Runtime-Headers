/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsEmbeddedProtocol.h>

@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {

	NSString* _deviceName;
	long long _chipId;
	int _deviceClass;
	int _screenWidth;
	int _screenHeight;
	long long _videoEncoderType;
	BOOL _hasBasebandInitialized;
	BOOL _hasBaseband;
	BOOL _hasAppleNeuralEngine;

}

@property (nonatomic,readonly) NSString * deviceName; 
@property (nonatomic,readonly) BOOL hasBaseband; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) BOOL hasAppleNeuralEngine; 
@property (nonatomic,readonly) unsigned audioPacketLossConcealmentAlgorithmAACELD; 
@property (nonatomic,readonly) BOOL isSecondDisplaySupportEnabled; 
@property (nonatomic,readonly) BOOL canDo1080p; 
@property (nonatomic,readonly) BOOL isHEVC444DecodeSupported; 
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) unsigned maxDisplayRefreshRate; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) unsigned maxMultiwayFramerateSupported; 
@property (nonatomic,readonly) BOOL supportsMultiway720pStream; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@property (nonatomic,readonly) BOOL isPixelFormatAvailable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(long long)deviceClass;
-(NSString *)deviceName;
-(BOOL)supportsHEIFEncoding;
-(unsigned)maxActiveVideoDecoders;
-(id)init;
-(long long)deviceClass;
-(long long)chipId;
-(unsigned)maxActiveVideoEncoders;
-(int)screenWidth;
-(int)screenHeight;
-(BOOL)hasBaseband;
-(void)dealloc;
-(void)addPixelFormat;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxDisplayRefreshRate;
-(unsigned)maxMultiwayFramerateSupported;
-(BOOL)supportsMultiway720pStream;
-(BOOL)isDeviceLargeScreen;
-(BOOL)isPixelFormatAvailable;
-(unsigned)maxRemoteParticipants30fps;
-(BOOL)hasAppleNeuralEngine;
-(void)_initializeScreenDimension;
-(BOOL)isSecondDisplaySupportEnabled;
-(BOOL)isHEVC444DecodeSupported;
-(long long)videoEncoderType;
-(unsigned)audioPacketLossConcealmentAlgorithmAACELD;
-(BOOL)canDo1080p;
@end

