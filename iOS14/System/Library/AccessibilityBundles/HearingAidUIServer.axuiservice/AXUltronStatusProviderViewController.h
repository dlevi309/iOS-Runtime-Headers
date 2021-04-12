/*
* Generated on Thursday, January 14, 2021 at 2:29:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

