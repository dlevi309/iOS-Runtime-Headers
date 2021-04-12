/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
*/

#import <UIKitCore/UIViewController.h>

@class BTSDevice;

@interface BTSFitTestWelcomeController : UIViewController {

	BTSDevice* _currentDevice;

}

@property (nonatomic,retain) BTSDevice * currentDevice;              //@synthesize currentDevice=_currentDevice - In the implementation block
-(id)init;
-(BTSDevice *)currentDevice;
-(void)loadView;
-(void)viewDidLoad;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)continueToFitTest;
-(void)cancelFitTest;
@end

