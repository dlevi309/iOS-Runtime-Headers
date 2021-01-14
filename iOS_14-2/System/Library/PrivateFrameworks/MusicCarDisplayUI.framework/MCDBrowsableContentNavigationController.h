/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <libobjc.A.dylib/MCDPCContainerDelegate.h>

@protocol OS_dispatch_queue;
@class MCDPCContainer, UITabBarController, MCDPCModel, NSString, CPUINowPlayingButtonWrapperView, NSObject;

@interface MCDBrowsableContentNavigationController : UITabBarController <UITabBarControllerDelegate, MCDPCContainerDelegate> {

	BOOL _hasCarScreen;
	BOOL _didFinishInitialLoad;
	BOOL _didFinishInitialViewAppear;
	BOOL _visible;
	BOOL _hasInvalidatedDummyTabs;
	MCDPCContainer* _container;
	UITabBarController* _tabBarController;
	UITabBarController* _hostTabBarController;
	MCDPCModel* _model;
	NSString* _bundleID;
	CPUINowPlayingButtonWrapperView* _nowPlayingButtonView;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) UITabBarController * tabBarController;                               //@synthesize tabBarController=_tabBarController - In the implementation block
@property (assign,nonatomic,__weak) UITabBarController * hostTabBarController;                    //@synthesize hostTabBarController=_hostTabBarController - In the implementation block
@property (nonatomic,retain) MCDPCModel * model;                                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) CPUINowPlayingButtonWrapperView * nowPlayingButtonView;              //@synthesize nowPlayingButtonView=_nowPlayingButtonView - In the implementation block
@property (assign,nonatomic) BOOL hasCarScreen;                                                   //@synthesize hasCarScreen=_hasCarScreen - In the implementation block
@property (nonatomic,retain) MCDPCContainer * container;                                          //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                                           //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialViewAppear;                                     //@synthesize didFinishInitialViewAppear=_didFinishInitialViewAppear - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                        //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL hasInvalidatedDummyTabs;                                        //@synthesize hasInvalidatedDummyTabs=_hasInvalidatedDummyTabs - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                            //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(MCDPCModel *)model;
-(void)setBundleID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)visible;
-(void)setContainer:(MCDPCContainer *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)setModel:(MCDPCModel *)arg1 ;
-(NSString *)bundleID;
-(UITabBarController *)tabBarController;
-(void)traitCollectionDidChange:(id)arg1 ;
-(MCDPCContainer *)container;
-(BOOL)didFinishInitialLoad;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(void)_nowPlayingDidChange:(id)arg1 ;
-(void)_appRegisteredForContent:(id)arg1 ;
-(void)_updateNowPlayingButtonVisibility;
-(void)setDidFinishInitialViewAppear:(BOOL)arg1 ;
-(void)container:(id)arg1 didInvalidateIndicies:(id)arg2 ;
-(BOOL)didFinishInitialViewAppear;
-(id)initWithBundleID:(id)arg1 model:(id)arg2 ;
-(void)invalidateAndReloadTabsWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadAllHostTabs;
-(void)updateTitleAndTabBarItemsAtIndexes:(id)arg1 ;
-(BOOL)hasInvalidatedDummyTabs;
-(void)setHasInvalidatedDummyTabs:(BOOL)arg1 ;
-(id)_hostTabAtIndex:(unsigned long long)arg1 dummyTab:(BOOL)arg2 ;
-(id)_tabBarItemForViewController:(id)arg1 fromItem:(id)arg2 ;
-(void)setHasCarScreen:(BOOL)arg1 ;
-(void)setTabBarController:(UITabBarController *)arg1 ;
-(UITabBarController *)hostTabBarController;
-(void)setHostTabBarController:(UITabBarController *)arg1 ;
-(CPUINowPlayingButtonWrapperView *)nowPlayingButtonView;
-(void)setNowPlayingButtonView:(CPUINowPlayingButtonWrapperView *)arg1 ;
-(BOOL)hasCarScreen;
@end

