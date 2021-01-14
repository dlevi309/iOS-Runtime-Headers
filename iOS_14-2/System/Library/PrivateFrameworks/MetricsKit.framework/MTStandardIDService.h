/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <libobjc.A.dylib/MTIDService.h>

@class MTPromise, MTIDCache, MTInterprocessChangeNotifier, NSString;

@interface MTStandardIDService : NSObject <MTIDService> {

	MTPromise* _configPromise;
	MTIDCache* _cache;
	MTInterprocessChangeNotifier* _accountChanged;
	MTInterprocessChangeNotifier* _recordSynced;

}

@property (nonatomic,retain) MTPromise * configPromise;                                  //@synthesize configPromise=_configPromise - In the implementation block
@property (nonatomic,retain) MTIDCache * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) MTInterprocessChangeNotifier * accountChanged;              //@synthesize accountChanged=_accountChanged - In the implementation block
@property (nonatomic,retain) MTInterprocessChangeNotifier * recordSynced;                //@synthesize recordSynced=_recordSynced - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dateFilledOptions:(id)arg1 ;
+(void)triggerInterprocessChangeNotifier:(id)arg1 ;
+(void)registerInterprocessChangeNotifier:(id)arg1 ;
+(id)writeDebugData:(id)arg1 toFileWithNameFormat:(id)arg2 ;
+(void)setLocalCachePath:(id)arg1 ;
+(id)localCachePath;
-(id)initWithConfigDictionary:(id)arg1 ;
-(MTIDCache *)cache;
-(id)init;
-(void)setCache:(MTIDCache *)arg1 ;
-(void)handleApplicationStateChange:(id)arg1 ;
-(void)setConfig:(id)arg1 ;
-(MTInterprocessChangeNotifier *)accountChanged;
-(void)_getIDs;
-(void)dealloc;
-(id)initWithAMSBag:(id)arg1 ;
-(void)performMaintenanceWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithConfigPromise:(id)arg1 ;
-(void)setConfigPromise:(MTPromise *)arg1 ;
-(void)handleResetNotification:(id)arg1 ;
-(void)handleAccountNotification;
-(void)setAccountChanged:(MTInterprocessChangeNotifier *)arg1 ;
-(void)handleRecordNotification;
-(void)setRecordSynced:(MTInterprocessChangeNotifier *)arg1 ;
-(void)maybeSubscribeToDarwinNotifications;
-(id)secretStore;
-(id)IDFieldsForTopic:(id)arg1 options:(id)arg2 ;
-(id)resetIDForTopics:(id)arg1 options:(id)arg2 ;
-(MTPromise *)configPromise;
-(id)IDInfoForNamespace:(id)arg1 options:(id)arg2 fromConfig:(id)arg3 ;
-(id)IDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 ;
-(id)IDsForNamespaces:(id)arg1 options:(id)arg2 fromConfig:(id)arg3 ;
-(id)generateAndCacheIDInfo:(id)arg1 secret:(id)arg2 correlationIDs:(id)arg3 date:(id)arg4 ;
-(void)IDFieldsForTopic:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetIDForTopics:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)IDInfoForNamespace:(id)arg1 options:(id)arg2 ;
-(id)resetIDForNamespace:(id)arg1 options:(id)arg2 ;
-(void)_clearLocalData;
-(void)_resetIDs;
-(void)_getSecrets;
-(void)_getConfig;
-(MTInterprocessChangeNotifier *)recordSynced;
@end

