/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_canShowWhileLocked;
-(BOOL)canBeShownFromSuspendedState;
-(void)dealloc;
-(id)initWithVibratorController:(id)arg1 ;
-(void)setVibrationRecorderViewControllerDelegate:(id<TKVibrationRecorderViewControllerDelegate>)arg1 ;
-(id<TKVibrationRecorderViewControllerDelegate>)vibrationRecorderViewControllerDelegate;
@end

