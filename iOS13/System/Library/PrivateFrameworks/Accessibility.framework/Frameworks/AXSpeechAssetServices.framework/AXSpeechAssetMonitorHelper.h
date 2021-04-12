/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
*/


#import <AXSpeechAssetServices/AXSpeechAssetServices-Structs.h>
@interface AXSpeechAssetMonitorHelper : NSObject {

	double _lastVoiceAssetUpdateTime;
	SCNetworkReachabilityRef _reachability;

}
+(id)sharedInstance;
-(id)init;
-(id)_assetUpdaterClient;
-(void)_monitorSpeechAssetChanges;
-(BOOL)_areMobileAssetsPresent;
-(void)_monitorForNetworkChanges;
-(void)_registerForReachabilityNotifications;
-(void)_clientUpdateAvailableSpeechAssets;
-(void)_checkClientForUpdates:(BOOL)arg1 ;
-(void)updateAvailableSpeechAssets;
-(void)_checkForAssetUpdatesNowAndNextWeek;
-(id)speechAssetUpdaterClient;
-(void)_unregisterForReachabilityNotifications;
-(void)clearCurrentVoicesAndRefreshTTSVoiceList;
@end

