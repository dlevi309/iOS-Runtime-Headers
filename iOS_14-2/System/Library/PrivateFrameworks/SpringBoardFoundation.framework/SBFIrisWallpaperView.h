/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFStaticWallpaperView.h>
#import <libobjc.A.dylib/ISPlayerViewDelegatePrivate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperView.h>
@class NSURL;


@protocol SBFIrisWallpaperView <NSObject>
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate; 
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@property (nonatomic,copy,readonly) NSURL * videoFileURL; 
@property (nonatomic,readonly) double stillTimeInVideo; 
@required
-(NSURL *)videoFileURL;
-(BOOL)isIrisInteracting;
-(long long)irisPlaybackState;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id)arg1;
-(double)stillTimeInVideo;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;

@end


@protocol SBFIrisWallpaperViewDelegate;
@class NSURL, UIImageView, ISAVPlayer, ISPlayerView, UIGestureRecognizer, NSString;

@interface SBFIrisWallpaperView : SBFStaticWallpaperView <ISPlayerViewDelegatePrivate, SBFIrisWallpaperView> {

	id<SBFIrisWallpaperViewDelegate> _irisDelegate;
	long long _currentMode;
	UIImageView* _imageView;
	NSURL* _videoFileURL;
	double _stillTimeInVideo;
	BOOL _useRewindPlaybackStyle;
	ISAVPlayer* _prewiredAVPlayer;
	CGSize _prewiredSize;
	ISPlayerView* _playerView;
	long long _playerState;
	long long _playbackState;
	BOOL _isInteracting;
	UIGestureRecognizer* _playerGestureRecognizer;

}

@property (nonatomic,readonly) long long currentIrisMode;                                       //@synthesize currentMode=_currentMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate;              //@synthesize irisDelegate=_irisDelegate - In the implementation block
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
@property (nonatomic,copy,readonly) NSURL * videoFileURL;                                       //@synthesize videoFileURL=_videoFileURL - In the implementation block
@property (nonatomic,readonly) double stillTimeInVideo;                                         //@synthesize stillTimeInVideo=_stillTimeInVideo - In the implementation block
+(void)initialize;
-(NSURL *)videoFileURL;
-(void)_setupContentViewWithOptions:(unsigned long long)arg1 ;
-(BOOL)isIrisInteracting;
-(void)switchToIrisMode:(long long)arg1 ;
-(long long)irisPlaybackState;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(id)videoPlayerForPlayerView:(id)arg1 ;
-(double)stillTimeInVideo;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(long long)wallpaperType;
-(void)_populateContentView;
-(id)initWithFrame:(CGRect)arg1 configuration:(id)arg2 variant:(long long)arg3 cacheGroup:(id)arg4 delegate:(id)arg5 options:(unsigned long long)arg6 ;
-(void)_setImage:(id)arg1 ;
-(void)_setPlayerGestureRecognizer:(id)arg1 ;
-(long long)currentIrisMode;
-(void)_resetPrewiredAVPlayer;
-(BOOL)_setupContentViewForMode:(long long)arg1 ;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(void)playerViewGestureRecognizerDidChange:(id)arg1 ;
-(void)dealloc;
@end

