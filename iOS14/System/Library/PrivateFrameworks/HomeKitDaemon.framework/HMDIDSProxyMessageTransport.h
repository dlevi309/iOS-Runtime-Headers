/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDIDSMessageTransport.h>

@class HMDWatchManager, HMDCompanionManager;

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport {

	HMDWatchManager* _watchManager;
	HMDCompanionManager* _companionManager;

}

@property (nonatomic,readonly) HMDWatchManager * watchManager;                      //@synthesize watchManager=_watchManager - In the implementation block
@property (nonatomic,readonly) HMDCompanionManager * companionManager;              //@synthesize companionManager=_companionManager - In the implementation block
+(id)logCategory;
+(unsigned long long)restriction;
+(long long)priorityForMessage:(id)arg1 ;
+(BOOL)transportSupportsDevice:(id)arg1 ;
-(BOOL)isSecure;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(int)transportType;
-(long long)qualityOfService;
-(BOOL)canSendMessage:(id)arg1 ;
-(id)deviceForHandle:(id)arg1 ;
-(HMDWatchManager *)watchManager;
-(id)initWithAccountRegistry:(id)arg1 ;
-(BOOL)isDeviceConnected:(id)arg1 ;
-(id)remoteMessageFromMessage:(id)arg1 ;
-(id)deviceForSenderContext:(id)arg1 ;
-(id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id*)arg7 ;
-(HMDCompanionManager *)companionManager;
-(id)watchDeviceForDevice:(id)arg1 ;
@end

