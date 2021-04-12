/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol WFSettings, OS_dispatch_queue;
#import <WeatherFoundation/WeatherFoundation-Structs.h>
@class NSObject, NSString;

@interface WFSettingsManager : NSObject {

	BOOL _useFallback;
	os_unfair_lock_s _useFallbackLock;
	os_unfair_lock_s _settingsLock;
	id<WFSettings> _settings;
	NSObject*<OS_dispatch_queue> _requestSerialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestSerialQueue;              //@synthesize requestSerialQueue=_requestSerialQueue - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s useFallbackLock;                             //@synthesize useFallbackLock=_useFallbackLock - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s settingsLock;                                //@synthesize settingsLock=_settingsLock - In the implementation block
@property (nonatomic,readonly) id<WFSettings> settings;                                    //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSString * APIVersion; 
@property (nonatomic,readonly) BOOL useFallback;                                           //@synthesize useFallback=_useFallback - In the implementation block
+(id)userId;
-(id)init;
-(id)containerIdentifier;
-(id<WFSettings>)settings;
-(void)setSettings:(id<WFSettings>)arg1 ;
-(NSString *)APIVersion;
-(void)fetchAppConfigurationIfExpired;
-(void)clearConfigCacheOnLaunchIfRequested;
-(void)fetchAppConfigurationIfNeeded;
-(void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)requestSerialQueue;
-(id)_permanentURLForRecordID:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)completeOnQueue:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)useFallback;
-(char)_containerIDForContainerIdentifier:(id)arg1 ;
-(id)_URLSafeBase64EncodedStringWithData:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setUseFallback:(BOOL)arg1 ;
-(void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRequestSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(os_unfair_lock_s)useFallbackLock;
-(void)setUseFallbackLock:(os_unfair_lock_s)arg1 ;
-(os_unfair_lock_s)settingsLock;
-(void)setSettingsLock:(os_unfair_lock_s)arg1 ;
@end

