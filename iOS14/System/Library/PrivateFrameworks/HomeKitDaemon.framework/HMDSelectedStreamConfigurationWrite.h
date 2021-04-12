/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDSessionControl, HMDSelectedVideoParameters, HMDSelectedAudioParameters;

@interface HMDSelectedStreamConfigurationWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDSessionControl* _sessionControl;
	HMDSelectedVideoParameters* _videoParameters;
	HMDSelectedAudioParameters* _audioParameters;

}

@property (nonatomic,copy,readonly) HMDSessionControl * sessionControl;                        //@synthesize sessionControl=_sessionControl - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedVideoParameters * videoParameters;              //@synthesize videoParameters=_videoParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedAudioParameters * audioParameters;              //@synthesize audioParameters=_audioParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDSelectedAudioParameters *)audioParameters;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(HMDSessionControl *)sessionControl;
-(HMDSelectedVideoParameters *)videoParameters;
-(id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 audioParameters:(id)arg3 ;
-(id)initWithSessionControl:(id)arg1 ;
@end

