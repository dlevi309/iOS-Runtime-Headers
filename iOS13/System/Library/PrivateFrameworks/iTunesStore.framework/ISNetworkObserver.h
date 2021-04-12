/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/SSDownloadQueueObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableSet;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _isCellularRestricted;
	double _lastNetworkTypeChangeTime;
	unsigned _networkReachabilityFlags;
	long long _networkUsageCount;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableSet* _observedDownloadQueues;
	SCNetworkReachabilityRef _reachability;
	CTServerConnectionRef _telephonyServer;

}

@property (readonly) NSString * connectionTypeHeader; 
@property (assign) long long networkType; 
@property (getter=isWiFiEnabled,readonly) BOOL wifiEnabled; 
@property (readonly) NSString * dataStatusIndicator; 
@property (readonly) NSString * mobileSubscriberCountryCode; 
@property (readonly) NSString * mobileSubscriberNetworkCode; 
@property (readonly) NSString * modemRegistrationStatus; 
@property (readonly) NSString * operatorName; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * providerName; 
@property (readonly) unsigned networkReachabilityFlags; 
@property (readonly) double lastNetworkTypeChangeTime; 
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
@property (readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)setAirplaneModeEnabled:(BOOL)arg1 ;
+(void)setWiFiEnabled:(BOOL)arg1 ;
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
+(void)set3GEnabled:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)phoneNumber;
-(long long)networkType;
-(void)setNetworkType:(long long)arg1 ;
-(BOOL)isWiFiEnabled;
-(BOOL)isUsingNetwork;
-(NSString *)providerName;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2 ;
-(void)downloadQueueNetworkUsageChanged:(id)arg1 ;
-(NSString *)connectionTypeHeader;
-(NSString *)operatorName;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(unsigned)networkReachabilityFlags;
-(double)lastNetworkTypeChangeTime;
-(void)reloadNetworkType;
-(unsigned)_currentNetworkReachabilityFlags;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(void)_applicationForegroundNotification:(id)arg1 ;
-(void)_telephonyOperatorNameDidChangeNotification:(id)arg1 ;
-(void)_telephonyRegistrationDidChangeNotification:(id)arg1 ;
-(BOOL)_ntsIsUsingNetwork;
-(void)_postUsageChangedToValue:(BOOL)arg1 ;
-(id)copyValueForCarrierBundleKey:(id)arg1 ;
-(id)_dataStatusIndicator;
-(void)_reloadNetworkType;
-(long long)_setNetworkType:(long long)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(void)_reloadDataStatusIndicator;
-(void)_copyConnectionDataStatus:(/*^block*/id)arg1 ;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(void)beginObservingDownloadQueue:(id)arg1 ;
-(void)endObservingDownloadQueue:(id)arg1 ;
-(BOOL)shouldShowCellularAutomaticDownloadsSwitch;
-(NSString *)dataStatusIndicator;
-(BOOL)isCellularDataEnabledForBundleIdentifier:(id)arg1 ;
-(NSString *)modemRegistrationStatus;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(void)_reloadCellularRestriction;
@end

