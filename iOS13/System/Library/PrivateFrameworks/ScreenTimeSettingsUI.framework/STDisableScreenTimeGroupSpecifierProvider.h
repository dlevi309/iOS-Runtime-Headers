/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _disableScreenTimeSpecifier;

}

@property (nonatomic,retain) PSSpecifier * disableScreenTimeSpecifier;              //@synthesize disableScreenTimeSpecifier=_disableScreenTimeSpecifier - In the implementation block
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
-(void)confirmDisableScreenTime:(id)arg1 ;
-(id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg1 action:(SEL)arg2 ;
-(void)setDisableScreenTimeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)disableScreenTimeSpecifier;
-(void)updateDisableScreenTimeSpecifier;
-(id)disableScreenTimeConfirmationPrompt;
-(void)disableScreenTime:(id)arg1 ;
@end

