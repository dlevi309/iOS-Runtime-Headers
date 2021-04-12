/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)requiresKeyboard;
-(id)initWithPasscodeUpgradeFlowController:(id)arg1 ;
-(id)stringsBundle;
-(id)pinInstructionsPrompt;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

