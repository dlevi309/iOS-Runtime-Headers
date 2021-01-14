/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)setContentViewController:(TVRMContentViewController *)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(TVRMContentViewController *)contentViewController;
-(void)setModuleContext:(CCUIContentModuleContext *)arg1 ;
-(CCUIContentModuleContext *)moduleContext;
@end

