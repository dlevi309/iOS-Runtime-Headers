/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFScrollableStaticWallpaperView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ISPlayerViewDelegate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperView.h>

@protocol SBFIrisWallpaperViewDelegate;
@class AVAsset, ISPlayerView, NSString, NSURL;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate, ISPlayerViewDelegate, SBFIrisWallpaperView> {

	AVAsset* _video;
	ISPlayerView* _playerView;
	long long _playbackState;
	id<SBFIrisWallpaperViewDelegate> _irisDelegate;
	double _stillTimeInVideo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate;              //@synthesize irisDelegate=_irisDelegate - In the implementation block
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@property (nonatomic,copy,readonly) NSURL * videoFileURL; 
@property (nonatomic,readonly) double stillTimeInVideo;                                         //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(NSURL *)videoFileURL;
-(id)_newImageView;
-(double)stillTimeInVideo;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(long long)irisPlaybackState;
-(BOOL)isIrisInteracting;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 wallpaperVideo:(id)arg3 variant:(long long)arg4 ;
@end

