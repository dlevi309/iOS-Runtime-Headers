/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCHardwareSettingsEmbeddedProtocol <NSObject>
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) unsigned maxDisplayRefreshRate; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) unsigned maxMultiwayFramerateSupported; 
@property (nonatomic,readonly) BOOL supportsMultiway720pStream; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL hasAppleNeuralEngine; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@property (nonatomic,readonly) BOOL isSecondDisplaySupportEnabled; 
@property (nonatomic,readonly) BOOL isPixelFormatAvailable; 
@property (nonatomic,readonly) BOOL isHEVC444DecodeSupported; 
@required
-(BOOL)supportsHEIFEncoding;
-(unsigned)maxActiveVideoDecoders;
-(long long)deviceClass;
-(long long)chipId;
-(unsigned)maxActiveVideoEncoders;
-(int)screenWidth;
-(int)screenHeight;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxDisplayRefreshRate;
-(unsigned)maxMultiwayFramerateSupported;
-(BOOL)supportsMultiway720pStream;
-(BOOL)isDeviceLargeScreen;
-(BOOL)isPixelFormatAvailable;
-(BOOL)hasAppleNeuralEngine;
-(BOOL)isSecondDisplaySupportEnabled;
-(BOOL)isHEVC444DecodeSupported;
-(long long)videoEncoderType;

@end

