/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSKAbstractAlert.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIActionSheet, UIView, NSString;

@interface TSKUIActionSheet : TSKAbstractAlert <UIActionSheetDelegate> {

	UIActionSheet* _actionSheet;
	UIView* _targetView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alertWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5 ;
-(void)dealloc;
-(long long)addButtonWithTitle:(id)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)cancelButtonIndex;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(long long)numberOfButtons;
-(void)showAlert;
-(id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5 ;
@end

