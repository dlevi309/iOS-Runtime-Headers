/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@protocol OS_dispatch_queue;
@class NSObject, WLKServerConfigurationResponse, NSURLSessionConfiguration;

@interface WLKConfigurationManager : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	WLKServerConfigurationResponse* _config;
	NSURLSessionConfiguration* _sharedCacheSessionConfiguration;

}
+(id)sharedInstance;
-(id)_configuration;
-(id)_config;
-(id)init;
-(id)_stringForCachePolicy:(unsigned long long)arg1 ;
-(id)_utsk;
-(id)_init;
-(void)_invalidateCache;
-(void)fetchConfigurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleLibraryDidChangeNotification:(id)arg1 ;
-(void)_setConfig:(id)arg1 ;
-(id)_configurationWithOptions:(long long)arg1 cachePolicy:(unsigned long long)arg2 queryParameters:(id)arg3 ;
-(void)_invalidateNetworkCache;
-(void)_setUtsk:(id)arg1 ;
@end

