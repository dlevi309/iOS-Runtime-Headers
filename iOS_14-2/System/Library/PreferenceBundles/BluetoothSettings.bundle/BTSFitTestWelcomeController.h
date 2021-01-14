/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidLoad;
-(void)loadView;
-(void)setCurrentDevice:(BTSDevice *)arg1 ;
-(void)deviceDisconnectedHandler:(id)arg1 ;
-(void)powerChangedHandler:(id)arg1 ;
-(void)continueToFitTest;
-(void)cancelFitTest;
@end

