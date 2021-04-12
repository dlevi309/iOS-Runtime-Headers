/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/AVPlayerViewControllerDelegate.h>
#import <libobjc.A.dylib/CKReusableVideoPlayerDelegate.h>

@class CKMovieMediaObject, UIView, CKReusableVideoPlayer, CKVideoPlayerReusePool, NSString;

@interface CKVideoPlayerBalloonView : CKImageBalloonView <UIGestureRecognizerDelegate, AVPlayerViewControllerDelegate, CKReusableVideoPlayerDelegate> {

	CKMovieMediaObject* _mediaObject;
	UIView* _playerView;
	CKReusableVideoPlayer* _reusablePlayer;
	CKVideoPlayerReusePool* _playerPool;

}

@property (nonatomic,retain) UIView * playerView;                                               //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) CKReusableVideoPlayer * reusablePlayer;                            //@synthesize reusablePlayer=_reusablePlayer - In the implementation block
@property (nonatomic,retain) CKVideoPlayerReusePool * playerPool;                               //@synthesize playerPool=_playerPool - In the implementation block
@property (nonatomic,retain) CKMovieMediaObject * mediaObject;                                  //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic,__weak) id<CKVideoPlayerBalloonViewDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(CKVideoPlayerReusePool *)playerPool;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 hasInvisibleInkEffect:(BOOL)arg4 ;
-(void)setMediaObject:(CKMovieMediaObject *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureIsOurGesture:(id)arg1 ;
-(void)cleanUpPlayerIfNeeded;
-(void)showPlayerViewController;
-(void)startPlayingInlineVideo;
-(CKReusableVideoPlayer *)reusablePlayer;
-(void)setReusablePlayer:(CKReusableVideoPlayer *)arg1 ;
-(void)setPlayerPool:(CKVideoPlayerReusePool *)arg1 ;
-(void)prepareForReuse;
-(UIView *)playerView;
-(void)setPlayerView:(UIView *)arg1 ;
-(id)playerViewController;
-(NSString *)description;
-(void)layoutSubviews;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(CKMovieMediaObject *)mediaObject;
-(void)reusablePlayerDidStop;
-(void)reusablePlayerDidStart;
-(void)tapGestureRecognized:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)playerItem;
-(void)dealloc;
-(void)doubleTapGestureRecognized:(id)arg1 ;
@end

