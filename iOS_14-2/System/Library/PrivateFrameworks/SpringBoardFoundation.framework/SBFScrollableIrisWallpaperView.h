/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSURL *)videoFileURL;
-(BOOL)isIrisInteracting;
-(long long)irisPlaybackState;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(id)_newImageView;
-(double)stillTimeInVideo;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 wallpaperVideo:(id)arg3 variant:(long long)arg4 ;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
@end

