/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <UIKitCore/UIResponder.h>

@interface TeaUI.MenuManager : UIResponder {

	 menu;
	 commandCenter;
	 menuItems;
	 alternateMenuItems;

}
-(void)handleMenuCommandWithSender:(id)arg1 ;
-(void)handleAlternateMenuCommandWithSender:(id)arg1 ;
-(void)handleShareCommandWithSender:(id)arg1 ;
-(id)init;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)validateCommand:(id)arg1 ;
-(void)buildMenuWithBuilder:(id)arg1 ;
@end

