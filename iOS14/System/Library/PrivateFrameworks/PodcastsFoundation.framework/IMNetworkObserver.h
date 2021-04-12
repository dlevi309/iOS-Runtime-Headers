/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/


@protocol OS_dispatch_queue;
#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
@class NSString, NSObject;

@interface IMNetworkObserver : NSObject {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _networkReachabilityFlags;
	long long _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	CTServerConnectionRef _telephonyServer;

}

@property (assign) long long networkType; 
@property (readonly) NSString * connectionTypeHeader; 
@property (readonly) unsigned networkReachabilityFlags; 
+(id)sharedInstance;
+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned)arg1 ;
+(id)_networkObserverLogConfig;
-(long long)networkType;
-(void)setNetworkType:(long long)arg1 ;
-(id)operatorName;
-(void)_reloadDataStatusIndicator;
-(id)dataStatusIndicator;
-(void)_applicationForegroundNotification:(id)arg1 ;
-(id)init;
-(unsigned)_currentNetworkReachabilityFlags;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(unsigned)networkReachabilityFlags;
-(void)_reloadNetworkType;
-(void)reloadNetworkType;
-(long long)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)_copyConnectionDataStatus:(/*^block*/id)arg1 ;
-(long long)_setNetworkType:(long long)arg1 ;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned)arg1 toValue:(unsigned)arg2 ;
-(long long)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(NSString *)connectionTypeHeader;
-(id)_dataStatusIndicator;
-(void)_postTypeChangedNotificationFromValue:(long long)arg1 toValue:(long long)arg2 ;
-(void)dealloc;
-(id)stringForNetworkType:(long long)arg1 ;
-(BOOL)networkTypeIsCellularType:(long long)arg1 ;
@end

