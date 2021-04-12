/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/TUPluggable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TUDeselectable.h>

@class NSArray;

@interface NewsUI2.MagazineFeedViewController : UIViewController <TSTabBarSplitViewAutoObserver, TUPluggable, TUKeyCommandTraversable, TUDeselectable> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 blueprintLayoutProvider;
	 barCompressionManager;
	 alertPresenter;
	 offlineAlertControllerFactory;
	 mastheadStyleOptionsProvider;
	 feedPaywallConfigFactory;
	 sharingActivityProviderFactory;
	 bundlePurchasePrewarmer;
	 heightChangeRelayoutThreshold;
	 viewportFromLastRelayout;
	 commandContainer;
	 newsActivityManager;
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
-(void)tabBarSplitViewDidUnobsureView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

