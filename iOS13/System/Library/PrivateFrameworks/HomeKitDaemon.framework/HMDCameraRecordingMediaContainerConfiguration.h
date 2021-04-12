/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDTLVBase.h>
#import <libobjc.A.dylib/HMDTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDCameraRecordingMediaContainer, HMDCameraRecordingMediaContainerParameters;

@interface HMDCameraRecordingMediaContainerConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {

	HMDCameraRecordingMediaContainer* _container;
	HMDCameraRecordingMediaContainerParameters* _parameters;

}

@property (nonatomic,copy,readonly) HMDCameraRecordingMediaContainer * container;                         //@synthesize container=_container - In the implementation block
@property (nonatomic,copy,readonly) HMDCameraRecordingMediaContainerParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(HMDCameraRecordingMediaContainer *)container;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDCameraRecordingMediaContainerParameters *)parameters;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(id)initWithMediaContainer:(id)arg1 containerParameters:(id)arg2 ;
@end

