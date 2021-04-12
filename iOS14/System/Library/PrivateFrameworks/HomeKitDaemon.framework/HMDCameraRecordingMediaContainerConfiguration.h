/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters;

@interface HMDCameraRecordingMediaContainerConfiguration : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingMediaContainer* _container;
	HMDCameraRecordingMediaContainerParameters* _parameters;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingMediaContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingMediaContainerParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingMediaContainerParameters *)parameters;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDCameraRecordingMediaContainer *)container;
-(BOOL)_parseFromTLVData;
-(id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2 ;
@end

