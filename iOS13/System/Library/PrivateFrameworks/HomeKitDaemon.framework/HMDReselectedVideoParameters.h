/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDVideoAttributes, HMDReselectedRTPParameters;

@interface HMDReselectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDVideoAttributes* _videoAttributes;
	HMDReselectedRTPParameters* _rtpParameters;

}

@property (nonatomic,copy,readonly) HMDVideoAttributes * videoAttributes;                    //@synthesize videoAttributes=_videoAttributes - In the implementation block
@property (nonatomic,copy,readonly) HMDReselectedRTPParameters * rtpParameters;              //@synthesize rtpParameters=_rtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDVideoAttributes *)videoAttributes;
-(HMDReselectedRTPParameters *)rtpParameters;
-(id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2 ;
@end

