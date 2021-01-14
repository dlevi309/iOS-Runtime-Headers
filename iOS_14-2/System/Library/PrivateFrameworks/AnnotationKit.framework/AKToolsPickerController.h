/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKController, UINavigationController, UIViewController;

@interface AKToolsPickerController : NSObject {

	AKController* _controller;
	UINavigationController* _navController;
	UIViewController* _toolsListController;

}

@property (nonatomic,retain) UINavigationController * navController;              //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) UIViewController * toolsListController;              //@synthesize toolsListController=_toolsListController - In the implementation block
@property (__weak) AKController * controller;                                     //@synthesize controller=_controller - In the implementation block
-(UINavigationController *)navController;
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)setToolsListController:(UIViewController *)arg1 ;
-(UIViewController *)toolsListController;
@end

