/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
*/


#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
@interface AXSpeechAssetMonitorHelper : NSObject {

	double _lastVoiceAssetUpdateTime;
	SCNetworkReachabilityRef _reachability;

}
+(id)sharedInstance;
-(id)init;
-(void)updateAvailableSpeechAssets;
-(void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
-(void)_checkClientForUpdates:(BOOL)arg1 ;
-(BOOL)_areMobileAssetsPresent;
-(void)_registerForReachabilityNotifications;
-(void)_checkForAssetUpdatesNowAndNextWeek;
-(void)_unregisterForReachabilityNotifications;
-(void)_monitorForNetworkChanges;
-(id)_assetUpdaterClient;
-(void)_clientUpdateAvailableSpeechAssets;
-(BOOL)_platformSupportsMobileAssetVoices;
-(void)_monitorSpeechAssetChanges;
-(id)speechAssetUpdaterClient;
@end

