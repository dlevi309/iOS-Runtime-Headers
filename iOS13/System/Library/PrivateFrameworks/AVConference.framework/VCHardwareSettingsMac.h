/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCHardwareSettings.h>
#import <libobjc.A.dylib/VCHardwareSettingsMacProtocol.h>

@class NSString;

@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol> {

	BOOL _hiDefEncoding;
	int _hardwareScore;
	int _numProcessors;
	int _mhrtz;
	int _isG5;
	int _machineType;
	int _cpuFamily;
	NSString* _cpuType;
	NSString* _machineName;
	BOOL _isGVAEncoderAvailableInitialized;
	BOOL _isGVAEncoderAvailable;

}

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
+(id)sharedInstance;
+(long long)deviceClass;
-(id)init;
-(void)dealloc;
-(NSString *)machineName;
-(BOOL)canDoHiDefEncoding;
-(int)_getCPUFamilyType;
-(id)_getCPUTypeStringForMachineType:(int)arg1 ;
-(BOOL)isGVAEncoderAvailable;
-(BOOL)_isModel:(id)arg1 ;
-(BOOL)_isMachineNewerThanSandybridge:(int)arg1 ;
-(BOOL)isMacBookWVGA;
-(BOOL)isMacPro;
-(BOOL)isIMac;
-(unsigned)hwEncoderExitBitrate;
-(unsigned)hwEncoderEnterBitrate;
-(int)hardwareScore;
-(BOOL)canDoHiDefDecoding;
-(BOOL)canDoHEVC;
-(BOOL)useSoftFramerateSwitching;
-(unsigned)maxActiveVideoEncoders;
-(unsigned)maxActiveVideoDecoders;
-(BOOL)isDeviceLargeScreen;
-(BOOL)supportsHEIFEncoding;
@end

