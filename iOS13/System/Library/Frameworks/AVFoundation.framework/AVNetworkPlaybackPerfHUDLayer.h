/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CATextLayer.h>

@protocol OS_dispatch_source;
@class NSObject, AVPlayer, AVPlayerLayer, NSMutableDictionary;

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {

	NSObject*<OS_dispatch_source> _hudTimer;
	AVPlayer* _player;
	AVPlayerLayer* _playerLayer;
	BOOL _showHud;
	BOOL _spatialDiagnostics;
	int _colorId;
	double _opacity;
	int _fontSizeInt;
	BOOL _updateUISettings;
	int _hudXoffset;
	int _hudYoffset;
	unsigned long long _hudUpdateInterval;
	BOOL _showCompleteURI;
	long long _prevVariantIdx;
	long long _prevStallCount;
	long long _totalStallCount;
	NSMutableDictionary* _loadingStatusCache;

}

@property (__weak) AVPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (__weak) AVPlayerLayer * playerLayer;              //@synthesize playerLayer=_playerLayer - In the implementation block
+(BOOL)runningAnInternalBuild;
+(id)convertBitrate:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setColor:(int)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)playerLayer;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(BOOL)hudEnabled;
-(void)startDispatchTimer;
-(void)currentItemChanged;
-(void)currentItemTracksChanged;
-(void)readHudSettingsAndCallCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateBounds:(CGRect)arg1 ;
-(void)getHudSetting;
-(void)_hudUpdate;
-(id)getVideoRange:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)getTrackFormatDesc:(id)arg1 ;
-(float)getScaleFactorForDisplaySize:(CGSize)arg1 ;
-(BOOL)valueLoadedForKey:(id)arg1 onObject:(id)arg2 ;
@end

