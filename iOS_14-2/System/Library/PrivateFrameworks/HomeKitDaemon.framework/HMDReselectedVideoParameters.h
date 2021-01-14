/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoAttributes, HMDReselectedRTPParameters;

@interface HMDReselectedVideoParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDVideoAttributes* _videoAttributes;
	HMDReselectedRTPParameters* _rtpParameters;

}

@property (nonatomic,copy,readonly) HMDVideoAttributes * videoAttributes;                    //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,copy,readonly) HMDReselectedRTPParameters * rtpParameters;              //@synthesize rtpParameters=_rtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDVideoAttributes *)videoAttributes;
-(BOOL)_parseFromTLVData;
-(HMDReselectedRTPParameters *)rtpParameters;
-(id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2 ;
@end

