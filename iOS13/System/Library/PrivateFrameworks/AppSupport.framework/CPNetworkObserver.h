/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 forHostname:(id)arg2 ;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)_networkObserversInitialize;
-(void)_wifiFirstCallBack:(id)arg1 ;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(void)_wifiObserversInitialize;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3 ;
-(BOOL)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
-(BOOL)isWiFiEnabled;
-(void)addWiFiObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeWiFiObserver:(id)arg1 ;
@end

