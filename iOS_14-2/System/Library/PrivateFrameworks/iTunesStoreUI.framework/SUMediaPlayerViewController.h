/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class UIView, SUClientInterface, SUMediaPlayerItem, NSMutableArray, AVPlayerViewController, NSString;

@interface SUMediaPlayerViewController : UIViewController <AVPlayerViewControllerDelegate, ISOperationDelegate> {

	UIView* _backgroundContainerView;
	SUClientInterface* _clientInterface;
	SUMediaPlayerItem* _mediaItem;
	NSMutableArray* _operations;
	long long _playerState;
	AVPlayerViewController* _playerViewController;

}

@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;                 //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;                        //@synthesize clientInterface=_clientInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3 ;
+(void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1 ;
+(BOOL)_URLIsITunesU:(id)arg1 ;
+(void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2 ;
-(AVPlayerViewController *)playerViewController;
-(void)viewDidLoad;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)_enqueueOperation:(id)arg1 ;
-(void)dealloc;
-(id)_backgroundContainerView;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(id)copyScriptViewController;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(void)_playbackFinishedNotification:(id)arg1 ;
-(void)_prepareMediaItem;
-(void)_setIsActivePlayer:(BOOL)arg1 ;
-(void)_dequeueOperation:(id)arg1 ;
-(void)_showBackgroundImage:(id)arg1 ;
-(void)_loadBackgroundImage;
-(SUMediaPlayerItem *)mediaPlayerItem;
@end

