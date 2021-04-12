/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISAnimatedImagePlayerDestination.h>

@class UIImageView, ISAnimatedImagePlayer, ISAnimatedImage, NSString;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination> {

	UIImageView* _placeholderImageView;
	ISAnimatedImagePlayer* _player;

}

@property (assign,nonatomic) UIImageView * placeholderImageView;                  //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) ISAnimatedImage * image; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) unsigned long long displayedFrameIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(ISAnimatedImage *)image;
-(void)setImage:(ISAnimatedImage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)displayLayer:(id)arg1 ;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(ISAnimatedImagePlayer *)player;
-(void)setPlayer:(ISAnimatedImagePlayer *)arg1 ;
-(id)initWithAnimatedImage:(id)arg1 ;
-(BOOL)isReadyToDisplay;
-(void)frameDidChange;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayedFrameIndex;
-(void)didBeginAnimating;
-(id)initWithAnimatedImagePlayer:(id)arg1 ;
@end

