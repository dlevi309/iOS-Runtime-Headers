/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <Preferences/DevicePINController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@class PKPasscodeUpgradeFlowController, NSString;

@interface PKCurrentDevicePasscodeViewController : DevicePINController <DevicePINControllerDelegate> {

	PKPasscodeUpgradeFlowController* _flowController;
	BOOL _viewHasAppeared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)requiresKeyboard;
-(id)stringsBundle;
-(id)pinInstructionsPrompt;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 ;
@end

