/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDPersonManager.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDDatabaseZoneManagerDataSource.h>

@class HMHomePersonManagerSettings, HMDHome, HMIHomePersonManager, NSString;

@interface HMDHomePersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource> {

	HMHomePersonManagerSettings* _dataUnavailableHomeSettings;
	HMDHome* _home;

}

@property (copy,readonly) HMHomePersonManagerSettings * dataUnavailableHomeSettings;              //@synthesize dataUnavailableHomeSettings=_dataUnavailableHomeSettings - In the implementation block
@property (__weak) HMDHome * home;                                                                //@synthesize home=_home - In the implementation block
@property (readonly) HMIHomePersonManager * hmiPersonManager; 
@property (copy,readonly) HMHomePersonManagerSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(HMHomePersonManagerSettings *)settings;
-(void)setHome:(HMDHome *)arg1 ;
-(HMDHome *)home;
-(BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2 ;
-(BOOL)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2 ;
-(BOOL)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2 ;
-(void)configureWithHome:(id)arg1 ;
-(BOOL)sharesFaceClassifications;
-(HMIHomePersonManager *)hmiPersonManager;
-(void)handleUpdatedSettings:(id)arg1 ;
-(id)updateSettingsUsingMessagePayload:(id)arg1 ;
-(void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1 ;
-(void)handleUserRemoteAccessDidChangeNotification:(id)arg1 ;
-(BOOL)syncsPersonData;
-(id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataReceivers:(id)arg3 workQueue:(id)arg4 home:(id)arg5 ;
-(id)initWithHome:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3 ;
-(HMHomePersonManagerSettings *)dataUnavailableHomeSettings;
@end

