/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKComplicationCollectionObserver.h>
#import <libobjc.A.dylib/NTKRemoteComplicationProvider.h>

@protocol OS_dispatch_queue;
@class NTKComplicationCollection, NSDictionary, NSMutableDictionary, CLKDevice, NSObject, NSString;

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider> {

	BOOL _loaded;
	NTKComplicationCollection* _remoteComplications;
	NSDictionary* _installedComplications;
	NSMutableDictionary* _syncedComplications;
	CLKDevice* _device;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NTKComplicationCollection * remoteComplications;              //@synthesize remoteComplications=_remoteComplications - In the implementation block
@property (nonatomic,retain) NSDictionary * installedComplications;                        //@synthesize installedComplications=_installedComplications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * syncedComplications;                    //@synthesize syncedComplications=_syncedComplications - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) BOOL loaded;                                                  //@synthesize loaded=_loaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BOOL)loaded;
-(CLKDevice *)device;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)_load;
-(void)dealloc;
-(id)localizedAppNameForClientIdentifier:(id)arg1 ;
-(void)_activeDeviceChanged;
-(void)_appStartedInstall;
-(void)_fetchInstalledApps;
-(void)setRemoteComplications:(NTKComplicationCollection *)arg1 ;
-(NTKComplicationCollection *)remoteComplications;
-(void)setInstalledComplications:(NSDictionary *)arg1 ;
-(void)_queue_reloadApps;
-(void)setSyncedComplications:(NSMutableDictionary *)arg1 ;
-(id)_safeComplications;
-(id)_safeInstalledComplications;
-(void)_reloadApps;
-(void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2 descriptor:(id)arg3 ;
-(void)complicationCollection:(id)arg1 didUpdateComplicationDescriptorsForClient:(id)arg2 ;
-(void)complicationCollectionDidLoad:(id)arg1 ;
-(void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateComplicationDescriptorsForClientIdentifier:(id)arg1 family:(long long)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)notifyAppForClientIdentifier:(id)arg1 ofSharedComplicationDescriptors:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(id)itemIdForVendorWithClientIdentifier:(id)arg1 ;
-(void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2 ;
-(NSDictionary *)installedComplications;
-(NSMutableDictionary *)syncedComplications;
@end

