/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <Preferences/PSSpecifier.h>

@class PSListController;

@interface PSUICellularDataFallbackSwitchSpecifier : PSSpecifier {

	PSListController* _hostController;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
-(PSListController *)hostController;
-(void)setHostController:(PSListController *)arg1 ;
-(void)setFallbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isFallbackEnabled:(id)arg1 ;
-(id)initWithHostController:(id)arg1 ;
@end

