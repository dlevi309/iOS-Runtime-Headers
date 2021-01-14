/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canShowCloudDownloadButtons;
-(BOOL)canShowCloudVideo;
-(BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
-(BOOL)hasProperNetworkConditionsToShowCloudMedia;
-(BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
-(BOOL)isCellularDataRestrictedForVideos;
-(BOOL)isNetworkReachable;
-(void)_onQueue_beginObservingReachabilityChanges;
-(void)_wifiStateDidChangeNotification:(id)arg1 ;
-(void)beginObservingNetworkReachability;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)init;
-(void)_onQueue_endObservingReachabilityChanges;
-(BOOL)_isAutoDownloadOnCellularAllowed;
-(void)airplaneModeChanged;
-(BOOL)_uncachedIsShowingAllMusic;
-(BOOL)isCellularDataRestrictedForMusic;
-(void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1 ;
-(BOOL)hasProperNetworkConditionsToPlayMedia;
-(BOOL)canShowCloudMusic;
-(void)endObservingNetworkReachability;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(BOOL)_uncachedIsShowingAllVideo;
-(void)environmentMonitorDidChangeNetworkType:(id)arg1 ;
-(void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1 ;
-(BOOL)_hasCellularCapability;
-(void)_onQueue_updateIsCellularDataRestrictedForMusic;
-(BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
-(BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
-(BOOL)_hasWiFiCapability;
-(void)_setNewIsNetworkReachable:(BOOL)arg1 networkType:(long long)arg2 ;
-(BOOL)isCellularDataRestrictedForStoreApps;
-(void)dealloc;
@end

