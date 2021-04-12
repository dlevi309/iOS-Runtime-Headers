/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUDeselectable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TUPluggable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>

@interface NewsUI2.MagazineFeedViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable, TUPluggable, TSTabBarSplitViewAutoObserver> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 blueprintSelectionProvider;
	 barCompressionManager;
	 alertPresenter;
	 offlineAlertControllerFactory;
	 mastheadStyleOptionsProvider;
	 sharingActivityProviderFactory;
	 heightChangeRelayoutThreshold;
	 viewportFromLastRelayout;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;

}

@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)deselect;
-(void)startTraversingWithDirection:(long long)arg1 ;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
@end

