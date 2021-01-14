/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/VPNPreferences.bundle/VPNPreferences
*/


@protocol OS_dispatch_queue;
#import <VPNPreferences/VPNPreferences-Structs.h>
@class VPNConnection, NSUUID, NSMutableArray, NSMutableDictionary, NSArray, NEConfigurationManager, NSObject;

@interface VPNConnectionStore : NSObject {

	BOOL _gradeCurrentConnectionHasBeenSet[5];
	VPNConnection* _gradeCurrentConnection[5];
	NSUUID* _gradeActiveVPNID[5];
	BOOL _gradeActiveVPNIDLoaded[5];
	NSMutableArray* _gradeVPNServiceIDs[5];
	NSMutableDictionary* _connectionDict[5];
	unsigned _vpnServiceCountDirty;
	unsigned _vpnServiceCount;
	NSArray* _configurations;
	NEConfigurationManager* _configurationManager;
	NSObject*<OS_dispatch_queue> _storeQueue;

}

@property (retain) NSArray * configurations;                                   //@synthesize configurations=_configurations - In the implementation block
@property (retain) NEConfigurationManager * configurationManager;              //@synthesize configurationManager=_configurationManager - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> storeQueue;                    //@synthesize storeQueue=_storeQueue - In the implementation block
@property (assign) unsigned vpnServiceCountDirty;                              //@synthesize vpnServiceCountDirty=_vpnServiceCountDirty - In the implementation block
@property (assign) unsigned vpnServiceCount;                                   //@synthesize vpnServiceCount=_vpnServiceCount - In the implementation block
+(id)sharedInstance;
+(unsigned long long)connectionTypeFromVPNType:(CFStringRef)arg1 ;
+(CFStringRef)vpnTypeFromConnectionType:(unsigned long long)arg1 ;
+(id)applicationNameForConfiguration:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(NEConfigurationManager *)configurationManager;
-(void)setConfigurationManager:(NEConfigurationManager *)arg1 ;
-(unsigned)vpnServiceCount;
-(BOOL)alwaysOnToggleEnabledForServiceID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)storeQueue;
-(id)init;
-(BOOL)isProfileBacked:(id)arg1 ;
-(id)currentConnectionWithGrade:(unsigned long long)arg1 ;
-(id)organizationForService:(SCNetworkServiceRef)arg1 ;
-(unsigned)vpnServiceCountDirty;
-(BOOL)isActiveVPNID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)setStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)aggregateStatusText;
-(void)setActiveVPNID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)isTypeEnabledWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 outProviderAvailable:(BOOL*)arg3 ;
-(void)_connectionsChanged;
-(id)getProfileIDForServiceID:(id)arg1 ;
-(id)currentConnection:(BOOL)arg1 withGrade:(unsigned long long)arg2 ;
-(BOOL)createVPNWithOptions:(id)arg1 ;
-(id)vpnServicesForCurrentSetWithGrade:(unsigned long long)arg1 ;
-(id)connectionWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)_configurationChanged;
-(BOOL)enable:(BOOL)arg1 serviceID:(id)arg2 withGrade:(unsigned long long)arg3 ;
-(void)setVpnServiceCount:(unsigned)arg1 ;
-(BOOL)deleteVPNWithServiceID:(id)arg1 ;
-(id)activeVPNIDWithGrade:(unsigned long long)arg1 ;
-(id)vpnServiceCountWithGrade:(unsigned long long)arg1 ;
-(void)setConfigurations:(NSArray *)arg1 ;
-(unsigned long long)currentOnlyConnectionGrade;
-(void)removeConnection:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)organizationForServiceID:(id)arg1 ;
-(BOOL)setOptions:(id)arg1 toConfiguration:(id)arg2 ;
-(id)aggregateAlert;
-(id)_defaultDictForType:(unsigned long long)arg1 ;
-(BOOL)updateVPNWithServiceID:(id)arg1 withOptions:(id)arg2 ;
-(id)queue;
-(BOOL)isUserCreatedVPN:(id)arg1 ;
-(id)currentConnectionsWithGrade:(unsigned long long)arg1 ;
-(id)activeVPNIDsWithGrade:(unsigned long long)arg1 ;
-(id)vpnServiceTotalCount;
-(NSArray *)configurations;
-(id)currentAppVPNConnections:(BOOL)arg1 ;
-(id)appNameForServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(id)copyActiveVPNIDsFromPrefsForGrade:(unsigned long long)arg1 ;
-(id)optionsForServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)triggerLocalAuthenticationForConfigurationIdentifier:(id)arg1 requestedByApp:(id)arg2 ;
-(BOOL)isEnabledWithServiceID:(id)arg1 withGrade:(unsigned long long)arg2 ;
-(void)setVpnServiceCountDirty:(unsigned)arg1 ;
-(BOOL)disableToggle;
-(void)dealloc;
-(unsigned long long)aggregateStatus;
-(BOOL)gradePresent:(unsigned long long)arg1 ;
-(BOOL)saveActiveVPNIDToPreferences:(id)arg1 withGrade:(unsigned long long)arg2 ;
@end

