/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKBundleComplicationProvider.h>

@class NTKBundleComplicationDataSourceLoader, NSString;

@interface NTKBundleComplicationManager : NSObject <NTKBundleComplicationProvider> {

	NTKBundleComplicationDataSourceLoader* _loader;

}

@property (nonatomic,readonly) NTKBundleComplicationDataSourceLoader * loader;              //@synthesize loader=_loader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)init;
-(NTKBundleComplicationDataSourceLoader *)loader;
-(id)localizedAppNameForBundleIdentifier:(id)arg1 ;
-(void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(Class)dataSourceClassForBundleComplication:(id)arg1 ;
-(BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)arg1 ;
-(BOOL)bundleExistsWithIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 ;
@end

