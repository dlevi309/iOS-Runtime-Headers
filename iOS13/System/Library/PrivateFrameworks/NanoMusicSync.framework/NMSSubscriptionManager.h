/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount, NSString;

@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	long long _icStatusType;
	ACAccount* _activeAccount;
	unsigned long long _subscriptionStatus;
	unsigned long long _failedGetSubscriptionStatusAttempts;

}

@property (nonatomic,readonly) unsigned long long subscriptionStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(unsigned long long)subscriptionStatus;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(unsigned long long)_statusWithActiveAccount:(id)arg1 icStatusType:(long long)arg2 ;
-(void)_updateICSubscriptionStatusType;
-(void)_handleICSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_updateActiveAccount;
-(void)_updateSubscriptionStatus;
@end

