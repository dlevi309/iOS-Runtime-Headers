/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDEndPointAddress, HMDSRTPParameters;

@interface HMDSetupEndPointWrite : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	NSUUID* _sessionID;
	HMDEndPointAddress* _address;
	HMDSRTPParameters* _videoSrtpParameters;
	HMDSRTPParameters* _audioSrtpParameters;

}

@property (nonatomic,copy,readonly) NSUUID * sessionID;                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy,readonly) HMDEndPointAddress * address;                         //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) HMDSRTPParameters * videoSrtpParameters;              //@synthesize videoSrtpParameters=_videoSrtpParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSRTPParameters * audioSrtpParameters;              //@synthesize audioSrtpParameters=_audioSrtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSUUID *)sessionID;
-(void)encodeWithCoder:(id)arg1 ;
-(HMDEndPointAddress *)address;
-(id)initWithCoder:(id)arg1 ;
-(id)tlvData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(BOOL)_parseFromTLVData;
-(HMDSRTPParameters *)videoSrtpParameters;
-(HMDSRTPParameters *)audioSrtpParameters;
-(BOOL)_parseFromTLVDataImpl;
-(id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 ;
-(BOOL)_parseFromTLVDataOnSuccess;
-(BOOL)_parseFromTLVDataOnFailure;
@end

