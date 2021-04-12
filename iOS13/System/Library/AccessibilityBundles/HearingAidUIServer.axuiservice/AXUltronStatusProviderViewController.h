/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
*/

#import <UIKitCore/UIViewController.h>

@class UILabel, AXDispatchTimer;

@interface AXUltronStatusProviderViewController : UIViewController {

	UILabel* _listenType;
	UILabel* _confidence;
	AXDispatchTimer* _clearTimer;

}
-(void)viewDidLoad;
-(void)updateDisplay:(id)arg1 confidence:(double)arg2 ;
@end

