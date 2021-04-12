/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, NSHashTable, NSString;

@interface CCUIConnectivityModule : NSObject <CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	NSHashTable* _contentViewControllers;

}

@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
@end

