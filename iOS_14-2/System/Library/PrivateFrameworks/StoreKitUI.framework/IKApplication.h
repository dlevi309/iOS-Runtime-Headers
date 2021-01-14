/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol IKApplication <NSObject>
@optional
-(id)activeDocument;
-(id)bagBootURLKey;
-(id)offlineJSURL;
-(id)appJSCachePath;
-(id)appLocalJSURL;
-(BOOL)shouldAllowRemoteInspection;
-(BOOL)appIsTrusted;
-(BOOL)appIsPrivileged;
-(id)appLaunchParamsResolvedBootURLKey;
-(id)appLaunchParams;
-(id)viewElementRegistry;
-(BOOL)appUsesDefaultStyleSheets;
-(id)appTraitCollection;

@required
-(id)appIdentifier;
-(id)vendorIdentifier;
-(id)appJSURL;
-(BOOL)shouldIgnoreJSValidation;
-(id)localStorage;
-(id)vendorStorage;
-(id)userDefaultsStorage;

@end

