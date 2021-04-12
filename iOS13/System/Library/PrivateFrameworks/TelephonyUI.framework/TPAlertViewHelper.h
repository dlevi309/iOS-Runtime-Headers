/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface TPAlertViewHelper : NSObject <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	UIAlertView* _alertView;

}

@property (readonly) long long firstOtherButtonIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_workQueue;
+(id)_allHelpersArray;
+(id)alertHelperWithHandler:(/*^block*/id)arg1 style:(long long)arg2 title:(id)arg3 message:(id)arg4 cancelButtonTitle:(id)arg5 otherButtonTitles:(id)arg6 ;
-(void)dealloc;
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(long long)firstOtherButtonIndex;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)show;
-(id)_initWithTitle:(id)arg1 style:(long long)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)dismissWithClickedButtonIndexAnimated:(long long)arg1 ;
-(void)dismissWithCancelAnimated:(BOOL)arg1 ;
-(id)_underlyingAlertView;
@end

