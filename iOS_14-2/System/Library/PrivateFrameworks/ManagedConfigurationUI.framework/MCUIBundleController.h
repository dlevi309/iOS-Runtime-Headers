/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <Preferences/PSBundleController.h>

@class PSListController, PSSpecifier, NPSDomainAccessor;

@interface MCUIBundleController : PSBundleController {

	PSListController* _parentController;
	PSSpecifier* _specifier;
	NPSDomainAccessor* _nanoDomainAccessor;

}

@property (assign,nonatomic,__weak) PSListController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                 //@synthesize specifier=_specifier - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * nanoDomainAccessor;                  //@synthesize nanoDomainAccessor=_nanoDomainAccessor - In the implementation block
@property (assign,nonatomic) unsigned long long nanoProfileCount; 
+(id)sharedInstance;
+(id)provisioningProfiles;
+(id)configurationProfiles;
+(BOOL)isForPairedDevice;
+(id)provisioningProfilesWithValidityCheck:(BOOL)arg1 ;
-(void)load;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(NPSDomainAccessor *)nanoDomainAccessor;
-(void)unload;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)specifier;
-(void)decrementNanoProfileCount;
-(unsigned long long)nanoProfileCount;
-(void)_unpairedNotification:(id)arg1 ;
-(void)setParentController:(PSListController *)arg1 ;
-(void)_updateSpecifierControllerClass;
-(void)incrementNanoProfileCount;
-(void)setNanoProfileCount:(unsigned long long)arg1 ;
-(void)setNanoDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(PSListController *)parentController;
-(BOOL)_isProfileSectionEmpty;
-(Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1 ;
-(void)updateUI:(id)arg1 ;
-(id)_profileInfoForSpecifier:(id)arg1 ;
-(void)_updateSpecifierProfileInfo;
-(id)_specifier;
-(void)dealloc;
@end

