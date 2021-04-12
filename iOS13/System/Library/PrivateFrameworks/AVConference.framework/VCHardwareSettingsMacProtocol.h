/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class NSString;


@protocol VCHardwareSettingsMacProtocol
@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) NSString * machineName; 
@property (nonatomic,readonly) int hardwareScore; 
@property (nonatomic,readonly) BOOL canDoHiDefEncoding; 
@property (nonatomic,readonly) BOOL canDoHiDefDecoding; 
@property (nonatomic,readonly) BOOL canDoHEVC; 
@property (nonatomic,readonly) BOOL isMacBookWVGA; 
@property (nonatomic,readonly) BOOL isMacPro; 
@property (nonatomic,readonly) BOOL isIMac; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) unsigned hwEncoderExitBitrate; 
@property (nonatomic,readonly) unsigned hwEncoderEnterBitrate; 
@property (nonatomic,readonly) unsigned maxActiveVideoEncoders; 
@property (nonatomic,readonly) unsigned maxActiveVideoDecoders; 
@property (nonatomic,readonly) BOOL isDeviceLargeScreen; 
@property (nonatomic,readonly) BOOL supportsHEIFEncoding; 
@required
-(NSString *)machineName;
-(BOOL)canDoHiDefEncoding;
-(BOOL)isMacBookWVGA;
-(BOOL)isMacPro;
-(BOOL)isIMac;
-(unsigned)hwEncoderExitBitrate;
-(unsigned)hwEncoderEnterBitrate;
-(BOOL)supportHEVC;
-(BOOL)vcpSupportsHEVCEncoder;
-(int)hardwareScore;
-(BOOL)canDoHiDefDecoding;
-(BOOL)canDoHEVC;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxActiveVideoEncoders;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)isDeviceLargeScreen;
-(BOOL)supportsHEIFEncoding;

@end

