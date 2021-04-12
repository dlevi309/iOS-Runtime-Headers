/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)configurationProfiles;
+(BOOL)isForPairedDevice;
+(id)provisioningProfilesWithValidityCheck:(BOOL)arg1 ;
+(id)provisioningProfiles;
-(void)dealloc;
-(void)load;
-(void)unload;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(void)setParentController:(PSListController *)arg1 ;
-(PSListController *)parentController;
-(id)_specifier;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(void)incrementNanoProfileCount;
-(void)decrementNanoProfileCount;
-(void)setNanoProfileCount:(unsigned long long)arg1 ;
-(void)_unpairedNotification:(id)arg1 ;
-(void)updateUI:(id)arg1 ;
-(id)_profileInfoForSpecifier:(id)arg1 ;
-(unsigned long long)nanoProfileCount;
-(NPSDomainAccessor *)nanoDomainAccessor;
-(Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1 ;
-(BOOL)_isProfileSectionEmpty;
-(void)_updateSpecifierProfileInfo;
-(void)_updateSpecifierControllerClass;
-(void)setNanoDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

