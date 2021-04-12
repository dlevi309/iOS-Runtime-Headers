/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(UIImage *)image;
-(BOOL)squareImage;
-(id)albumArtImage;
-(void)setAlbumVisible:(BOOL)arg1 reflectionVisible:(BOOL)arg2 ;
-(void)setFrame:(CGRect)arg1 withReflectionHeight:(double)arg2 ;
-(void)setSquareImage:(BOOL)arg1 ;
-(void)setReflectionVisible:(BOOL)arg1 withDuration:(float)arg2 ;
@end

