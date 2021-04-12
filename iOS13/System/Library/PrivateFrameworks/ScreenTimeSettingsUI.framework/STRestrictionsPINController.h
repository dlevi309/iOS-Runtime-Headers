/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <Preferences/PSRestrictionsPINController.h>

@interface STRestrictionsPINController : PSRestrictionsPINController

@property (assign,nonatomic,__weak) id<STRestrictionsPINControllerDelegate> pinDelegate; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)validatePIN:(id)arg1 ;
-(void)setPIN:(id)arg1 ;
-(id)pinInstructionsPrompt;
-(void)recoveryAuthenticationSucceededForPasscode:(id)arg1 ;
-(void)recoveryAuthenticationFailed:(id)arg1 ;
-(void)_setOptionsTitle:(id)arg1 optionsHandler:(/*^block*/id)arg2 ;
@end

