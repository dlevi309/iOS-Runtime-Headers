/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters;

@interface HMDAudioCodecConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDAudioCodecGroup* _codecGroup;
	HMDAudioCodecParameters* _audioCodecParameters;

}

@property (nonatomic,copy,readonly) HMDAudioCodecGroup * codecGroup;                             //@synthesize codecGroup=_codecGroup - In the implementation block
@property (nonatomic,copy,readonly) HMDAudioCodecParameters * audioCodecParameters;              //@synthesize audioCodecParameters=_audioCodecParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDAudioCodecGroup *)codecGroup;
-(HMDAudioCodecParameters *)audioCodecParameters;
-(id)initWithAudioCodecGroup:(id)arg1 codecParameter:(id)arg2 ;
@end

