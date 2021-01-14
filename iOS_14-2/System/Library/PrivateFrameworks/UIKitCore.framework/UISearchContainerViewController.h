/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController {

	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(UISearchController *)searchController;
-(void)encodeWithCoder:(id)arg1 ;
-(void)commonInit;
-(void)_prepareForContainerTransition:(id)arg1 ;
-(BOOL)_transitionsChildViewControllers;
-(void)_presentSearchControllerIfNecessary;
-(void)setTabBarObservedScrollView:(id)arg1 ;
-(id)initWithSearchController:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
@end

