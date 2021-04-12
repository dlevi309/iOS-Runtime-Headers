/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)_update;
-(id<QLNetworkStateListener>)remoteObserver;
-(void)airplaneModeChanged;
-(void)updateState:(unsigned long long)arg1 ;
-(void)startObserving;
-(void)stopObserving;
-(void)_commonInit;
-(BOOL)isConnected;
-(unsigned long long)networkState;
-(void)_updateNetworkActivityIndicator;
-(BOOL)isWifiCapable;
-(void)setRemoteObserver:(id<QLNetworkStateListener>)arg1 ;
-(void)pushOperation;
-(void)popOperation;
-(void)_updateRemoteObserver;
-(void)_updateNetworkStateWithFlags:(unsigned)arg1 ;
-(void)_setNetworkState:(unsigned long long)arg1 ;
-(void)_updateNetworkStateWithNotifyToken:(int)arg1 ;
-(void)_unregisterReachability;
-(void)_updateCompletionBlocks;
-(void)setNetworkState:(unsigned long long)arg1 ;
-(void)networkStateWithCompletionBlock:(/*^block*/id)arg1 ;
@end

