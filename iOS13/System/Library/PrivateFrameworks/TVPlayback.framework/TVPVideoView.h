/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVPAVFPlayback;
@class NSObject, UILabel, TVPPlayerLayerView, UIImageView;

@interface TVPVideoView : UIView {

	BOOL _isPrimarySubtitleDisplayer;
	BOOL _readyForDisplay;
	long long _videoGravity;
	NSObject*<TVPAVFPlayback> _player;
	UILabel* _debugLabel;
	TVPPlayerLayerView* _playerLayerView;
	UIImageView* _stillImageView;

}

@property (nonatomic,retain) TVPPlayerLayerView * playerLayerView;                       //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,getter=isReadyForDisplay,nonatomic) BOOL readyForDisplay;              //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (nonatomic,retain) UIImageView * stillImageView;                               //@synthesize stillImageView=_stillImageView - In the implementation block
@property (nonatomic,retain) NSObject*<TVPAVFPlayback> player;                           //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) UILabel * debugLabel;                                     //@synthesize debugLabel=_debugLabel - In the implementation block
@property (assign,nonatomic) BOOL isPrimarySubtitleDisplayer;                            //@synthesize isPrimarySubtitleDisplayer=_isPrimarySubtitleDisplayer - In the implementation block
@property (assign,nonatomic) long long videoGravity;                                     //@synthesize videoGravity=_videoGravity - In the implementation block
+(void)initialize;
+(id)preservedVideoViewsForPlayer:(id)arg1 identifier:(id)arg2 ;
+(void)_playerStateDidChange:(id)arg1 ;
+(void)_purgePreservedVideoViewsForPlayer:(id)arg1 ;
+(void)preserveVideoViewForReuse:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSObject*<TVPAVFPlayback>)player;
-(void)setPlayer:(NSObject*<TVPAVFPlayback>)arg1 ;
-(long long)videoGravity;
-(void)setVideoGravity:(long long)arg1 ;
-(BOOL)isReadyForDisplay;
-(void)setReadyForDisplay:(BOOL)arg1 ;
-(TVPPlayerLayerView *)playerLayerView;
-(void)setPlayerLayerView:(TVPPlayerLayerView *)arg1 ;
-(UILabel *)debugLabel;
-(void)setAVPlayer:(id)arg1 ;
-(id)AVPlayer;
-(UIImageView *)stillImageView;
-(void)setStillImageView:(UIImageView *)arg1 ;
-(void)_playerStillImageDidChange:(id)arg1 ;
-(void)setIsPrimarySubtitleDisplayer:(BOOL)arg1 ;
-(BOOL)isPrimarySubtitleDisplayer;
@end

