/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

