/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) BOOL supportsHEIF; 
@property (copy,readonly) NSString * activePairedWatchSystemVersion; 
@required
-(NSString *)deviceType;
-(BOOL)isActivityAvailable;
-(NSString *)guid;
-(CGSize)screenSize;
-(NSString *)storefrontIdentifier;
-(NSString *)thinnedApplicationVariantIdentifier;
-(NSString *)buildType;
-(double)screenCornerRadius;
-(BOOL)deviceHasCapabilities:(id)arg1;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3;
-(id)isPairedSystemVersionAtLeast:(id)arg1;
-(BOOL)newPaymentMethodEnabled;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(BOOL)isSidepackingEnabled;
-(BOOL)supportsHEIF;
-(NSString *)activePairedWatchSystemVersion;

@end

