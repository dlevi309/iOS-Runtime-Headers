/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray;

@interface HMDCameraRecordingVideoCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingVideoCodec* _codec;
	HMDCameraRecordingVideoCodecParameters* _parameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                                        //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingVideoCodec *)codec;
-(HMDCameraRecordingVideoCodecParameters *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSArray *)videoAttributes;
-(BOOL)_parseFromTLVData;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3 ;
@end

