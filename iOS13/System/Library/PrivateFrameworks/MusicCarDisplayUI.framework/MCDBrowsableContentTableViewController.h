/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MCDPCContainerDelegate.h>
#import <libobjc.A.dylib/MCDErrorViewDelegate.h>
#import <libobjc.A.dylib/CARSessionObserving.h>

@protocol OS_dispatch_queue;
@class UITableView, MCDNowPlayingButton, NSIndexPath, _UIFilteredDataSource, MPWeakTimer, UIView, NSObject, CARSessionStatus, MCDPCContainer, UIAlertController, NSString;

@interface MCDBrowsableContentTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, MCDPCContainerDelegate, MCDErrorViewDelegate, CARSessionObserving> {

	UITableView* _tableView;
	MCDNowPlayingButton* _nowPlayingButton;
	long long _count;
	NSIndexPath* _selectedNextIndexPath;
	_UIFilteredDataSource* _dataSource;
	NSIndexPath* _reselectIndexPath;
	MPWeakTimer* _loadingTimer;
	MPWeakTimer* _delayTimer;
	UIView* _MCD_tableView;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CARSessionStatus* _carSessionStatus;
	BOOL _limited;
	BOOL _hasCarScreen;
	BOOL _hasNoBrowsableContent;
	BOOL _didPushToNowPlayingAtLaunch;
	BOOL _isRootTableViewController;
	BOOL _hasTabbedBrowsing;
	BOOL _visible;
	BOOL _currentlyPlayingApp;
	BOOL _pushToNowPlaying;
	BOOL _didFinishInitialLoad;
	BOOL _didFinishInitialViewAppear;
	MCDPCContainer* _container;
	NSIndexPath* _selectedIndexPath;
	UIView* _placeholderView;
	UIAlertController* _alertController;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible;                    //@synthesize visible=_visible - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                  //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;                         //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) BOOL currentlyPlayingApp;                         //@synthesize currentlyPlayingApp=_currentlyPlayingApp - In the implementation block
@property (nonatomic,retain) MPWeakTimer * loadingTimer;                       //@synthesize loadingTimer=_loadingTimer - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) BOOL pushToNowPlaying;                            //@synthesize pushToNowPlaying=_pushToNowPlaying - In the implementation block
@property (nonatomic,retain) MCDPCContainer * container;                       //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialLoad;                        //@synthesize didFinishInitialLoad=_didFinishInitialLoad - In the implementation block
@property (assign,nonatomic) BOOL didFinishInitialViewAppear;                  //@synthesize didFinishInitialViewAppear=_didFinishInitialViewAppear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(MCDPCContainer *)container;
-(void)setContainer:(MCDPCContainer *)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(id)initWithContainer:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)didFinishInitialLoad;
-(void)setDidFinishInitialLoad:(BOOL)arg1 ;
-(void)reloadTable;
-(void)_nowPlayingDidChange:(id)arg1 ;
-(void)_appRegisteredForContent:(id)arg1 ;
-(void)_clearTableViewSelectionAnimated:(BOOL)arg1 ;
-(void)_updateNowPlayingButtonVisibility;
-(void)setDidFinishInitialViewAppear:(BOOL)arg1 ;
-(void)_showTimeoutScreen;
-(void)_replacePlaceholderViewWithView:(id)arg1 ;
-(void)_showLoadingScreen;
-(BOOL)currentlyPlayingApp;
-(void)_displayErrorAlertController:(id)arg1 ;
-(MPWeakTimer *)loadingTimer;
-(void)setLoadingTimer:(MPWeakTimer *)arg1 ;
-(void)_clearLoadingActivity;
-(void)setPushToNowPlaying:(BOOL)arg1 ;
-(id)initWithContainer:(id)arg1 tabbedBrowsing:(BOOL)arg2 ;
-(void)_displayLoadingActivity;
-(BOOL)_shouldLimitLists;
-(void)setCurrentlyPlayingApp:(BOOL)arg1 ;
-(void)_nowPlayingButtonTapped:(id)arg1 ;
-(void)_pushToNowPlaying:(BOOL)arg1 ;
-(BOOL)pushToNowPlaying;
-(void)container:(id)arg1 didInvalidateIndicies:(id)arg2 ;
-(void)containerDidChangeCount:(id)arg1 ;
-(void)errorViewDidTapButton:(id)arg1 ;
-(BOOL)didFinishInitialViewAppear;
@end

