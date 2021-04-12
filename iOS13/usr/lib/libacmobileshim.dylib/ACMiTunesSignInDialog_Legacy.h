/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libacmobileshim.dylib/ACMiTunesSignInDialog.h>
#import <libobjc.A.dylib/acmAlertViewDelegateProtocol.h>

@class UITextField, NSString;

@interface ACMiTunesSignInDialog_Legacy : ACMiTunesSignInDialog <acmAlertViewDelegateProtocol> {

	UITextField* _editingTextField;

}

@property (nonatomic,retain) UITextField * editingTextField;              //@synthesize editingTextField=_editingTextField - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)handleRotation;
-(void)setEditingTextField:(UITextField *)arg1 ;
-(CGRect)userNameFrame;
-(CGRect)passwordFrame;
-(UITextField *)editingTextField;
-(void)acmAlertViewWillBecomeInvisible;
-(void)acmAlertViewWillBecomeVisible;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
@end

