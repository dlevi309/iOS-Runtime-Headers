/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKBundleComplicationProvider <NSObject>
@required
-(id)localizedAppNameForBundleIdentifier:(id)arg1;
-(void)enumerateBundlesForComplicationFamily:(long long)arg1 device:(id)arg2 withBlock:(/*^block*/id)arg3;
-(Class)dataSourceClassForBundleComplication:(id)arg1;
-(BOOL)bundleComplicationExistsForAppBundleIdentifier:(id)arg1;

@end

