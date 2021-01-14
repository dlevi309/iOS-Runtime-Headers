/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISAnimatedImagePlayerDestination.h>

@class UIImageView, ISAnimatedImagePlayer, PFAnimatedImage, NSString;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination> {

	UIImageView* _placeholderImageView;
	ISAnimatedImagePlayer* _player;

}

@property (assign,nonatomic) UIImageView * placeholderImageView;                  //@synthesize placeholderImageView=_placeholderImageView - In the implementation block
@property (nonatomic,retain) ISAnimatedImagePlayer * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) PFAnimatedImage * image; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) unsigned long long displayedFrameIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ISAnimatedImagePlayer *)player;
-(void)setPlayer:(ISAnimatedImagePlayer *)arg1 ;
-(BOOL)isPlaying;
-(void)setImage:(PFAnimatedImage *)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(PFAnimatedImage *)image;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(UIImageView *)placeholderImageView;
-(void)setPlaceholderImageView:(UIImageView *)arg1 ;
-(id)initWithAnimatedImage:(id)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)dealloc;
-(void)setDisplayedFrameIndex:(unsigned long long)arg1 ;
-(unsigned long long)displayedFrameIndex;
-(BOOL)isReadyToDisplay;
-(void)didBeginAnimating;
-(void)frameDidChange;
-(id)initWithAnimatedImagePlayer:(id)arg1 ;
@end

