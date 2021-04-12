/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, WFClient;

@interface WFKnownNetworkStore : NSObject {

	BOOL _hasHS20Networks;
	NSObject*<OS_dispatch_queue> _knownNetworksQueue;
	NSSet* _knownNetworks;
	NSSet* _managedNetworkNames;
	WFClient* _wifiClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> knownNetworksQueue;              //@synthesize knownNetworksQueue=_knownNetworksQueue - In the implementation block
@property (nonatomic,retain) NSSet * knownNetworks;                                        //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSSet * managedNetworkNames;                                  //@synthesize managedNetworkNames=_managedNetworkNames - In the implementation block
@property (assign,nonatomic) BOOL hasHS20Networks;                                         //@synthesize hasHS20Networks=_hasHS20Networks - In the implementation block
@property (assign,nonatomic,__weak) WFClient * wifiClient;                                 //@synthesize wifiClient=_wifiClient - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)initWithClient:(id)arg1 ;
-(NSSet *)knownNetworks;
-(void)_forceUpdateKnownNetworksAndWait:(BOOL)arg1 ;
-(void)_clientServerRestarted:(id)arg1 ;
-(void)_preferredNetworksDidChange:(id)arg1 ;
-(id)_networkProfileFromNetworkAttributes:(id)arg1 ;
-(void)_forceUpdateKnownNetworks;
-(WFClient *)wifiClient;
-(NSSet *)managedNetworkNames;
-(void)setManagedNetworkNames:(NSSet *)arg1 ;
-(void)setKnownNetworks:(NSSet *)arg1 ;
-(void)setHasHS20Networks:(BOOL)arg1 ;
-(BOOL)hasHS20Networks;
-(NSObject*<OS_dispatch_queue>)knownNetworksQueue;
-(id)networkProfileWithSSID:(id)arg1 securityMode:(long long)arg2 ;
-(void)updateKnownNetworks;
-(id)networkProfileForNetwork:(id)arg1 ;
-(id)networkProfileWithSSID:(id)arg1 ;
-(BOOL)saveNetworkProfile:(id)arg1 forReason:(unsigned long long)arg2 error:(out id*)arg3 ;
-(BOOL)removeNetworkProfile:(id)arg1 error:(id*)arg2 ;
-(BOOL)setAutoJoinEnabled:(BOOL)arg1 forProfile:(id)arg2 error:(out id*)arg3 ;
-(BOOL)networkMatchesManagedProfile:(id)arg1 ;
-(id)getGeoTagsForNetworkProfile:(id)arg1 ;
-(id)getScoreForNetworkProfile:(id)arg1 ;
-(void)setKnownNetworksQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setWifiClient:(WFClient *)arg1 ;
@end

