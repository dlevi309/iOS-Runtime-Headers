/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingVideoCodec, HMDCameraRecordingVideoCodecParameters, NSArray;

@interface HMDCameraRecordingVideoCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingVideoCodec* _codec;
	HMDCameraRecordingVideoCodecParameters* _parameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodec * codec;                             //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingVideoCodecParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                                        //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDCameraRecordingVideoCodecParameters *)parameters;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDCameraRecordingVideoCodec *)codec;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(NSArray *)videoAttributes;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 videoAttributes:(id)arg3 ;
@end

