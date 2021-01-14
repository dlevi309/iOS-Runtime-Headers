/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <iTunesStoreUI/SUPurchaseContinuation.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIActionSheet, UIAlertView, CNContactPickerViewController, NSString;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <CNContactPickerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {

	UIActionSheet* _actionSheet;
	UIAlertView* _alertView;
	CNContactPickerViewController* _contactPicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)_dismissContactPicker;
-(id)initWithPurchase:(id)arg1 ;
-(void)actionSheetCancel:(id)arg1 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)_destroyActionSheet;
-(void)_destroyAlertView;
-(id)_copyAllowedToneStyles;
-(void)_showPeoplePicker;
-(void)_pickAssigneeToneStyle;
@end

