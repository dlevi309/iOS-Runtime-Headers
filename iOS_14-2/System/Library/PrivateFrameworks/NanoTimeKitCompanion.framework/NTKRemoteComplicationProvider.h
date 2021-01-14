/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKRemoteComplicationProvider <NSObject>
@required
-(id)localizedAppNameForClientIdentifier:(id)arg1;
-(void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(/*^block*/id)arg2;
-(void)enumerateComplicationDescriptorsForClientIdentifier:(id)arg1 family:(long long)arg2 withBlock:(/*^block*/id)arg3;
-(void)notifyAppForClientIdentifier:(id)arg1 ofSharedComplicationDescriptors:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(BOOL)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
-(id)itemIdForVendorWithClientIdentifier:(id)arg1;

@end

