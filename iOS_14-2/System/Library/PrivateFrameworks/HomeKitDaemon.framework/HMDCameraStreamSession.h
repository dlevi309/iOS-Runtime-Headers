/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCameraStreamSessionID, HMDStreamingManager, HMDStreamingCapabilities, HMDCameraProtocolParameters, HMDCameraVideoTierParameters, NSString;

@interface HMDCameraStreamSession : HMFObject <HMFLogging> {

	HMDCameraStreamSessionID* _sessionID;
	HMDStreamingManager* _streamingManager;
	HMDStreamingCapabilities* _streamingCapabilities;
	HMDCameraProtocolParameters* _protocolParameters;
	HMDCameraVideoTierParameters* _videoTierParameters;

}

@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDStreamingManager * streamingManager;                          //@synthesize streamingManager=_streamingManager - In the implementation block
@property (nonatomic,readonly) HMDStreamingCapabilities * streamingCapabilities;              //@synthesize streamingCapabilities=_streamingCapabilities - In the implementation block
@property (nonatomic,retain) HMDCameraProtocolParameters * protocolParameters;                //@synthesize protocolParameters=_protocolParameters - In the implementation block
@property (nonatomic,retain) HMDCameraVideoTierParameters * videoTierParameters;              //@synthesize videoTierParameters=_videoTierParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDCameraStreamSessionID *)sessionID;
-(id)logIdentifier;
-(HMDStreamingCapabilities *)streamingCapabilities;
-(HMDStreamingManager *)streamingManager;
-(void)setProtocolParameters:(HMDCameraProtocolParameters *)arg1 ;
-(HMDCameraVideoTierParameters *)videoTierParameters;
-(id)negotiatedParameters;
-(HMDCameraProtocolParameters *)protocolParameters;
-(void)setStreamingManager:(HMDStreamingManager *)arg1 ;
-(id)initWithSessionID:(id)arg1 streamingTierType:(unsigned long long)arg2 remoteCapabilities:(id)arg3 streamPreference:(id)arg4 ;
-(void)setVideoTierParameters:(HMDCameraVideoTierParameters *)arg1 ;
@end

