/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoCodec, HMDVideoCodecParameters, NSArray;

@interface HMDVideoCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDVideoCodec* _videoCodec;
	HMDVideoCodecParameters* _codecParameters;
	NSArray* _videoAttributes;

}

@property (nonatomic,copy,readonly) HMDVideoCodec * videoCodec;                             //@synthesize videoCodec=_videoCodec - In the implementation block
@property (nonatomic,copy,readonly) HMDVideoCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * videoAttributes;                              //@synthesize videoAttributes=_videoAttributes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoCodec *)videoCodec;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDVideoCodecParameters *)codecParameters;
-(NSArray *)videoAttributes;
-(id)initWithCodec:(id)arg1 codecParameters:(id)arg2 attributes:(id)arg3 ;
@end

