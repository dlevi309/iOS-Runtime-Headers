/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters;

@interface HMDAudioCodecConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDAudioCodecGroup* _codecGroup;
	HMDAudioCodecParameters* _audioCodecParameters;

}

@property (nonatomic,copy,readonly) HMDAudioCodecGroup * codecGroup;                             //@synthesize codecGroup=_codecGroup - In the implementation block
@property (nonatomic,copy,readonly) HMDAudioCodecParameters * audioCodecParameters;              //@synthesize audioCodecParameters=_audioCodecParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(HMDAudioCodecGroup *)codecGroup;
-(HMDAudioCodecParameters *)audioCodecParameters;
-(id)initWithAudioCodecGroup:(id)arg1 codecParameter:(id)arg2 ;
@end

