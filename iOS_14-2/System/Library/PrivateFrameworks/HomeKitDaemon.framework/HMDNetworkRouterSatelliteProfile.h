/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile {

	unsigned long long _networkStatus;
	long long _satelliteStatus;

}

@property (assign,nonatomic) long long satelliteStatus;                     //@synthesize satelliteStatus=_satelliteStatus - In the implementation block
@property (assign,nonatomic) unsigned long long networkStatus;              //@synthesize networkStatus=_networkStatus - In the implementation block
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(void)_registerForNotifications;
-(unsigned long long)networkStatus;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setNetworkStatus:(unsigned long long)arg1 ;
-(id)description;
-(void)registerForMessages;
-(void)unconfigure;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_updateNetworkStatus;
-(id)runtimeState;
-(void)handleAccessoryConnected:(id)arg1 ;
-(void)handleCharacteristicsChangedNotification:(id)arg1 ;
-(id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)handleInitialState;
-(void)__handleAccessoryConnected;
-(long long)satelliteStatus;
-(void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1 ;
-(void)setSatelliteStatus:(long long)arg1 ;
-(void)__updateSatelliteStatus:(id)arg1 ;
-(void)_handleCharacteristicChanges:(id)arg1 ;
-(void)_handleCharacteristicsChangedPayload:(id)arg1 ;
@end

