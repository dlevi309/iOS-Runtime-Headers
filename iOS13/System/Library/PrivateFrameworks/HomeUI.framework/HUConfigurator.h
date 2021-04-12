/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/HUConfigurationViewControllerDelegate.h>

@protocol HUConfiguratorDelegate;
@class NSMutableArray, NSArray, NSString;

@interface HUConfigurator : NSObject <HUConfigurationViewControllerDelegate> {

	NSMutableArray* _displayedViewControllers;
	id<HUConfiguratorDelegate> _configuratorDelegate;

}

@property (assign,nonatomic,__weak) id<HUConfiguratorDelegate> configuratorDelegate;                                //@synthesize configuratorDelegate=_configuratorDelegate - In the implementation block
@property (nonatomic,readonly) UIViewController*<HUConfigurationViewController> currentViewController; 
@property (nonatomic,readonly) NSArray * displayedViewControllers;                                                  //@synthesize displayedViewControllers=_displayedViewControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController*<HUConfigurationViewController>)currentViewController;
-(void)popViewController;
-(void)viewController:(id)arg1 didFinishWithConfigurationResults:(id)arg2 ;
-(void)viewControllerDidGoBack:(id)arg1 ;
-(id)initWithConfiguratorDelegate:(id)arg1 initialViewController:(id)arg2 ;
-(void)viewControllerWillAppear:(id)arg1 ;
-(id<HUConfiguratorDelegate>)configuratorDelegate;
-(id)_nextViewControllerForResults:(id)arg1 ;
-(void)_addViewControllerToDisplay:(id)arg1 ;
-(NSArray *)displayedViewControllers;
-(void)_removeDisplayedViewController;
-(void)pushViewControllerForResults:(id)arg1 ;
-(void)setConfiguratorDelegate:(id<HUConfiguratorDelegate>)arg1 ;
@end

