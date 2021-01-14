/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsMacProtocol.h>

@class NSString;

@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol> {

	BOOL _hiDefEncoding;
	BOOL _isGVAEncoderAvailableInitialized;
	BOOL _isGVAEncoderAvailable;
	int _machineType;
	int _cpuFamily;
	int _numProcessors;
	int _mhrtz;
	int _isG5;
	int _hardwareScore;
	NSString* _cpuType;
	NSString* _machineName;

}

@property (nonatomic,readonly) BOOL supportHEVC; 
@property (nonatomic,readonly) BOOL vcpSupportsHEVCEncoder; 
@property (nonatomic,readonly) NSString * machineName; 
@property (nonatomic,readonly) int hardwareScore; 
@property (nonatomic,readonly) BOOL canDoHiDefEncoding; 
@property (nonatomic,readonly) BOOL canDoHiDefDecoding; 
@property (nonatomic,readonly) BOOL supports1080pEncoding; 
@property (nonatomic,readonly) BOOL supports1080pDecoding; 
@property (nonatomic,readonly) BOOL canDoHEVC; 
@property (nonatomic,readonly) BOOL isMacBookWVGA; 
@property (nonatomic,readonly) BOOL isMacPro; 
@property (nonatomic,readonly) BOOL isIMac; 
@property (nonatomic,readonly) BOOL useSoftFramerateSwitching; 
@property (nonatomic,readonly) unsigned hwEncoderExitBitrate; 
@property (nonatomic,readonly) unsigned hwEncoderEnterBitrate; 
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
-(BOOL)supportsHEIFEncoding;
-(unsigned)maxActiveVideoDecoders;
-(id)init;
-(BOOL)isIMac;
-(unsigned)maxActiveVideoEncoders;
-(NSString *)machineName;
-(void)dealloc;
-(BOOL)canDoHiDefEncoding;
-(int)_getCPUFamilyType;
-(id)_getCPUTypeStringForMachineType:(int)arg1 ;
-(void)addPixelFormat;
-(BOOL)isGVAEncoderAvailable;
-(BOOL)_isModel:(id)arg1 ;
-(BOOL)_isMachineNewerThanSandybridge:(int)arg1 ;
-(BOOL)isMacBookWVGA;
-(BOOL)isMacPro;
-(BOOL)isIMacPro;
-(unsigned)hwEncoderExitBitrate;
-(unsigned)hwEncoderEnterBitrate;
-(int)hardwareScore;
-(BOOL)canDoHiDefDecoding;
-(BOOL)supports1080pEncoding;
-(BOOL)supports1080pDecoding;
-(BOOL)canDoHEVC;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxDisplayRefreshRate;
-(unsigned)maxMultiwayFramerateSupported;
-(BOOL)supportsMultiway720pStream;
-(BOOL)isDeviceLargeScreen;
-(BOOL)isPixelFormatAvailable;
-(unsigned)maxRemoteParticipants30fps;
@end

