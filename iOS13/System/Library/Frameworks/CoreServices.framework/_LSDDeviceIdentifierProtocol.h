/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol _LSDDeviceIdentifierProtocol
@required
-(void)clearAllIdentifiersOfType:(long long)arg1;
-(void)getIdentifierOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
-(void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;

@end

