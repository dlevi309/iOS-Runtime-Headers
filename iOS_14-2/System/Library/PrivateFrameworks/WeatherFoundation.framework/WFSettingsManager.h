/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/WFUserInfoManagerDelegate.h>

@protocol OS_dispatch_queue;
@class WFRemoteAppSettings, WFUserInfoManager, NSObject, NSHashTable, NSString;

@interface WFSettingsManager : NSObject <WFUserInfoManagerDelegate> {

	BOOL _useFallback;
	os_unfair_lock_s _settingsLock;
	WFRemoteAppSettings* _settings;
	WFUserInfoManager* _userInfoManager;
	NSObject*<OS_dispatch_queue> _requestSerialQueue;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestSerialQueue;              //@synthesize requestSerialQueue=_requestSerialQueue - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s settingsLock;                                //@synthesize settingsLock=_settingsLock - In the implementation block
@property (nonatomic,retain) WFRemoteAppSettings * settings;                               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) WFUserInfoManager * userInfoManager;                          //@synthesize userInfoManager=_userInfoManager - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSString * APIVersion; 
@property (nonatomic,readonly) BOOL useFallback;                                           //@synthesize useFallback=_useFallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)userIdentifier;
+(id)sharedInstance;
+(void)setUserIdentifier:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)updateAssetURLHostIfNeededWithComponents:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)fetchAppConfigurationIfExpired;
-(NSHashTable *)observers;
-(id)init;
-(WFUserInfoManager *)userInfoManager;
-(void)setSettings:(WFRemoteAppSettings *)arg1 ;
-(void)forceFetchAppConfiguration;
-(id)containerIdentifier;
-(id)urlSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2 ;
-(void)fetchAppConfigurationWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(WFRemoteAppSettings *)settings;
-(void)setupRemoteSettings;
-(void)removeObserver:(id)arg1 ;
-(BOOL)useFallback;
-(void)notifyObserversOfAppConfigRefresh;
-(void)userInfoManager:(id)arg1 didSynchronizeUserIdentifier:(id)arg2 ;
-(BOOL)clearConfigCacheOnLaunchIfRequested;
-(void)setUseFallback:(BOOL)arg1 ;
-(void)setRequestSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)shouldReroutePermanentURLsForContainerIdentifier:(id)arg1 ;
-(NSString *)APIVersion;
-(char)containerIDForContainerIdentifier:(id)arg1 ;
-(void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)setUserInfoManager:(WFUserInfoManager *)arg1 ;
-(os_unfair_lock_s)settingsLock;
-(NSObject*<OS_dispatch_queue>)requestSerialQueue;
-(void)setSettingsLock:(os_unfair_lock_s)arg1 ;
@end

