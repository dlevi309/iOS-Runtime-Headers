/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletionHandler:(/*^block*/id)arg1 ;
-(void)show;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(long long)firstOtherButtonIndex;
-(void)dealloc;
-(id)_initWithTitle:(id)arg1 style:(long long)arg2 message:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)dismissWithClickedButtonIndexAnimated:(long long)arg1 ;
-(void)dismissWithCancelAnimated:(BOOL)arg1 ;
-(id)_underlyingAlertView;
@end

