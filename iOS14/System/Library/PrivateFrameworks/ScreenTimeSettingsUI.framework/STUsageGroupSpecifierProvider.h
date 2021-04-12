/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCoordinator:(NSObject*<STRootViewModelCoordinator>)arg1 ;
-(void)invalidate;
-(NSObject*<STRootViewModelCoordinator>)coordinator;
@end

