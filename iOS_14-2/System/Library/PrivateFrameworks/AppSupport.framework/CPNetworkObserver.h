/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _reachabilityRequests;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	SCPreferencesRef _wifiPreferences;
	CFDictionaryRef _wifiObservers;
	BOOL _networkNotified;
	BOOL _networkReachable;
	BOOL _wifiNotified;
	BOOL _wifiEnabled;

}
+(id)sharedNetworkObserver;
-(BOOL)isNetworkReachable;
-(id)init;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(BOOL)isWiFiEnabled;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)_wifiFirstCallBack:(id)arg1 ;
-(void)_wifiObserversInitialize;
-(void)removeObserver:(id)arg1 ;
-(void)removeWiFiObserver:(id)arg1 ;
-(void)addWiFiObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)_networkObserversInitialize;
-(void)removeObserver:(id)arg1 forHostname:(id)arg2 ;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3 ;
-(void)dealloc;
-(void)removeNetworkReachableObserver:(id)arg1 ;
@end

