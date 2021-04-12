/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class TKVibrationRecorderContentViewController, NSString;

@interface TKVibrationRecorderViewController : UINavigationController <PSStateRestoration> {

	TKVibrationRecorderContentViewController* _vibrationRecorderContentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate; 
-(void)dealloc;
-(BOOL)_canShowWhileLocked;
-(BOOL)canBeShownFromSuspendedState;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setVibrationRecorderViewControllerDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(id<TKVibrationRecorderViewControllerDelegate>)vibrationRecorderViewControllerDelegate;
@end

