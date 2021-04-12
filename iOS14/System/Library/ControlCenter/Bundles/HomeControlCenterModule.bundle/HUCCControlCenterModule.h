/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <libobjc.A.dylib/HUCCModuleContentViewControllerDelegate.h>
#import <libobjc.A.dylib/HUCCLockStateHandlerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@protocol CCUIContentModuleContentViewController;
@class CCUIContentModuleContext, UIViewController, HUCCLockStateHandler, NSString;

@interface HUCCControlCenterModule : NSObject <HUCCModuleContentViewControllerDelegate, HUCCLockStateHandlerDelegate, CCUIContentModule> {

	UIViewController*<CCUIContentModuleContentViewController> _contentViewController;
	CCUIContentModuleContext* _contentModuleContext;
	HUCCLockStateHandler* _lockStateHandler;

}

@property (nonatomic,retain) UIViewController*<CCUIContentModuleContentViewController> contentViewController;                      //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,retain) HUCCLockStateHandler * lockStateHandler;                                                              //@synthesize lockStateHandler=_lockStateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)setContentViewController:(UIViewController*<CCUIContentModuleContentViewController>)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(UIViewController*<CCUIContentModuleContentViewController>)contentViewController;
-(HUCCLockStateHandler *)lockStateHandler;
-(void)moduleContentViewController:(id)arg1 viewWillAppear:(BOOL)arg2 ;
-(void)moduleContentViewController:(id)arg1 viewDidDisappear:(BOOL)arg2 ;
-(void)launchHomeAppForModuleViewController:(id)arg1 ;
-(BOOL)isDeviceUnlockedForModuleViewController:(id)arg1 ;
-(void)setLockStateHandler:(HUCCLockStateHandler *)arg1 ;
-(void)lockStateWasUpdated:(BOOL)arg1 ;
@end

