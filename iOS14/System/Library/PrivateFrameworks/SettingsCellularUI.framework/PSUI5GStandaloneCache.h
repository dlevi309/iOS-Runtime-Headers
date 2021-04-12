/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <libobjc.A.dylib/CoreTelephonyClientCarrierBundleDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDataDelegate.h>

@class CoreTelephonyClient, PSSimStatusCache, Logger, NSMutableDictionary, NSString;

@interface PSUI5GStandaloneCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate> {

	CoreTelephonyClient* _client;
	PSSimStatusCache* _simStatusCache;
	BOOL _cacheNeedsRefresh;
	Logger* _logger;
	NSMutableDictionary* _SACapabilityDict;
	NSMutableDictionary* _SAEnabledDict;
	NSMutableDictionary* _SAStatusDict;

}

@property (setter=ACapabilityDict,retain) NSMutableDictionary * SACapabilityDict;              //@synthesize SACapabilityDict=_SACapabilityDict - In the implementation block
@property (setter=AEnabledDict,retain) NSMutableDictionary * SAEnabledDict;                    //@synthesize SAEnabledDict=_SAEnabledDict - In the implementation block
@property (setter=AStatusDict,retain) NSMutableDictionary * SAStatusDict;                      //@synthesize SAStatusDict=_SAStatusDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)carrierBundleChange:(id)arg1 ;
-(void)currentDataSimChanged:(id)arg1 ;
-(id)initPrivate;
-(void)nrDisableStatusChanged:(id)arg1 status:(id)arg2 ;
-(id)init;
-(void)willEnterForeground;
-(void)clearCache;
-(void)dealloc;
-(id)getLogger;
-(id)initWithCoreTelephonyClient:(id)arg1 simStatusCache:(id)arg2 ;
-(void)fetchNRDisableStatus;
-(void)clearCacheAndRefresh;
-(void)fetch5GSupportAndEnabledStatusIfNeeded;
-(void)setSACapabilityDict:(NSMutableDictionary *)arg1 ;
-(void)setSAEnabledDict:(NSMutableDictionary *)arg1 ;
-(void)setSAStatusDict:(NSMutableDictionary *)arg1 ;
-(void)notifyClientsNeedRefresh;
-(BOOL)is5GSASupportedForContext:(id)arg1 ;
-(BOOL)is5GSAEnabledForContext:(id)arg1 ;
-(id)set5GSAEnabled:(BOOL)arg1 forContext:(id)arg2 ;
-(BOOL)is5GSASwitchUserInteractableForContext:(id)arg1 ;
-(unsigned long long)getUserInteractableStatusReasonMaskForContext:(id)arg1 ;
-(NSMutableDictionary *)SACapabilityDict;
-(NSMutableDictionary *)SAEnabledDict;
-(NSMutableDictionary *)SAStatusDict;
@end

