/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>
#import <libobjc.A.dylib/ICCloudAvailability.h>

@protocol OS_dispatch_queue;
@class NSObject, RadiosPreferences, NSString;

@interface ICCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, ICCloudAvailability> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasProperNetworkConditionsToShowCloudMedia;
	BOOL _isAirplaneModeActive;
	BOOL _isAutoDownloadOnCellularAllowed;
	BOOL _isCellularDataActive;
	BOOL _isCellularDataRestrictedForMusic;
	BOOL _isShowingAllMusic;
	BOOL _isShowingAllVideo;
	BOOL _isUpdateInProgress;
	BOOL _isWiFiEnabled;
	BOOL _isWiFiAssociated;
	BOOL _isEthernetWired;
	BOOL _isNetworkReachable;
	BOOL _canShowCloudMusic;
	BOOL _canShowCloudVideo;
	BOOL _canShowCloudDownloadButtons;
	int _preferencesChangedNotifyToken;
	BOOL _preferencesChangedNotifyTokenIsValid;
	long long _networkType;
	RadiosPreferences* _radiosPreferences;
	unsigned long long _networkReachabilityObservationCount;
	CTServerConnectionRef _ctServerConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(BOOL)isNetworkReachable;
-(void)airplaneModeChanged;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)isCellularDataRestrictedForMusic;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudMusic;
-(BOOL)canShowCloudVideo;
-(BOOL)_hasWiFiCapability;
-(BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
-(BOOL)_uncachedIsShowingAllMusic;
-(BOOL)_uncachedIsShowingAllVideo;
-(void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1 ;
-(void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1 ;
-(void)_onQueue_updateIsCellularDataRestrictedForMusic;
-(void)_wifiStateDidChangeNotification:(id)arg1 ;
-(BOOL)_isAutoDownloadOnCellularAllowed;
-(void)_onQueue_beginObservingReachabilityChanges;
-(void)_onQueue_endObservingReachabilityChanges;
-(BOOL)_hasCellularCapability;
-(void)beginObservingNetworkReachability;
-(void)endObservingNetworkReachability;
-(void)_setNewIsNetworkReachable:(BOOL)arg1 networkType:(long long)arg2 ;
@end

