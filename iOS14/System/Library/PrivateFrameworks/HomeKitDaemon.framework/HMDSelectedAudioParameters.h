/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters, HMDSelectedRTPParameters, NSNumber;

@interface HMDSelectedAudioParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDAudioCodecGroup* _codecGroup;
	HMDAudioCodecParameters* _codecParameters;
	HMDSelectedRTPParameters* _rtpParameters;
	NSNumber* _comfortNoiseEnabled;

}

@property (nonatomic,copy,readonly) HMDAudioCodecGroup * codecGroup;                        //@synthesize codecGroup=_codecGroup - In the implementation block
@property (nonatomic,copy,readonly) HMDAudioCodecParameters * codecParameters;              //@synthesize codecParameters=_codecParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedRTPParameters * rtpParameters;               //@synthesize rtpParameters=_rtpParameters - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * comfortNoiseEnabled;                         //@synthesize comfortNoiseEnabled=_comfortNoiseEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(HMDAudioCodecParameters *)codecParameters;
-(HMDAudioCodecGroup *)codecGroup;
-(HMDSelectedRTPParameters *)rtpParameters;
-(NSNumber *)comfortNoiseEnabled;
-(id)initWithCodecGroup:(id)arg1 codecParameter:(id)arg2 rtpParameter:(id)arg3 comfortNoiseEnabled:(id)arg4 ;
@end

