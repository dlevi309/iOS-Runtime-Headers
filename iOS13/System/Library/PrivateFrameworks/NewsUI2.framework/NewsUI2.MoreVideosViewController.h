/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TUDeselectable.h>
#import <libobjc.A.dylib/TUKeyCommandTraversable.h>
#import <libobjc.A.dylib/TSTabBarSplitViewAutoObserver.h>
#import <libobjc.A.dylib/TSBlueprintInspectable.h>
#import <libobjc.A.dylib/TUPluggable.h>
#import <libobjc.A.dylib/TSVideoGroupViewControllerType.h>

@class NSString;

@interface NewsUI2.MoreVideosViewController : UIViewController <TUDeselectable, TUKeyCommandTraversable, TSTabBarSplitViewAutoObserver, TSBlueprintInspectable, TUPluggable, TSVideoGroupViewControllerType> {

	 styler;
	 eventHandler;
	 blueprintViewController;
	 headlineModelFactory;
	 sharingActivityProviderFactory;
	 gradientView;
	 config;
	 routableDelegate;
	 groupRankProvider;
	 feedViewExposureID;
	 isBeingUsedAsPlugin;
	 pluggableDelegate;

}

@property (assign,__weak,nonatomic) id<TSVideoGroupViewControllerDelegate> routableDelegate; 
@property (assign,__weak,nonatomic) id<TSGroupRankProvider> groupRankProvider; 
@property (copy,nonatomic) NSString * feedViewExposureID; 
@property (assign,nonatomic) BOOL isBeingUsedAsPlugin; 
@property (assign,__weak,nonatomic) id<TUPluggableDelegate> pluggableDelegate; 
-(void)deselect;
-(void)startTraversingWithDirection:(long long)arg1 ;
-(void)tabBarSplitViewDidChangeFocusToFocus:(long long)arg1 action:(long long)arg2 ;
-(id)cellForHeadline:(id)arg1 ;
-(void)initializeWithCompletion:(/*^block*/id)arg1 ;
-(void)relayoutWithCompletion:(/*^block*/id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id<TUPluggableDelegate>)pluggableDelegate;
-(void)setPluggableDelegate:(id<TUPluggableDelegate>)arg1 ;
-(BOOL)isBeingUsedAsPlugin;
-(void)setIsBeingUsedAsPlugin:(BOOL)arg1 ;
-(NSString *)feedViewExposureID;
-(id<TSVideoGroupViewControllerDelegate>)routableDelegate;
-(void)setRoutableDelegate:(id<TSVideoGroupViewControllerDelegate>)arg1 ;
-(id<TSGroupRankProvider>)groupRankProvider;
-(void)setGroupRankProvider:(id<TSGroupRankProvider>)arg1 ;
-(void)setFeedViewExposureID:(NSString *)arg1 ;
@end

