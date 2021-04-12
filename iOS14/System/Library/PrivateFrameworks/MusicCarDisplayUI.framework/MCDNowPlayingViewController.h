/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <CarPlayUI/CPUINowPlayingViewController.h>
#import <libobjc.A.dylib/MCDNowPlayingContentManagerDelegate.h>

@protocol MCDNowPlayingContentManagerProtocol;
@class UITableViewController, UIBarButtonItem, UIActivityIndicatorView, NSString, MPWeakTimer, UILabel;

@interface MCDNowPlayingViewController : CPUINowPlayingViewController <MCDNowPlayingContentManagerDelegate> {

	BOOL _showNavigationBar;
	BOOL _trackBuffering;
	BOOL _handledWillAppear;
	BOOL _shouldShowPlaybackQueue;
	UITableViewController* _playbackQueueViewController;
	id<MCDNowPlayingContentManagerProtocol> _contentManager;
	UIBarButtonItem* _backButton;
	UIActivityIndicatorView* _activityIndicator;
	UIBarButtonItem* _activityIndicatorBarButtonItem;
	NSString* _appName;
	MPWeakTimer* _activityTimer;
	UILabel* _rightTitleLabel;
	UIBarButtonItem* _rightTitleLabelBarButtonItem;
	UIBarButtonItem* _playbackQueueBarButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * backButton;                                        //@synthesize backButton=_backButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * activityIndicatorBarButtonItem;                    //@synthesize activityIndicatorBarButtonItem=_activityIndicatorBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL trackBuffering;                                                 //@synthesize trackBuffering=_trackBuffering - In the implementation block
@property (nonatomic,retain) NSString * appName;                                                  //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) MPWeakTimer * activityTimer;                                         //@synthesize activityTimer=_activityTimer - In the implementation block
@property (nonatomic,retain) UILabel * rightTitleLabel;                                           //@synthesize rightTitleLabel=_rightTitleLabel - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * rightTitleLabelBarButtonItem;                      //@synthesize rightTitleLabelBarButtonItem=_rightTitleLabelBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * playbackQueueBarButtonItem;                        //@synthesize playbackQueueBarButtonItem=_playbackQueueBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL handledWillAppear;                                              //@synthesize handledWillAppear=_handledWillAppear - In the implementation block
@property (assign,nonatomic) BOOL shouldShowPlaybackQueue;                                        //@synthesize shouldShowPlaybackQueue=_shouldShowPlaybackQueue - In the implementation block
@property (assign,nonatomic) BOOL showNavigationBar;                                              //@synthesize showNavigationBar=_showNavigationBar - In the implementation block
@property (nonatomic,retain) UITableViewController * playbackQueueViewController;                 //@synthesize playbackQueueViewController=_playbackQueueViewController - In the implementation block
@property (nonatomic,retain) id<MCDNowPlayingContentManagerProtocol> contentManager;              //@synthesize contentManager=_contentManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setBackButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)setShowNavigationBar:(BOOL)arg1 ;
-(BOOL)showNavigationBar;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIBarButtonItem *)backButton;
-(void)setRightTitle:(id)arg1 ;
-(NSString *)appName;
-(void)dealloc;
-(void)_updateBackButton;
-(void)setRightTitleLabel:(UILabel *)arg1 ;
-(UILabel *)rightTitleLabel;
-(void)_adjustRightTitleLabelToFit;
-(void)setActivityIndicatorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightTitleLabelBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)upNextButtonTapped:(id)arg1 ;
-(void)setPlaybackQueueBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)rightTitleLabelBarButtonItem;
-(UIBarButtonItem *)activityIndicatorBarButtonItem;
-(UIBarButtonItem *)playbackQueueBarButtonItem;
-(id)initWithPlayableBundleID:(id)arg1 appName:(id)arg2 ;
-(id)initWithBundleID:(id)arg1 appName:(id)arg2 ;
-(void)setContentManager:(id<MCDNowPlayingContentManagerProtocol>)arg1 ;
-(id<MCDNowPlayingContentManagerProtocol>)contentManager;
-(void)setPlaybackQueueViewController:(UITableViewController *)arg1 ;
-(void)_setupActivityTimer;
-(void)contentManager:(id)arg1 shouldShowPlaybackQueue:(BOOL)arg2 ;
-(UITableViewController *)playbackQueueViewController;
-(void)_handleWillAppear;
-(void)setHandledWillAppear:(BOOL)arg1 ;
-(void)setTrackBuffering:(BOOL)arg1 ;
-(BOOL)trackBuffering;
-(void)setShouldShowPlaybackQueue:(BOOL)arg1 ;
-(BOOL)handledWillAppear;
-(BOOL)shouldShowPlaybackQueue;
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
@end

