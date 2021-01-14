/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
*/

#import <Preferences/PSListController.h>

@class FPAccessControlManager;

@interface PUIFileAccessController : PSListController {

	BOOL _isAccess;
	FPAccessControlManager* _accessManager;

}

@property (assign,nonatomic) BOOL isAccess;                                       //@synthesize isAccess=_isAccess - In the implementation block
@property (nonatomic,retain) FPAccessControlManager * accessManager;              //@synthesize accessManager=_accessManager - In the implementation block
-(id)specifiers;
-(id)init;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(FPAccessControlManager *)accessManager;
-(id)applicationProxiesDictionary;
-(id)bundleIdentifiersAccessingFiles;
-(void)setCameraAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)cameraAccessForSpecifier:(id)arg1 ;
-(BOOL)isAccess;
-(void)setIsAccess:(BOOL)arg1 ;
-(void)setAccessManager:(FPAccessControlManager *)arg1 ;
@end

