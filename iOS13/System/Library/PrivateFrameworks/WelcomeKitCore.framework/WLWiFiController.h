/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/


@protocol OS_dispatch_queue;
@class NSObject, WLWiFiManager, WLWiFiNetwork, WLNETRBClient;

@interface WLWiFiController : NSObject {

	NSObject*<OS_dispatch_queue> _requestQueue;
	unsigned long long _lastRequestID;
	WLWiFiManager* _wifiManager;
	BOOL _didConsultPreferencesForStartedNetwork;
	WLWiFiNetwork* _startedNetwork;
	WLNETRBClient* _netrbClient;

}

@property (nonatomic,readonly) BOOL hasSoftAPCapability; 
+(id)sharedInstance;
-(id)init;
-(id)_initWithWiFiManager:(id)arg1 netrbClient:(id)arg2 ;
-(BOOL)hasSoftAPCapability;
-(unsigned long long)_newRequestID;
-(void)_ensureStartedNetworkReflectsPreferences;
-(void)_enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_disableSoftAPWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopWiFiWithCompletion:(/*^block*/id)arg1 ;
-(void)_startWiFiWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_networkRecordFromSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 ;
-(void)enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)disableSoftAPWithCompletion:(/*^block*/id)arg1 ;
-(id)_startedNetwork;
@end

