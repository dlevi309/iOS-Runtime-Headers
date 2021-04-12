/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSRestrictionsPINController.h>

@interface STRestrictionsPINController : PSRestrictionsPINController

@property (assign,nonatomic,__weak) id<STRestrictionsPINControllerDelegate> pinDelegate; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)pinInstructionsPrompt;
-(BOOL)validatePIN:(id)arg1 ;
-(void)setPIN:(id)arg1 ;
-(void)recoveryAuthenticationSucceededForPasscode:(id)arg1 ;
-(void)recoveryAuthenticationFailed:(id)arg1 ;
-(void)_setOptionsTitle:(id)arg1 optionsHandler:(/*^block*/id)arg2 ;
@end

