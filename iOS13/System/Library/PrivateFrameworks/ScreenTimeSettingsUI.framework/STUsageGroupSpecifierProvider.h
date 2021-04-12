/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/STGroupSpecifierProvider.h>

@protocol STRootViewModelCoordinator;
@class NSObject;

@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider {

	NSObject*<STRootViewModelCoordinator> _coordinator;

}

@property (nonatomic,retain) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
+(id)providerWithCoordinator:(id)arg1 ;
-(void)invalidate;
-(void)setCoordinator:(NSObject*<STRootViewModelCoordinator>)arg1 ;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
@end

