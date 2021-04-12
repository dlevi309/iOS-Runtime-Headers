/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilitySoundDetectionControlCenterModule.bundle/AccessibilitySoundDetectionControlCenterModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>
#import <libobjc.A.dylib/AXCCSoundDetectionModuleViewControllerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class AXCCSoundDetectionModuleViewController, CCUIContentModuleContext, NSString;

@interface AXCCSoundDetectionModule : CCUIToggleModule <AXCCSoundDetectionModuleViewControllerDelegate, CCUIContentModule> {

	AXCCSoundDetectionModuleViewController* _contentViewController;
	CCUIContentModuleContext* _contentModuleContext;

}

@property (nonatomic,retain) AXCCSoundDetectionModuleViewController * contentViewController;                                       //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isSelected;
-(void)setContentViewController:(AXCCSoundDetectionModuleViewController *)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(CCUIContentModuleContext *)contentModuleContext;
-(AXCCSoundDetectionModuleViewController *)contentViewController;
-(void)expandModule;
-(void)openSoundDetectionSettings;
@end

