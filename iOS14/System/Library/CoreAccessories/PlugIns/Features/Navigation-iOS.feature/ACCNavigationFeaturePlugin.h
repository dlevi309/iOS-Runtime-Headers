/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Features/Navigation-iOS.feature/Navigation-iOS
*/

#import <libobjc.A.dylib/ACCNavigationProviderProtocol.h>
#import <libobjc.A.dylib/ACCNavigationShimProtocol.h>
#import <libobjc.A.dylib/ACCFeaturePluginProtocol.h>

@protocol OS_dispatch_queue;
@class ACCiAP2ShimServer, ACCNavigationProvider, NSObject, ACCNavigationShim, NSMutableDictionary, NSString;

@interface ACCNavigationFeaturePlugin : NSObject <ACCNavigationProviderProtocol, ACCNavigationShimProtocol, ACCFeaturePluginProtocol> {

	BOOL _isRunning;
	ACCiAP2ShimServer* _iap2server;
	ACCNavigationProvider* _navigationProvider;
	NSObject*<OS_dispatch_queue> _navigationQueue;
	ACCNavigationShim* _navigationShim;
	NSMutableDictionary* _navigationShimAccessoryList;

}

@property (assign,nonatomic) BOOL isRunning;                                                 //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) ACCiAP2ShimServer * iap2server;                                 //@synthesize iap2server=_iap2server - In the implementation block
@property (nonatomic,retain) ACCNavigationProvider * navigationProvider;                     //@synthesize navigationProvider=_navigationProvider - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> navigationQueue;                   //@synthesize navigationQueue=_navigationQueue - In the implementation block
@property (nonatomic,retain) ACCNavigationShim * navigationShim;                             //@synthesize navigationShim=_navigationShim - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * navigationShimAccessoryList;              //@synthesize navigationShimAccessoryList=_navigationShimAccessoryList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(void)navigation:(id)arg1 accessoryAttached:(id)arg2 ;
-(NSString *)pluginName;
-(void)setIap2server:(ACCiAP2ShimServer *)arg1 ;
-(id)navigationShimAccessoryForConnectionID:(unsigned)arg1 ;
-(void)updateRouteGuidanceInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3 ;
-(void)notifyNavigationAccessoryClientsOfStateChange;
-(NSString *)description;
-(id)_navigationShimAccessoryForConnectionIDNoLock:(unsigned)arg1 ;
-(NSMutableDictionary *)navigationShimAccessoryList;
-(void)navigation:(id)arg1 accessoryDetached:(id)arg2 ;
-(BOOL)isRunning;
-(void)stopPlugin;
-(void)setNavigationProvider:(ACCNavigationProvider *)arg1 ;
-(void)initPlugin;
-(void)setNavigationShimAccessoryList:(NSMutableDictionary *)arg1 ;
-(ACCNavigationProvider *)navigationProvider;
-(void)setNavigationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)navigationQueue;
-(ACCiAP2ShimServer *)iap2server;
-(void)setNavigationShim:(ACCNavigationShim *)arg1 ;
-(ACCNavigationShim *)navigationShim;
-(void)startPlugin;
-(void)navigation:(id)arg1 stopRouteGuidance:(id)arg2 componentList:(id)arg3 ;
-(void)updateManeuverInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3 ;
-(void)navigation:(id)arg1 startRouteGuidance:(id)arg2 componentList:(id)arg3 ;
@end

