/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(void)navigation:(id)arg1 accessoryAttached:(id)arg2 ;
-(void)navigation:(id)arg1 accessoryDetached:(id)arg2 ;
-(void)navigation:(id)arg1 startRouteGuidance:(id)arg2 componentList:(id)arg3 ;
-(void)navigation:(id)arg1 stopRouteGuidance:(id)arg2 componentList:(id)arg3 ;
-(ACCiAP2ShimServer *)iap2server;
-(void)setIap2server:(ACCiAP2ShimServer *)arg1 ;
-(void)notifyNavigationAccessoryClientsOfStateChange;
-(void)updateRouteGuidanceInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3 ;
-(void)updateManeuverInfo:(id)arg1 componentIdList:(id)arg2 accessory:(id)arg3 ;
-(NSMutableDictionary *)navigationShimAccessoryList;
-(id)navigationShimAccessoryForConnectionID:(unsigned)arg1 ;
-(id)_navigationShimAccessoryForConnectionIDNoLock:(unsigned)arg1 ;
-(ACCNavigationProvider *)navigationProvider;
-(void)setNavigationProvider:(ACCNavigationProvider *)arg1 ;
-(NSObject*<OS_dispatch_queue>)navigationQueue;
-(void)setNavigationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACCNavigationShim *)navigationShim;
-(void)setNavigationShim:(ACCNavigationShim *)arg1 ;
-(void)setNavigationShimAccessoryList:(NSMutableDictionary *)arg1 ;
@end

