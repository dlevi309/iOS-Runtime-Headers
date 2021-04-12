/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) BOOL supportsHEIF; 
@property (copy,readonly) NSString * activePairedWatchSystemVersion; 
-(id)init;
-(void)dealloc;
-(NSString *)deviceType;
-(BOOL)isActivityAvailable;
-(NSString *)guid;
-(CGSize)screenSize;
-(NSString *)storefrontIdentifier;
-(NSString *)thinnedApplicationVariantIdentifier;
-(void)accountStoreDidChange:(id)arg1 ;
-(NSString *)buildType;
-(ACAccount *)activeiTunesAccount;
-(double)screenCornerRadius;
-(void)setActiveiTunesAccount:(ACAccount *)arg1 ;
-(BOOL)deviceHasCapabilities:(id)arg1 ;
-(BOOL)isActivePairedWatchSystemVersionAtLeastMajorVersion:(id)arg1 minorVersion:(id)arg2 patchVersion:(id)arg3 ;
-(id)isPairedSystemVersionAtLeast:(id)arg1 ;
-(BOOL)newPaymentMethodEnabled;
-(BOOL)isElectrocardiogramInstallationAllowed;
-(BOOL)isSidepackingEnabled;
-(BOOL)supportsHEIF;
-(NSString *)activePairedWatchSystemVersion;
@end

