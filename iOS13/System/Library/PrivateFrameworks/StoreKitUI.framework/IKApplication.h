/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol IKApplication <NSObject>
@optional
-(id)activeDocument;
-(BOOL)appIsTrusted;
-(id)appJSCachePath;
-(id)appLocalJSURL;
-(id)bagBootURLKey;
-(id)viewElementRegistry;
-(BOOL)appUsesDefaultStyleSheets;
-(id)appTraitCollection;
-(id)offlineJSURL;
-(BOOL)appIsPrivileged;
-(BOOL)shouldAllowRemoteInspection;
-(id)appLaunchParams;
-(id)appLaunchParamsResolvedBootURLKey;

@required
-(id)localStorage;
-(id)appIdentifier;
-(id)vendorIdentifier;
-(id)vendorStorage;
-(id)userDefaultsStorage;
-(id)appJSURL;
-(BOOL)shouldIgnoreJSValidation;

@end

