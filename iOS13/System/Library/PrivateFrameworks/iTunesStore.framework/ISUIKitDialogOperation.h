/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

