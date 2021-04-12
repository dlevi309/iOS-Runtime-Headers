/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDCameraStreamSession.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraRemoteStreamSenderProtocol, HMDCameraRemoteStreamReceiverProtocol;
@class NSString;

@interface HMDRemoteStreamSession : HMDCameraStreamSession <HMFLogging> {

	id<HMDCameraRemoteStreamSenderProtocol> _streamSender;
	id<HMDCameraRemoteStreamReceiverProtocol> _streamReceiver;
	unsigned long long _streamState;

}

@property (nonatomic,readonly) id<HMDCameraRemoteStreamSenderProtocol> streamSender;                  //@synthesize streamSender=_streamSender - In the implementation block
@property (nonatomic,readonly) id<HMDCameraRemoteStreamReceiverProtocol> streamReceiver;              //@synthesize streamReceiver=_streamReceiver - In the implementation block
@property (assign,nonatomic) unsigned long long streamState;                                          //@synthesize streamState=_streamState - In the implementation block
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
-(id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 streamReceiver:(id)arg4 remoteCapabilities:(id)arg5 streamPreference:(id)arg6 ;
-(id<HMDCameraRemoteStreamSenderProtocol>)streamSender;
-(BOOL)containsState:(long long)arg1 ;
-(id<HMDCameraRemoteStreamReceiverProtocol>)streamReceiver;
@end

