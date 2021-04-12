/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterProfile : HMDAccessoryProfile {

	unsigned long long _networkStatus;
	long long _routerStatus;

}

@property (assign,nonatomic) unsigned long long networkStatus;              //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,nonatomic) long long routerStatus;                        //@synthesize routerStatus=_routerStatus - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_registerForNotifications;
-(unsigned long long)networkStatus;
-(void)registerForMessages;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(void)unconfigure;
-(id)runtimeState;
-(id)initWithRouterService:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)handleInitialState;
-(void)handleAccessoryConfigured:(id)arg1 ;
-(void)handleCharacteristicValuesChanged:(id)arg1 ;
-(void)__handleAccessoryConfigured;
-(void)_handleCharacteristicChanges:(id)arg1 ;
-(void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg1 ;
-(long long)routerStatus;
-(void)__notifyClientsOfNetworkStatus:(unsigned long long)arg1 ;
-(void)setRouterStatus:(long long)arg1 ;
-(void)_notifyClientsOfNetworkStatusUpdate;
-(unsigned long long)__networkStatusFromWANStatus:(id)arg1 ;
-(void)_updateNetworkStatus:(id)arg1 ;
-(void)_updateRouterStatus:(id)arg1 ;
-(void)__handleNetworkRouterStatusUpdate:(id)arg1 ;
-(void)__handleNetworkRouterWANStatusUpdate:(id)arg1 ;
-(void)__handleNetworkAccessViolationUpdate:(id)arg1 ;
-(id)idenfifiersForSatelliteProfiles;
-(void)__notifyClientsOfUpdatedSatelliteProfiles;
@end

