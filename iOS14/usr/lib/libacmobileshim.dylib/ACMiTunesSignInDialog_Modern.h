/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMiTunesSignInDialog.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMiTunesSignInDialog_Modern : ACMiTunesSignInDialog <UIAlertViewDelegate> {

	BOOL _isPresented;

}

@property (assign,nonatomic) BOOL isPresented;                      //@synthesize isPresented=_isPresented - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)viewDidLoad;
-(void)didPresentAlertView:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)isPresented;
-(void)loadView;
-(BOOL)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(void)setIsPresented:(BOOL)arg1 ;
@end

