/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)specifiers;
-(FPAccessControlManager *)accessManager;
-(id)applicationProxiesDictionary;
-(id)bundleIdentifiersAccessingFiles;
-(void)setAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)accesssForSpecifier:(id)arg1 ;
-(void)setCameraAccess:(id)arg1 forSpecifier:(id)arg2 ;
-(id)cameraAccessForSpecifier:(id)arg1 ;
-(BOOL)isAccess;
-(void)setIsAccess:(BOOL)arg1 ;
-(void)setAccessManager:(FPAccessControlManager *)arg1 ;
@end

