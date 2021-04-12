/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSMutableArray, NSString;

@interface SKUIStoreDialogController : NSObject <UIAlertViewDelegate> {

	NSMutableArray* _alerts;
	NSMutableArray* _dialogs;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)presentDialog:(id)arg1 ;
-(void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(void)presentDialog:(id)arg1 fromViewController:(id)arg2 ;
@end

