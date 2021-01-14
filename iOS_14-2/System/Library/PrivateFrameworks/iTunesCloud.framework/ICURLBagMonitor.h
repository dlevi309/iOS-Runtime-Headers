/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_source;
@class ICURLBag, NSObject, ICUserIdentityStore, NSMutableDictionary, NSString;

@interface ICURLBagMonitor : NSObject <ICEnvironmentMonitorObserver> {

	ICURLBag* _bag;
	NSObject*<OS_dispatch_source> _bagExpirationTimer;
	ICUserIdentityStore* _identityStore;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;

}

@property (readonly) ICURLBag * bag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBagMonitor;
-(id)_description;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(ICURLBag *)bag;
-(void)_handleUserIdentityStoreDidChange:(id)arg1 ;
-(NSString *)description;
-(void)_endObservingBag;
-(void)_beginObservingBag;
-(void)_requestBagWithPolicy:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_invalidateBagExpirationTimer;
-(void)_handleBagExpirationTimerFired;
-(void)_scheduleBagExpirationTimerForDate:(id)arg1 ;
-(void)_updateWithBag:(id)arg1 ;
-(id)beginObservingBagWithHandler:(/*^block*/id)arg1 ;
-(void)endObservingBagWithToken:(id)arg1 ;
-(id)_init;
-(void)dealloc;
@end

