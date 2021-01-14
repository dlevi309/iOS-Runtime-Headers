/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString, NSMutableDictionary;

@interface AMSEngagementClientData : NSObject {

	NSString* _lastSyncedBuild;
	NSMutableDictionary* _apps;

}

@property (nonatomic,retain) NSMutableDictionary * apps;              //@synthesize apps=_apps - In the implementation block
@property (nonatomic,retain) NSString * lastSyncedBuild;              //@synthesize lastSyncedBuild=_lastSyncedBuild - In the implementation block
+(void)_registerNotifications;
+(BOOL)_isDaemon;
+(id)_sharedQueue;
+(id)_fetchClientData;
+(void)_assertEngagementd;
+(id)loadFromDisk;
-(void)setApps:(NSMutableDictionary *)arg1 ;
-(id)initWithCacheObject:(id)arg1 ;
-(void)addCachedResponseData:(id)arg1 cacheInfo:(id)arg2 appIdentifier:(id)arg3 ;
-(void)setWhitelists:(id)arg1 appIdentifier:(id)arg2 ;
-(void)_cleanUpApps;
-(void)setLastSyncedBuild:(NSString *)arg1 ;
-(NSMutableDictionary *)apps;
-(void)saveToDisk;
-(id)destinationsForEvent:(id)arg1 ;
-(id)cachedResponseDataForEvent:(id)arg1 ;
-(NSString *)lastSyncedBuild;
@end

