/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol SKUIEmbeddedMediaViewDelegate;
@class NSString, MPMoviePlayerController, UIImageView, UIImage;

@interface SKUIEmbeddedMediaView : UIControl {

	id<SKUIEmbeddedMediaViewDelegate> _delegate;
	long long _mediaType;
	NSString* _mediaURLString;
	MPMoviePlayerController* _moviePlayer;
	UIImageView* _playerDecorationView;
	UIImageView* _thumbnailReflectionView;
	UIImageView* _thumbnailView;
	BOOL _usingInlinePlayback;

}

@property (assign,nonatomic,__weak) id<SKUIEmbeddedMediaViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mediaType;                                            //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * mediaURLString;                                        //@synthesize mediaURLString=_mediaURLString - In the implementation block
@property (nonatomic,readonly) long long playbackState; 
@property (assign,nonatomic) BOOL showsThumbnailReflection; 
@property (assign,nonatomic) long long thumbnailContentMode; 
@property (nonatomic,retain) UIImage * thumbnailImage; 
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(id<SKUIEmbeddedMediaViewDelegate>)delegate;
-(long long)playbackState;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUIEmbeddedMediaViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(UIImage *)thumbnailImage;
-(id)_thumbnailView;
-(void)setThumbnailImage:(UIImage *)arg1 ;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)dealloc;
-(NSString *)mediaURLString;
-(void)setThumbnailContentMode:(long long)arg1 ;
-(BOOL)showsThumbnailReflection;
-(void)beginPlaybackAnimated:(BOOL)arg1 ;
-(void)setShowsThumbnailReflection:(BOOL)arg1 ;
-(void)setMediaURLString:(NSString *)arg1 ;
-(void)endPlaybackAnimated:(BOOL)arg1 ;
-(void)beginInlinePlaybackWithURL:(id)arg1 ;
-(void)_tearDownMoviePlayer;
-(id)_newMoviePlayerControllerWithURL:(id)arg1 ;
-(long long)thumbnailContentMode;
-(CGSize)_sizeToFitImageSize:(CGSize)arg1 bounds:(CGRect)arg2 ;
-(void)_sendPlaybackStateChanged;
-(void)_didExitFullscreen:(id)arg1 ;
-(void)_didFinishPlayback:(id)arg1 ;
@end

