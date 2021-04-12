/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STListViewController.h>

@protocol STRootViewModelCoordinator;
@class NSObject;

@interface STFamilyRootViewController : STListViewController {

	NSObject*<STRootViewModelCoordinator> _coordinator;

}

@property (nonatomic,readonly) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(id)init;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
@end

