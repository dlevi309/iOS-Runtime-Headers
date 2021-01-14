/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterProfile : HMDAccessoryProfile {

	unsigned long long _networkStatus;
	unsigned long long _wanStatus;
	long long _routerStatus;

}

@property (assign,nonatomic) unsigned long long networkStatus;              //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) unsigned long long wanStatus;                  //@synthesize wanStatus=_wanStatus - In the implementation block
@property (assign,nonatomic) long long routerStatus;                        //@synthesize routerStatus=_routerStatus - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(unsigned long long)networkStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(id)description;
-(void)registerForMessages;
-(void)unconfigure;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)runtimeState;
-(void)handleAccessoryConnected:(id)arg1 ;
-(void)handleCharacteristicsChangedNotification:(id)arg1 ;
-(id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)handleInitialState;
-(void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1 ;
-(long long)routerStatus;
-(unsigned long long)wanStatus;
-(void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1 ;
-(void)setRouterStatus:(long long)arg1 ;
-(void)setWanStatus:(unsigned long long)arg1 ;
-(void)_updateWANStatus:(unsigned long long)arg1 ;
-(void)_updateRouterStatus:(long long)arg1 ;
-(void)__handleNetworkAccessViolationUpdate:(id)arg1 ;
@end

