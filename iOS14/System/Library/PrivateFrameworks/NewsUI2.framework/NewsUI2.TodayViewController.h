/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUPluggable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TUDeselectable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/TUScrollable.h>

@class NSArray;

@interface NewsUI2.TodayViewController : UIViewController <TUPluggable, TUKeyCommandTraversable, TUDeselectable, TSTabBarSplitViewAutoObserver, UICollectionViewDelegate, TUScrollable> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 blueprintLayoutProvider;
	 sharingActivityProviderFactory;
	 barCompressionManager;
	 refreshStateMachine;
	 refreshControl;
	 commands;
	 loadingGate;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;

}

@property (readonly,nonatomic) long long pluginItemCount; 
@property (readonly,nonatomic) long long pluginVisibleItemCount; 
@property (readonly,nonatomic) NSArray * pluginItemIdentifiers; 
@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)pluginItemCount;
-(long long)pluginVisibleItemCount;
-(NSArray *)pluginItemIdentifiers;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)startTraversingWithDirection:(long long)arg1 ;
-(void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2 ;
-(void)deselect;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didPullToRefreshWithSender:(id)arg1 ;
-(void)significantTimeChangeDidOccur;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

