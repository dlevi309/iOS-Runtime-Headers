/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKBundleComplicationDataSourceLoader;

@interface NTKBundleComplicationManager : NSObject {

	NTKBundleComplicationDataSourceLoader* _loader;

}

@property (nonatomic,readonly) NTKBundleComplicationDataSourceLoader * loader;              //@synthesize loader=_loader - In the implementation block
+(id)sharedManager;
-(NTKBundleComplicationDataSourceLoader *)loader;
-(id)init;
-(id)localizedAppNameForBundleIdentifier:(id)arg1 ;
-(BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)arg1 ;
-(Class)dataSourceClassForBundleComplication:(id)arg1 ;
-(BOOL)bundleExistsWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
-(id)groupIdentifierForBundleIdentifier:(id)arg1 ;
-(id)localizedComplicationNameForBundleIdentifier:(id)arg1 ;
-(void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(id)arg2 withBlock:(/*^block*/id)arg3 ;
@end

