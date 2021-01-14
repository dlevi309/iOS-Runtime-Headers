/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiAvailabilitySource.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSURL, TBDataSourceMediator, WiFi3BarsTileFetcher, NSString;

@interface WiFi3BarsSource : NSObject <WiFiAvailabilitySource> {

	/*^block*/id changeHandler;
	/*^block*/id relevancyHandler;
	unsigned long long _cacheExpirationInDays;
	NSMutableDictionary* _networks;
	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _storeURL;
	TBDataSourceMediator* _sourceMediator;
	WiFi3BarsTileFetcher* _tileFetcher;

}

@property (nonatomic,retain) NSMutableDictionary * networks;                        //@synthesize networks=_networks - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSURL * storeURL;                                        //@synthesize storeURL=_storeURL - In the implementation block
@property (nonatomic,retain) TBDataSourceMediator * sourceMediator;                 //@synthesize sourceMediator=_sourceMediator - In the implementation block
@property (nonatomic,retain) WiFi3BarsTileFetcher * tileFetcher;                    //@synthesize tileFetcher=_tileFetcher - In the implementation block
@property (assign,nonatomic) unsigned long long cacheExpirationInDays;              //@synthesize cacheExpirationInDays=_cacheExpirationInDays - In the implementation block
@property (nonatomic,copy) id changeHandler; 
@property (nonatomic,copy) id relevancyHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)changeHandler;
-(void)setChangeHandler:(id)arg1 ;
-(NSMutableDictionary *)networks;
-(void)setNetworks:(NSMutableDictionary *)arg1 ;
-(NSURL *)storeURL;
-(void)setStoreURL:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)cacheExpirationInDays;
-(void)prune3BarsNetworks:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCacheExpirationInDays:(unsigned long long)arg1 ;
-(id)relevancyHandler;
-(id)relevantNetworks;
-(void)setRelevancyHandler:(id)arg1 ;
-(void)fetchCandidateNetworksMatchingBSSIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_descriptorForType:(unsigned long long)arg1 ;
-(void)fetch3BarsNetworksForLocation:(id)arg1 forceRemote:(BOOL)arg2 trigger:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_handleRemoteFetchResponse:(id)arg1 ;
-(TBDataSourceMediator *)sourceMediator;
-(id)_matchSearchBSSIDs:(id)arg1 toResponse:(id)arg2 ;
-(id)initWithChangeHandler:(/*^block*/id)arg1 localStoreType:(unsigned long long)arg2 ;
-(void)fetch3BarsNetworksFor:(id)arg1 ;
-(void)fetch3BarsNetworksPredictedForLocation:(id)arg1 duration:(double)arg2 maxLocations:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)forceFetch3BarsNetworkMatchingBSSID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitCacheAnalyticsEvent;
-(void)setSourceMediator:(TBDataSourceMediator *)arg1 ;
-(WiFi3BarsTileFetcher *)tileFetcher;
-(void)setTileFetcher:(WiFi3BarsTileFetcher *)arg1 ;
@end

