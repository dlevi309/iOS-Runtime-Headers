/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class TVRMContentViewController, CCUIContentModuleContext, NSString;

@interface TVRemoteModule : NSObject <CCUIContentModule> {

	TVRMContentViewController* _contentViewController;
	CCUIContentModuleContext* _moduleContext;

}

@property (nonatomic,retain) TVRMContentViewController * contentViewController;                                                    //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) CCUIContentModuleContext * moduleContext;                                                             //@synthesize moduleContext=_moduleContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(void)setContentViewController:(TVRMContentViewController *)arg1 ;
-(TVRMContentViewController *)contentViewController;
-(void)setContentModuleContext:(id)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)setModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)moduleContext;
@end

