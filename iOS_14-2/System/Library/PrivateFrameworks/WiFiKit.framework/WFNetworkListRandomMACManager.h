/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@class NSMutableDictionary, WFClient;

@interface WFNetworkListRandomMACManager : NSObject {

	BOOL _shouldResetCache;
	NSMutableDictionary* _cache;
	WFClient* _client;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) WFClient * client;                        //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL shouldResetCache;                    //@synthesize shouldResetCache=_shouldResetCache - In the implementation block
-(WFClient *)client;
-(void)setClient:(WFClient *)arg1 ;
-(NSMutableDictionary *)cache;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(void)resetCacheWithCurrentNetworkName:(id)arg1 ;
-(BOOL)isSSIDinCache:(id)arg1 ;
-(BOOL)shouldEnableRandomMACForSSID:(id)arg1 ;
-(id)cachedRandomMACForSSID:(id)arg1 ;
-(BOOL)randomMACFeatureIsEnabled;
-(BOOL)shouldEnableRandomMacForSecuredNetworks;
-(id)newScanRecordWithRandomMACFromScanRecord:(id)arg1 ;
-(void)setRandomMAC:(id)arg1 forNetwork:(id)arg2 enabled:(BOOL)arg3 shouldAlwaysDisplayRandomAddress:(BOOL)arg4 ;
-(void)setShouldResetCache:(BOOL)arg1 ;
-(BOOL)shouldAlwaysDisplayRandomAddressForSSID:(id)arg1 ;
-(BOOL)shouldResetCache;
@end

