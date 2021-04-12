/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)popViewController;
-(void)setConfiguratorDelegate:(id<HUConfiguratorDelegate>)arg1 ;
@end

