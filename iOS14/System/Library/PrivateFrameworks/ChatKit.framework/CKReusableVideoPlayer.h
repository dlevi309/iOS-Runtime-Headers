/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>

@protocol CKReusableVideoPlayerDelegate;
@class NSString, AVPlayerViewController;

@interface CKReusableVideoPlayer : NSObject <AVPlayerViewControllerDelegate> {

	BOOL _observingPlayer;
	BOOL _playing;
	BOOL _wasPlayingBeforeDisappearing;
	NSString* _videoTransferGUID;
	id<CKReusableVideoPlayerDelegate> _delegate;
	AVPlayerViewController* _playerViewController;

}

@property (nonatomic,retain) AVPlayerViewController * playerViewController;                              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (assign,getter=isObservingPlayer,nonatomic) BOOL observingPlayer;                              //@synthesize observingPlayer=_observingPlayer - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                                              //@synthesize playing=_playing - In the implementation block
@property (assign,nonatomic) BOOL wasPlayingBeforeDisappearing;                                          //@synthesize wasPlayingBeforeDisappearing=_wasPlayingBeforeDisappearing - In the implementation block
@property (nonatomic,copy) NSString * videoTransferGUID;                                                 //@synthesize videoTransferGUID=_videoTransferGUID - In the implementation block
@property (assign,nonatomic,__weak) id<CKReusableVideoPlayerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (getter=isPictureInPictureActive,nonatomic,readonly) BOOL pictureInPictureActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isPlaying;
-(id)init;
-(id<CKReusableVideoPlayerDelegate>)delegate;
-(void)pause;
-(void)setPlaying:(BOOL)arg1 ;
-(void)willDisappear;
-(AVPlayerViewController *)playerViewController;
-(void)setDelegate:(id<CKReusableVideoPlayerDelegate>)arg1 ;
-(BOOL)isObservingPlayer;
-(void)removeRateObserverIfNecessary;
-(void)selectedConversationChanged;
-(void)setObservingPlayer:(BOOL)arg1 ;
-(void)setWasPlayingBeforeDisappearing:(BOOL)arg1 ;
-(BOOL)wasPlayingBeforeDisappearing;
-(void)configureWithPlayerItem:(id)arg1 ;
-(BOOL)isReadyForReuse;
-(NSString *)videoTransferGUID;
-(void)setVideoTransferGUID:(NSString *)arg1 ;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(BOOL)isPictureInPictureActive;
-(void)dealloc;
@end

