/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSString;

@interface VCHardwareOperatingModeSettings : NSObject {

	unsigned _usageMode;
	BOOL _supportVCPDecoderHEVC;
	BOOL _supportVCPEncoderHEVC;
	BOOL _vcpInitializedForHEVC;
	NSString* _featureListStringHEVC;
	NSString* _featureListStringH264;
	unsigned _tilesPerVideoFrame;

}

@property (nonatomic,readonly) unsigned usageMode;                            //@synthesize usageMode=_usageMode - In the implementation block
@property (nonatomic,readonly) BOOL supportVCPDecoderHEVC;                    //@synthesize supportVCPDecoderHEVC=_supportVCPDecoderHEVC - In the implementation block
@property (nonatomic,readonly) BOOL supportVCPEncoderHEVC;                    //@synthesize supportVCPEncoderHEVC=_supportVCPEncoderHEVC - In the implementation block
@property (nonatomic,readonly) BOOL vcpInitializedForHEVC;                    //@synthesize vcpInitializedForHEVC=_vcpInitializedForHEVC - In the implementation block
@property (nonatomic,readonly) NSString * featureListStringHEVC;              //@synthesize featureListStringHEVC=_featureListStringHEVC - In the implementation block
@property (nonatomic,readonly) NSString * featureListStringH264;              //@synthesize featureListStringH264=_featureListStringH264 - In the implementation block
@property (nonatomic,readonly) unsigned tilesPerVideoFrame;                   //@synthesize tilesPerVideoFrame=_tilesPerVideoFrame - In the implementation block
+(unsigned)encoderUsageTypeWithOperatingMode:(int)arg1 ;
-(void)dealloc;
-(id)initWithMode:(int)arg1 ;
-(BOOL)vcpSupportsHEVCEncoder;
-(unsigned)tilesPerVideoFrame;
-(void)featureListString;
-(BOOL)vcpSupportsHEVCDecoder;
-(unsigned)numTilesPerVideoFrame;
-(void)vcpCodecGetPropertiesForID:(int)arg1 block:(/*^block*/id)arg2 ;
-(unsigned)usageMode;
-(BOOL)supportVCPDecoderHEVC;
-(BOOL)supportVCPEncoderHEVC;
-(BOOL)vcpInitializedForHEVC;
-(NSString *)featureListStringHEVC;
-(NSString *)featureListStringH264;
@end

