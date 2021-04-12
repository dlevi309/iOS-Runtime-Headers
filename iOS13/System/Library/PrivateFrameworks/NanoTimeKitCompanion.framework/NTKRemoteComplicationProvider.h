/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKRemoteComplicationProvider <NSObject>
@required
-(void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(/*^block*/id)arg2;
-(BOOL)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
-(id)localizedAppNameForClientIdentifier:(id)arg1;

@end

