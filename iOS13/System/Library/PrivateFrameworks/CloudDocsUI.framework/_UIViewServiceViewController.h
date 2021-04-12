/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <CloudDocsUI/CloudDocsUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, NSString;

@interface _UIViewServiceViewController : UIViewController <UINavigationControllerDelegate> {

	id _hostingViewController;
	UINavigationController* _containedNavController;

}

@property (nonatomic,readonly) id hostingViewController;                                     //@synthesize hostingViewController=_hostingViewController - In the implementation block
@property (nonatomic,readonly) UINavigationController * containedNavController;              //@synthesize containedNavController=_containedNavController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)hostingViewController;
-(CGSize)_updatedContentSizeForPreferredContentSize:(CGSize)arg1 ;
-(void)setContainedNavController:(UINavigationController *)arg1 ;
-(UINavigationController *)containedNavController;
@end

