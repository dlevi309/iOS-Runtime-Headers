/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/ConnectivityModule.bundle/ConnectivityModule
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, NSHashTable, NSString;

@interface CCUIConnectivityModule : NSObject <CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	NSHashTable* _contentViewControllers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)init;
-(void)setContentModuleContext:(id)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
@end

