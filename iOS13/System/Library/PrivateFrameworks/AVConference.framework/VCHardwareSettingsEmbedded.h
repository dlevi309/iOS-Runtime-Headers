/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsEmbeddedProtocol.h>

@class NSString;

@interface VCHardwareSettingsEmbedded : VCHardwareSettings <VCHardwareSettingsEmbeddedProtocol> {

	NSString* _deviceName;
	int _screenWidth;
	int _screenHeight;
	int _deviceClass;
	long long _chipId;
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
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
+(id)sharedInstance;
+(long long)deviceClass;
-(id)init;
-(void)dealloc;
-(NSString *)deviceName;
-(long long)deviceClass;
-(int)screenHeight;
-(int)screenWidth;
-(long long)chipId;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxActiveVideoEncoders;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)isDeviceLargeScreen;
-(BOOL)supportsHEIFEncoding;
-(BOOL)hasBaseband;
-(void)_initializeScreenDimension;
-(long long)videoEncoderType;
-(BOOL)hasAppleNeuralEngine;
-(BOOL)isSecondDisplaySupportEnabled;
-(unsigned)audioPacketLossConcealmentAlgorithmAACELD;
@end

