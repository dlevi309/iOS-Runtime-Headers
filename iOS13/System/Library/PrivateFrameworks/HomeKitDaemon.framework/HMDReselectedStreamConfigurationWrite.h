/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDSessionControl, HMDReselectedVideoParameters;

@interface HMDReselectedStreamConfigurationWrite : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDSessionControl* _sessionControl;
	HMDReselectedVideoParameters* _videoParameters;

}

@property (nonatomic,copy,readonly) HMDSessionControl * sessionControl;                          //@synthesize sessionControl=_sessionControl - In the implementation block
@property (nonatomic,copy,readonly) HMDReselectedVideoParameters * videoParameters;              //@synthesize videoParameters=_videoParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(HMDSessionControl *)sessionControl;
-(HMDReselectedVideoParameters *)videoParameters;
-(id)initWithSessionControl:(id)arg1 ;
-(id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 ;
@end

