/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKComplicationCollectionObserver.h>
#import <libobjc.A.dylib/NTKRemoteComplicationProvider.h>

@protocol OS_dispatch_queue;
@class NTKComplicationCollection, NSDictionary, NSMutableDictionary, CLKDevice, NSObject, NSString;

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(CLKDevice *)device;
-(void)_load;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_fetchInstalledApps;
-(void)_activeDeviceChanged;
-(void)_appStartedInstall;
-(void)setRemoteComplications:(NTKComplicationCollection *)arg1 ;
-(void)setInstalledComplications:(NSDictionary *)arg1 ;
-(void)_queue_reloadApps;
-(void)setSyncedComplications:(NSMutableDictionary *)arg1 ;
-(id)_safeComplications;
-(id)_safeInstalledComplications;
-(void)_reloadApps;
-(void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2 ;
-(void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2 ;
-(void)complicationCollectionDidLoad:(id)arg1 ;
-(void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(id)localizedAppNameForClientIdentifier:(id)arg1 ;
-(NTKComplicationCollection *)remoteComplications;
-(NSDictionary *)installedComplications;
-(NSMutableDictionary *)syncedComplications;
@end

