/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/AppStoreKit-Structs.h>
#import <libobjc.A.dylib/ASKClientExports.h>

@class NSString, ACAccount;

@interface ASKClient : NSObject <ASKClientExports> {

	ACAccount* _activeiTunesAccount;

}

@property (retain) ACAccount * activeiTunesAccount;                                    //@synthesize activeiTunesAccount=_activeiTunesAccount - In the implementation block
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
-(NSString *)deviceType;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(NSString *)guid;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(id)init;
-(NSString *)storefrontIdentifier;
-(double)screenCornerRadius;
-(void)accountStoreDidChange:(id)arg1 ;
-(id)isPairedSystemVersionAtLeast:(id)arg1 ;
-(CGSize)screenSize;
-(void)setActiveiTunesAccount:(ACAccount *)arg1 ;
-(BOOL)isAutomaticDownloadingEnabled;
-(BOOL)deviceHasCapabilities:(id)arg1 ;
-(BOOL)supportsHEIF;
-(BOOL)isTinkerWatch;
-(BOOL)deletableSystemAppCanBeInstalledOnWatchWithBundleID:(id)arg1 ;
-(NSString *)thinnedApplicationVariantIdentifier;
-(BOOL)isSidepackingEnabled;
-(BOOL)isActivityAvailable;
-(NSString *)activePairedWatchSystemVersion;
-(NSString *)buildType;
-(ACAccount *)activeiTunesAccount;
-(BOOL)newPaymentMethodEnabled;
-(void)dealloc;
@end

