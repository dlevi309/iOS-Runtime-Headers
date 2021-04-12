/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class MPAVController, NSDictionary, _MPAVPlayerView, UIView, NSString, AVPlayerLayer;

@interface MPVideoView : UIView {

	MPAVController* _player;
	double _startTime;
	double _stopTime;
	NSDictionary* _AVURLAssetOptions;
	_MPAVPlayerView* _playerView;
	UIView* _contentView;
	NSString* _movieSubtitle;
	NSString* _movieTitle;
	long long _scaleMode;

}

@property (assign,nonatomic,__weak) MPAVController * player;                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) NSString * movieSubtitle;                      //@synthesize movieSubtitle=_movieSubtitle - In the implementation block
@property (nonatomic,retain) NSString * movieTitle;                         //@synthesize movieTitle=_movieTitle - In the implementation block
@property (assign,nonatomic) double startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double stopTime;                               //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,readonly) BOOL canChangeScaleMode; 
@property (assign,nonatomic) long long scaleMode;                           //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) long long effectiveScaleMode; 
@property (nonatomic,readonly) CGRect movieFrame; 
@property (nonatomic,readonly) CGRect movieContentFrame; 
@property (nonatomic,retain) NSDictionary * AVURLAssetOptions;              //@synthesize AVURLAssetOptions=_AVURLAssetOptions - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * playerLayer; 
@property (nonatomic,readonly) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(double)stopTime;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setStopTime:(double)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(long long)scaleMode;
-(BOOL)canChangeScaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(void)toggleScaleMode:(BOOL)arg1 ;
-(void)setScaleMode:(long long)arg1 animated:(BOOL)arg2 ;
-(UIView *)contentView;
-(void)setScaleMode:(long long)arg1 duration:(float)arg2 ;
-(long long)effectiveScaleMode;
-(CGRect)movieFrame;
-(CGRect)movieContentFrame;
-(NSDictionary *)AVURLAssetOptions;
-(void)setAVURLAssetOptions:(NSDictionary *)arg1 ;
-(NSString *)movieSubtitle;
-(void)setMovieSubtitle:(NSString *)arg1 ;
-(NSString *)movieTitle;
-(void)setMovieTitle:(NSString *)arg1 ;
-(double)startTime;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
@end

