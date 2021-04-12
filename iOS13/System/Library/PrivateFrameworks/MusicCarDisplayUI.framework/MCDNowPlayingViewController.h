/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/MCDNowPlayingContentManagerDelegate.h>

@protocol MCDNowPlayingContentManagerProtocol;
@class _MCDNowPlayingViewController, UIBarButtonItem, UIActivityIndicatorView, NSString, MPWeakTimer, UILabel, CARSessionStatus, UITableViewController;

@interface MCDNowPlayingViewController : UIViewController <CARSessionObserving, MCDNowPlayingContentManagerDelegate> {

	BOOL _showNavigationBar;
	BOOL _trackBuffering;
	BOOL _handledWillAppear;
	BOOL _shouldShowPlaybackQueue;
	_MCDNowPlayingViewController* _nowPlayingViewController;
	UIBarButtonItem* _backButton;
	UIActivityIndicatorView* _activityIndicator;
	UIBarButtonItem* _activityIndicatorBarButtonItem;
	NSString* _bundleID;
	NSString* _appName;
	MPWeakTimer* _activityTimer;
	UILabel* _rightTitleLabel;
	UIBarButtonItem* _rightTitleLabelBarButtonItem;
	UIBarButtonItem* _playbackQueueBarButtonItem;
	CARSessionStatus* _carSessionStatus;
	id<MCDNowPlayingContentManagerProtocol> _contentManager;
	UITableViewController* _playbackQueueViewController;
	/*^block*/id _albumViewControllerProvider;

}

@property (nonatomic,retain) _MCDNowPlayingViewController * nowPlayingViewController;              //@synthesize nowPlayingViewController=_nowPlayingViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * backButton;                                         //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                          //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * activityIndicatorBarButtonItem;                     //@synthesize activityIndicatorBarButtonItem=_activityIndicatorBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL trackBuffering;                                                  //@synthesize trackBuffering=_trackBuffering - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                                                   //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) MPWeakTimer * activityTimer;                                          //@synthesize activityTimer=_activityTimer - In the implementation block
@property (nonatomic,retain) UILabel * rightTitleLabel;                                            //@synthesize rightTitleLabel=_rightTitleLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightTitleLabelBarButtonItem;                       //@synthesize rightTitleLabelBarButtonItem=_rightTitleLabelBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * playbackQueueBarButtonItem;                         //@synthesize playbackQueueBarButtonItem=_playbackQueueBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL handledWillAppear;                                               //@synthesize handledWillAppear=_handledWillAppear - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlaybackQueue;                                         //@synthesize shouldShowPlaybackQueue=_shouldShowPlaybackQueue - In the implementation block
@property (nonatomic,retain) CARSessionStatus * carSessionStatus;                                  //@synthesize carSessionStatus=_carSessionStatus - In the implementation block
@property (nonatomic,retain) id<MCDNowPlayingContentManagerProtocol> contentManager;               //@synthesize contentManager=_contentManager - In the implementation block
@property (nonatomic,retain) UITableViewController * playbackQueueViewController;                  //@synthesize playbackQueueViewController=_playbackQueueViewController - In the implementation block
@property (nonatomic,copy) id albumViewControllerProvider;                                         //@synthesize albumViewControllerProvider=_albumViewControllerProvider - In the implementation block
@property (assign,nonatomic) BOOL showNavigationBar;                                               //@synthesize showNavigationBar=_showNavigationBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIBarButtonItem *)backButton;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(NSString *)appName;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)session:(id)arg1 didUpdateConfiguration:(id)arg2 ;
-(void)setRightTitle:(id)arg1 ;
-(void)setShowNavigationBar:(BOOL)arg1 ;
-(BOOL)showNavigationBar;
-(id<MCDNowPlayingContentManagerProtocol>)contentManager;
-(CARSessionStatus *)carSessionStatus;
-(void)setNowPlayingViewController:(_MCDNowPlayingViewController *)arg1 ;
-(_MCDNowPlayingViewController *)nowPlayingViewController;
-(void)_updateBackButton;
-(id)initWithPlayableBundleID:(id)arg1 appName:(id)arg2 ;
-(id)initWithBundleID:(id)arg1 appName:(id)arg2 ;
-(void)setContentManager:(id<MCDNowPlayingContentManagerProtocol>)arg1 ;
-(void)setPlaybackQueueViewController:(UITableViewController *)arg1 ;
-(void)setRightTitleLabel:(UILabel *)arg1 ;
-(UILabel *)rightTitleLabel;
-(void)_adjustRightTitleLabelToFit;
-(void)setActivityIndicatorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_setupActivityTimer;
-(void)setRightTitleLabelBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)upNextButtonTapped:(id)arg1 ;
-(void)setPlaybackQueueBarButtonItem:(UIBarButtonItem *)arg1 ;
-(BOOL)shouldShowPlaybackQueue;
-(void)contentManager:(id)arg1 shouldShowPlaybackQueue:(BOOL)arg2 ;
-(void)albumArtistButtonTapped:(id)arg1 ;
-(UITableViewController *)playbackQueueViewController;
-(void)_handleWillAppear;
-(void)setHandledWillAppear:(BOOL)arg1 ;
-(void)setTrackBuffering:(BOOL)arg1 ;
-(BOOL)trackBuffering;
-(id)albumViewControllerProvider;
-(void)setShouldShowPlaybackQueue:(BOOL)arg1 ;
-(BOOL)handledWillAppear;
-(UIBarButtonItem *)playbackQueueBarButtonItem;
-(UIBarButtonItem *)rightTitleLabelBarButtonItem;
-(UIBarButtonItem *)activityIndicatorBarButtonItem;
-(void)_popViewControllerAnimated;
-(void)_invalidateActivityTimer;
-(void)setActivityTimer:(MPWeakTimer *)arg1 ;
-(MPWeakTimer *)activityTimer;
-(void)contentManagerReloadData:(id)arg1 ;
-(void)contentManager:(id)arg1 presentViewController:(id)arg2 ;
-(void)contentManager:(id)arg1 bufferingItem:(BOOL)arg2 ;
-(void)contentManagerInitiatedPlaybackFromPlaybackQueue:(id)arg1 ;
-(void)contentManager:(id)arg1 displayItemIndex:(long long)arg2 totalItemCount:(long long)arg3 ;
-(void)contentManagerCompletedAllPlayback:(id)arg1 ;
-(void)contentManager:(id)arg1 sectionName:(id)arg2 ;
-(void)setCarSessionStatus:(CARSessionStatus *)arg1 ;
-(void)setAlbumViewControllerProvider:(id)arg1 ;
@end

