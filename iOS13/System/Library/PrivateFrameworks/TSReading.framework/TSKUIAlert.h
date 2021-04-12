/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSKAbstractAlert.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface TSKUIAlert : TSKAbstractAlert <UIAlertViewDelegate> {

	UIAlertView* _alertView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseMockUIAlert:(BOOL)arg1 ;
+(id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(void)dealloc;
-(long long)addButtonWithTitle:(id)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)cancelButtonIndex;
-(id)buttonTitleAtIndex:(long long)arg1 ;
-(long long)numberOfButtons;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 ;
-(void)showAlert;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 otherOtherButtonTitle:(id)arg5 ;
@end

