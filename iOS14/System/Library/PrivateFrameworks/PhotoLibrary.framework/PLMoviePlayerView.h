/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)videoView;
-(void)setScaleMode:(long long)arg1 ;
-(long long)destinationPlaceholderStyle;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(void)dealloc;
-(void)reattachVideoView;
-(BOOL)isDestinationPlaceholderHidden;
-(void)setDestinationPlaceholderHidden:(BOOL)arg1 ;
-(void)_installBackgroundView:(id)arg1 ;
@end

