/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/_UIReflectingView.h>

@class UIImageView, UIImage;

@interface MPReflectionImageView : _UIReflectingView {

	UIImageView* _imageView;
	BOOL _squareImage;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) BOOL squareImage;                       //@synthesize squareImage=_squareImage - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(double)defaultReflectionHeight;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(id)albumArtImage;
-(void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2 ;
-(void)setFrame:(CGRect)arg1 withReflectionHeight:(double)arg2 ;
-(void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2 ;
-(BOOL)squareImage;
-(void)setSquareImage:(BOOL)arg1 ;
@end

