/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)force;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
-(void)setForce:(double)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)dealloc;
-(void)setTouching:(BOOL)arg1 ;
-(void)_updatePlayer;
-(void)_ISLiveWallpaperUIViewCommonInitialization;
-(void)_handleUpdateTimer;
-(BOOL)touching;
@end

