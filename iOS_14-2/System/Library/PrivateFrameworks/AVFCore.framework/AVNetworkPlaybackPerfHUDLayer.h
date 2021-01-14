/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <QuartzCore/CATextLayer.h>

@protocol OS_dispatch_source;
@class NSObject, AVPlayer, AVPlayerLayer, NSNumber, NSMutableDictionary;

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
	NSNumber* _displayResolutionHeight;
	NSNumber* _displayResolutionWidth;
	NSNumber* _audioSpatializationMode;
	BOOL _requestInFlight;
	NSMutableDictionary* _loadingStatusCache;

}

@property (__weak) AVPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (__weak) AVPlayerLayer * playerLayer;              //@synthesize playerLayer=_playerLayer - In the implementation block
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)startDispatchTimer;
-(void)currentItemChanged;
-(id)init;
-(void)readHudSettingsAndCallCompletionHandler:(/*^block*/id)arg1 ;
-(float)getScaleFactorForDisplaySize:(CGSize)arg1 ;
-(id)displayStringGenerator;
-(BOOL)valueLoadedForKey:(id)arg1 onObject:(id)arg2 ;
-(void)updateHudWithDisplayString:(id)arg1 ;
-(void)updateBounds:(CGRect)arg1 ;
-(void)setColor:(int)arg1 ;
-(void)currentItemTracksChanged;
-(BOOL)hudEnabled;
-(void)getHudSetting;
-(void)setPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)_hudUpdateTrigger;
-(void)copyPropertiesFromStringGenerator:(id)arg1 ;
-(void)dealloc;
-(AVPlayerLayer *)playerLayer;
@end

