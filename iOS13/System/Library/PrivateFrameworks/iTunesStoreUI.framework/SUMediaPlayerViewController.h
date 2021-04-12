/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <MediaPlayer/MPMoviePlayerViewController.h>
#import <libobjc.A.dylib/ISOperationDelegate.h>

@class UIView, SUClientInterface, SUMediaPlayerItem, NSMutableArray, NSString;

@interface SUMediaPlayerViewController : MPMoviePlayerViewController <ISOperationDelegate> {

	UIView* _backgroundContainerView;
	SUClientInterface* _clientInterface;
	SUMediaPlayerItem* _mediaItem;
	NSMutableArray* _operations;
	long long _playerState;

}

@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;                     //@synthesize clientInterface=_clientInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_sendPingRequestsForURLs:(id)arg1 URLBagKey:(id)arg2 playerItem:(id)arg3 ;
+(void)sendPlaybackPingRequestsForMediaPlayerItem:(id)arg1 ;
+(BOOL)_URLIsITunesU:(id)arg1 ;
+(void)sendDownloadPingRequestsForMediaPlayerItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_enqueueOperation:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)operationFinished:(id)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)copyScriptViewController;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(void)_mediaTypesAvailableNotification:(id)arg1 ;
-(void)_playbackFinishedNotification:(id)arg1 ;
-(void)_bookmarkCurrentTime;
-(void)_insertBackgroundContainerView;
-(void)_prepareMediaItem;
-(void)_loadBackgroundImage;
-(void)_setIsActivePlayer:(BOOL)arg1 ;
-(void)_dequeueOperation:(id)arg1 ;
-(void)_showBackgroundImage:(id)arg1 ;
-(id)_backgroundContainerView;
-(SUMediaPlayerItem *)mediaPlayerItem;
@end

