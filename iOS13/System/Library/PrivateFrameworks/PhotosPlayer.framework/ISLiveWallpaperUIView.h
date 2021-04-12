/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayerUIView.h>

@class UIGestureRecognizer, NSTimer, ISLiveWallpaperPlayer;

@interface ISLiveWallpaperUIView : ISBasePlayerUIView {

	BOOL _touching;
	UIGestureRecognizer* _playbackGestureRecognizer;
	double _force;
	NSTimer* _updateTimer;

}

@property (assign,nonatomic) BOOL touching;                                                  //@synthesize touching=_touching - In the implementation block
@property (assign,nonatomic) double force;                                                   //@synthesize force=_force - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                          //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) ISLiveWallpaperPlayer * player; 
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer;              //@synthesize playbackGestureRecognizer=_playbackGestureRecognizer - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(double)force;
-(void)setForce:(double)arg1 ;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSTimer *)updateTimer;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
-(void)setTouching:(BOOL)arg1 ;
-(void)_updatePlayer;
-(void)_ISLiveWallpaperUIViewCommonInitialization;
-(void)_handleUpdateTimer;
-(BOOL)touching;
@end

