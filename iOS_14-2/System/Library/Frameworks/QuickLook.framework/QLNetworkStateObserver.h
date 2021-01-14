/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>
#import <libobjc.A.dylib/QLNetworkStateListener.h>

@protocol OS_dispatch_queue, QLNetworkStateListener;
@class NSObject, RadiosPreferences, NSMutableArray, NSString;

@interface QLNetworkStateObserver : NSObject <RadiosPreferencesDelegate, QLNetworkStateListener> {

	unsigned long long _stack;
	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_QL11* _networkReachabilityContext;
	SCNetworkReachabilityRef _reachability;
	int _iCloudDriveReachabilityToken;
	unsigned _reachabilityFlags;
	RadiosPreferences* _radiosPreferences;
	NSMutableArray* _completionBlocks;
	unsigned long long _networkState;
	id<QLNetworkStateListener> _remoteObserver;

}

@property (nonatomic,readonly) unsigned long long networkState;                      //@synthesize networkState=_networkState - In the implementation block
@property (nonatomic,retain) id<QLNetworkStateListener> remoteObserver;              //@synthesize remoteObserver=_remoteObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)usingRemoteNetworkObserver;
+(BOOL)networkAccessShouldGoThroughCloudDocsDaemon;
-(void)startObserving;
-(void)stopObserving;
-(BOOL)isConnected;
-(id<QLNetworkStateListener>)remoteObserver;
-(void)updateState:(unsigned long long)arg1 ;
-(id)init;
-(void)airplaneModeChanged;
-(void)setRemoteObserver:(id<QLNetworkStateListener>)arg1 ;
-(unsigned long long)networkState;
-(void)_update;
-(void)_commonInit;
-(void)pushOperation;
-(void)popOperation;
-(BOOL)isWifiCapable;
-(void)dealloc;
-(void)_updateRemoteObserver;
-(void)_updateNetworkActivityIndicator;
-(void)_updateNetworkStateWithFlags:(unsigned)arg1 ;
-(void)_setNetworkState:(unsigned long long)arg1 ;
-(void)_updateNetworkStateWithNotifyToken:(int)arg1 ;
-(void)_unregisterReachability;
-(void)_updateCompletionBlocks;
-(void)setNetworkState:(unsigned long long)arg1 ;
-(void)networkStateWithCompletionBlock:(/*^block*/id)arg1 ;
@end

