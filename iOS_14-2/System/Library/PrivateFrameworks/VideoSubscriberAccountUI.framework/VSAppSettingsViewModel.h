/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class NSString, UIImage, VSPrivacyFacade, LSApplicationWorkspace, VSRestrictionsCenter, VSAppDescription, VSOptional, NSURL;

@interface VSAppSettingsViewModel : NSObject <LSApplicationWorkspaceObserverProtocol> {

	int _registrationToken;
	NSString* _adamID;
	NSString* _bundleID;
	UIImage* _icon;
	NSString* _displayName;
	NSString* _storeName;
	long long _installState;
	long long _privacyState;
	VSPrivacyFacade* _privacyFacade;
	LSApplicationWorkspace* _workspace;
	VSRestrictionsCenter* _restrictionsCenter;
	CFBundleRef _bundle;
	VSAppDescription* _appDescription;
	NSString* _buyParams;
	VSOptional* _voucher;

}

@property (assign,nonatomic) long long installState;                                 //@synthesize installState=_installState - In the implementation block
@property (assign,nonatomic) long long privacyState;                                 //@synthesize privacyState=_privacyState - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) VSPrivacyFacade * privacyFacade;                        //@synthesize privacyFacade=_privacyFacade - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * workspace;                     //@synthesize workspace=_workspace - In the implementation block
@property (assign,nonatomic) int registrationToken;                                  //@synthesize registrationToken=_registrationToken - In the implementation block
@property (nonatomic,retain) VSRestrictionsCenter * restrictionsCenter;              //@synthesize restrictionsCenter=_restrictionsCenter - In the implementation block
@property (assign,nonatomic) CFBundleRef bundle;                                     //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,retain) VSAppDescription * appDescription;                      //@synthesize appDescription=_appDescription - In the implementation block
@property (nonatomic,copy) NSString * buyParams;                                     //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,retain) VSOptional * voucher;                                   //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,copy,readonly) NSString * adamID;                               //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                             //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appStoreURL; 
@property (nonatomic,copy,readonly) NSString * storeName;                            //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * installationTitle; 
@property (nonatomic,copy,readonly) NSString * unavailableTitle; 
@property (nonatomic,copy,readonly) NSString * launchAppTitle; 
@property (nonatomic,readonly) BOOL canChangePrivacyAccess; 
@property (assign,getter=isAccessGranted,nonatomic) BOOL accessGranted; 
@property (nonatomic,readonly) BOOL canRevokeVoucher; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingAccessGranted;
-(CFBundleRef)bundle;
-(VSOptional *)voucher;
-(void)setBundle:(CFBundleRef)arg1 ;
-(long long)installState;
-(void)setInstallState:(long long)arg1 ;
-(int)registrationToken;
-(NSString *)storeName;
-(id)init;
-(UIImage *)icon;
-(void)setWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(LSApplicationWorkspace *)workspace;
-(id)name;
-(void)applicationsWillUninstall:(id)arg1 ;
-(NSString *)description;
-(void)setBuyParams:(NSString *)arg1 ;
-(NSString *)unavailableTitle;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setRegistrationToken:(int)arg1 ;
-(NSString *)adamID;
-(NSString *)bundleID;
-(id)appBundleIDs;
-(void)applicationsWillInstall:(id)arg1 ;
-(void)applicationsDidFailToUninstall:(id)arg1 ;
-(BOOL)isAccessGranted;
-(void)setVoucher:(VSOptional *)arg1 ;
-(NSURL *)appStoreURL;
-(void)launchApp;
-(void)applicationsDidFailToInstall:(id)arg1 ;
-(NSString *)buyParams;
-(id)initWithApplicationWorkspace:(id)arg1 ;
-(NSString *)displayName;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(id)appAdamIDs;
-(id)appIconURLForSize:(CGSize)arg1 ;
-(VSAppDescription *)appDescription;
-(void)setAppDescription:(VSAppDescription *)arg1 ;
-(VSPrivacyFacade *)privacyFacade;
-(id)iconURLForSize:(CGSize)arg1 ;
-(void)_updatePrivacyState;
-(id)initWithBundle:(CFBundleRef)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 ;
-(void)setPrivacyState:(long long)arg1 ;
-(long long)privacyState;
-(VSRestrictionsCenter *)restrictionsCenter;
-(void)_grantPrivacyAccess;
-(void)_denyPrivacyAccess;
-(BOOL)canChangePrivacyAccess;
-(id)initWithBundle:(CFBundleRef)arg1 restrictionsCenter:(id)arg2 privacyFacade:(id)arg3 adamID:(id)arg4 ;
-(id)initWithAppDescription:(id)arg1 privacyVoucher:(id)arg2 restrictionsCenter:(id)arg3 privacyFacade:(id)arg4 ;
-(NSString *)installationTitle;
-(NSString *)launchAppTitle;
-(BOOL)canRevokeVoucher;
-(void)revokeVoucher;
-(void)installApp;
-(void)setAccessGranted:(BOOL)arg1 ;
-(void)setPrivacyFacade:(VSPrivacyFacade *)arg1 ;
-(void)setRestrictionsCenter:(VSRestrictionsCenter *)arg1 ;
@end

