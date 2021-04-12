/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile {

	unsigned long long _networkStatus;
	long long _satelliteStatus;

}

@property (assign,nonatomic) long long satelliteStatus;                     //@synthesize satelliteStatus=_satelliteStatus - In the implementation block
@property (assign,nonatomic) unsigned long long networkStatus;              //@synthesize networkStatus=_networkStatus - In the implementation block
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
-(id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2 ;
-(void)handleInitialState;
-(void)handleAccessoryConfigured:(id)arg1 ;
-(void)handleCharacteristicValuesChanged:(id)arg1 ;
-(void)__handleAccessoryConfigured;
-(long long)satelliteStatus;
-(void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1 ;
-(void)setSatelliteStatus:(long long)arg1 ;
-(void)_updateNetworkStatus;
-(void)__updateSatelliteStatus:(id)arg1 ;
-(void)_handleCharacteristicChanges:(id)arg1 ;
@end

