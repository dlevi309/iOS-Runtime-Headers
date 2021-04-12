/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCUIBundleController.h>

@interface MCUIBundleController_iOS : MCUIBundleController {

	BOOL _isOnsiteProfileInstallation;

}

@property (assign,nonatomic) BOOL isOnsiteProfileInstallation;              //@synthesize isOnsiteProfileInstallation=_isOnsiteProfileInstallation - In the implementation block
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(BOOL)isOnsiteProfileInstallation;
-(void)_presentInstallProfileVC;
-(void)setIsOnsiteProfileInstallation:(BOOL)arg1 ;
-(id)_createOnsiteProfileInstallationSpecifier;
@end

