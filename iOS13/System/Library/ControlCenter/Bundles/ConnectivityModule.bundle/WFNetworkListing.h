/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

@class NSString;


@protocol WFNetworkListing <NSObject>
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI; 
@property (retain) id<WFNetworkListRecord> currentNetwork; 
@property (assign) long long currentNetworkState; 
@property (assign) unsigned long long currentNetworkSignalBars; 
@property (assign,nonatomic) long long deviceCapability; 
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
@optional
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;
-(void)setScanning:(BOOL)arg1;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1;
-(NSString *)currentNetworkSubtitle;
-(void)powerModificationStateDidChange:(BOOL)arg1;
-(void)managedAppleIDStateChange:(BOOL)arg1;
-(void)setCurrentNetwork:(id)arg1 previousNetwork:(id)arg2 reason:(unsigned long long)arg3;
-(void)setCurrentNetworkSubtitle:(id)arg1;
-(void)setCurrentNetworkSignalBars:(unsigned long long)arg1;
-(BOOL)supportsWiFiPasswordSharing;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(BOOL)supportsHealthRecommendations;
-(void)setAutoInstantHotspotJoinOption:(long long)arg1;
-(void)setAskToJoinMode:(long long)arg1;
-(void)updateViewsForNetworks:(id)arg1;
-(void)setUserAutoJoinEnabled:(BOOL)arg1;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg1;
-(void)networkListDelegateDidPresentAccessoryViewController:(id)arg1;
-(unsigned long long)currentNetworkSignalBars;
-(BOOL)userAutoJoinEnabled;

@required
-(void)refresh;
-(void)setCurrentNetwork:(id)arg1;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)setNetworks:(id)arg1;
-(void)setListDelegate:(id)arg1;
-(void)setShowOtherNetwork:(BOOL)arg1;
-(void)powerStateDidChange:(BOOL)arg1;
-(void)setCurrentNetworkScaledRSSI:(float)arg1;
-(void)setCurrentNetworkState:(long long)arg1;
-(long long)currentNetworkState;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;

@end

