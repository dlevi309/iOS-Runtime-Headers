/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidLoad;
-(void)willPresentAlertView:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)handleRotation;
-(void)setEditingTextField:(UITextField *)arg1 ;
-(CGRect)userNameFrame;
-(CGRect)passwordFrame;
-(UITextField *)editingTextField;
-(void)acmAlertViewWillBecomeInvisible;
-(void)acmAlertViewWillBecomeVisible;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
@end

