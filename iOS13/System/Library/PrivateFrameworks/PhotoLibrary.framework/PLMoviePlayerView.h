/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIView.h>

@class PLAVPlayerView, UIView, AVPlayer;

@interface PLMoviePlayerView : UIView {

	PLAVPlayerView* _avPlayerView;
	BOOL _destinationPlaceholderHidden;
	long long _destinationPlaceholderStyle;

}

@property (nonatomic,retain,readonly) UIView * videoView; 
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) long long destinationPlaceholderStyle;                                              //@synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle - In the implementation block
@property (assign,getter=isDestinationPlaceholderHidden,nonatomic) BOOL destinationPlaceholderHidden; 
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(UIView *)videoView;
-(void)setScaleMode:(long long)arg1 ;
-(long long)destinationPlaceholderStyle;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(void)reattachVideoView;
-(BOOL)isDestinationPlaceholderHidden;
-(void)setDestinationPlaceholderHidden:(BOOL)arg1 ;
-(void)_installBackgroundView:(id)arg1 ;
@end

