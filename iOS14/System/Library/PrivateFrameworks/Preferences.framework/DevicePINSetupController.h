/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController {

	BOOL _success;
	BOOL _allowOptionsButton;

}

@property (assign,nonatomic) BOOL allowOptionsButton;              //@synthesize allowOptionsButton=_allowOptionsButton - In the implementation block
-(BOOL)success;
-(void)setAllowOptionsButton:(BOOL)arg1 ;
-(id)init;
-(CGSize)preferredContentSize;
-(BOOL)allowOptionsButton;
-(BOOL)canBeShownFromSuspendedState;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(BOOL)usePopupStyle;
-(BOOL)popupStyleIsModal;
@end

