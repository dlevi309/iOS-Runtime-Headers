/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@protocol OS_dispatch_queue;
@class NSCache, NSObject, DMFApplicationPolicyMonitor;

@interface SearchUIScreenTimeManager : NSObject {

	NSCache* _definitelyCorrectCache;
	NSCache* _possiblyCorrectCache;
	NSObject*<OS_dispatch_queue> _serialQueue;
	DMFApplicationPolicyMonitor* _monitor;

}

@property (retain) NSCache * definitelyCorrectCache;                      //@synthesize definitelyCorrectCache=_definitelyCorrectCache - In the implementation block
@property (retain) NSCache * possiblyCorrectCache;                        //@synthesize possiblyCorrectCache=_possiblyCorrectCache - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (retain) DMFApplicationPolicyMonitor * monitor;                 //@synthesize monitor=_monitor - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(DMFApplicationPolicyMonitor *)monitor;
-(BOOL)cachedScreenTimeValueForBundleIdentifier:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setMonitor:(DMFApplicationPolicyMonitor *)arg1 ;
-(void)purgeCache;
-(void)getScreenTimeBlockedForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDefinitelyCorrectCache:(NSCache *)arg1 ;
-(void)setPossiblyCorrectCache:(NSCache *)arg1 ;
-(NSCache *)possiblyCorrectCache;
-(NSCache *)definitelyCorrectCache;
-(BOOL)bundleIdIsScreenTimeBlocked:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

