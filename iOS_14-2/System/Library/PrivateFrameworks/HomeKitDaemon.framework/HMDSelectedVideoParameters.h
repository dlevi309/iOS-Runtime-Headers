/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoCodec, HMDVideoCodecParameters, HMDVideoAttributes, HMDSelectedRTPParameters;

@interface HMDSelectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDVideoCodec* _codec;
	HMDVideoCodecParameters* _codecParameters;
	HMDVideoAttributes* _videoAttributes;
	HMDSelectedRTPParameters* _rtpParameters;

}

@property (nonatomic,copy,readonly) HMDVideoCodec * codec;                                  //@synthesize codec=_codec - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoAttributes * videoAttributes;                   //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedRTPParameters * rtpParameters;               //@synthesize rtpParameters=_rtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDVideoCodec *)codec;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoAttributes *)videoAttributes;
-(BOOL)_parseFromTLVData;
-(HMDVideoCodecParameters *)codecParameters;
-(HMDSelectedRTPParameters *)rtpParameters;
-(id)initWithCodec:(id)arg1 codecParameter:(id)arg2 attribute:(id)arg3 rtpParameter:(id)arg4 ;
@end

