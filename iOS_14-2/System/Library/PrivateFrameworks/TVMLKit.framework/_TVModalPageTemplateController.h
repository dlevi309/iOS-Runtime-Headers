/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIPageViewControllerDataSource.h>

@class IKViewElement, NSArray, UIPageViewController, NSString;

@interface _TVModalPageTemplateController : UIViewController <UIPageViewControllerDataSource> {

	IKViewElement* _backgroundElement;
	NSArray* _bezelViewControllers;
	IKViewElement* _collectionListElement;
	UIPageViewController* _pageViewController;
	NSArray* _viewControllers;
	IKViewElement* _viewElement;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMoveToParentViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)_tapAction:(id)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(void)updateWithViewElement:(id)arg1 ;
-(id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2 ;
-(BOOL)_updateWithCollectionListElement:(id)arg1 ;
@end

