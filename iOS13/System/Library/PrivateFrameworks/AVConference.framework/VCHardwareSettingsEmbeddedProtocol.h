/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCHardwareSettingsEmbeddedProtocol
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) int screenWidth; 
@property (nonatomic,readonly) int screenHeight; 
@property (nonatomic,readonly) long long deviceClass; 
@property (nonatomic,readonly) long long chipId; 
@property (nonatomic,readonly) long long videoEncoderType; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL hasAppleNeuralEngine; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@property (nonatomic,readonly) BOOL isSecondDisplaySupportEnabled; 
@required
-(long long)deviceClass;
-(int)screenHeight;
-(int)screenWidth;
-(long long)chipId;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxActiveVideoEncoders;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)isDeviceLargeScreen;
-(BOOL)supportsHEIFEncoding;
-(long long)videoEncoderType;
-(BOOL)hasAppleNeuralEngine;
-(BOOL)isSecondDisplaySupportEnabled;

@end

