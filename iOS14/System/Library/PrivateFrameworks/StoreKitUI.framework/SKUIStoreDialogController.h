/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)presentDialog:(id)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(void)_performActionForDialog:(id)arg1 buttonIndex:(long long)arg2 ;
-(void)presentDialog:(id)arg1 fromViewController:(id)arg2 ;
@end

