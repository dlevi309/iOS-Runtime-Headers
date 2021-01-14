/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

