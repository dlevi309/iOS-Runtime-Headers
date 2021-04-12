/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

@class NSString;


@protocol ASKClientExports <JSExport>
@property (readonly) CGSize screenSize; 
@property (readonly) double screenCornerRadius; 
@property (copy,readonly) NSString * guid; 
@property (copy,readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) BOOL newPaymentMethodEnabled; 
@property (copy,readonly) NSString * storefrontIdentifier; 
@property (readonly) NSString * deviceType; 
@property (readonly) NSString * buildType; 
@property (readonly) BOOL isActivityAvailable; 
@property (readonly) BOOL isElectrocardiogramInstallationAllowed; 
@property (readonly) BOOL isSidepackingEnabled; 
@property (readonly) BOOL isTinkerWatch; 
@property (readonly) BOOL supportsHEIF; 
@property (copy,readonly) NSString * activePairedWatchSystemVersion; 
@required
-(NSString *)deviceType;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(NSString *)guid;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;
-(NSString *)storefrontIdentifier;
-(double)screenCornerRadius;
-(id)isPairedSystemVersionAtLeast:(id)arg1;
-(CGSize)screenSize;
-(BOOL)isAutomaticDownloadingEnabled;
-(BOOL)deviceHasCapabilities:(id)arg1;
-(BOOL)supportsHEIF;
-(BOOL)isTinkerWatch;
-(BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1;
-(NSString *)thinnedApplicationVariantIdentifier;
-(BOOL)isSidepackingEnabled;
-(BOOL)isActivityAvailable;
-(NSString *)activePairedWatchSystemVersion;
-(NSString *)buildType;
-(BOOL)newPaymentMethodEnabled;

@end

