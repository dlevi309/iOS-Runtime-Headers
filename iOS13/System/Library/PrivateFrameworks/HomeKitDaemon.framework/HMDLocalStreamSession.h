/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraStreamSession.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRemoteStreamSenderProtocol;
@class HMDCameraParameterSelection, HMDCameraNetworkConfig, NSString;

@interface HMDLocalStreamSession : HMDCameraStreamSession <HMFLogging> {

	id<HMDCameraRemoteStreamSenderProtocol> _streamSender;
	HMDCameraParameterSelection* _parameterSelection;
	unsigned long long _streamState;
	HMDCameraNetworkConfig* _localNetworkConfig;

}

@property (nonatomic,readonly) id<HMDCameraRemoteStreamSenderProtocol> streamSender;              //@synthesize streamSender=_streamSender - In the implementation block
@property (nonatomic,retain) HMDCameraParameterSelection * parameterSelection;                    //@synthesize parameterSelection=_parameterSelection - In the implementation block
@property (assign,nonatomic) unsigned long long streamState;                                      //@synthesize streamState=_streamState - In the implementation block
@property (nonatomic,readonly) HMDCameraNetworkConfig * localNetworkConfig;                       //@synthesize localNetworkConfig=_localNetworkConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(void)updateState:(long long)arg1 ;
-(id)logIdentifier;
-(id)stateAsString;
-(unsigned long long)streamState;
-(void)setStreamState:(unsigned long long)arg1 ;
-(HMDCameraNetworkConfig *)localNetworkConfig;
-(id<HMDCameraRemoteStreamSenderProtocol>)streamSender;
-(BOOL)containsState:(long long)arg1 ;
-(id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 remoteCapabilities:(id)arg4 localNetworkConfig:(id)arg5 streamPreference:(id)arg6 ;
-(HMDCameraParameterSelection *)parameterSelection;
-(void)setParameterSelection:(HMDCameraParameterSelection *)arg1 ;
@end

