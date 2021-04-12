/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISDialogOperation.h>

@class UIAlertController, UIWindow;

@interface ISUIKitDialogOperation : ISDialogOperation {

	UIAlertController* _alert;
	UIWindow* _window;

}
-(void)run;
-(void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2 ;
-(void)_showAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanupAlert;
@end

