/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/PerformanceTraceModule.bundle/PerformanceTraceModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, CCUIPerformanceTraceModuleViewController, NSString;

@interface CCUIPerformanceTraceModule : NSObject <CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	CCUIPerformanceTraceModuleViewController* _viewController;

}

@property (nonatomic,retain) CCUIPerformanceTraceModuleViewController * viewController;                                            //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(CCUIPerformanceTraceModuleViewController *)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(CCUIPerformanceTraceModuleViewController *)viewController;
@end

