/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIImageView.h>

@class UIButton, UIImage, UIActivityIndicatorView;

@interface SXAudioComponentOverlayView : UIImageView {

	UIButton* _playButton;
	UIImage* _audioIndicatorImage;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,readonly) UIImage * audioIndicatorImage;                            //@synthesize audioIndicatorImage=_audioIndicatorImage - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIButton * playButton;                                    //@synthesize playButton=_playButton - In the implementation block
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)stopActivityIndicator;
-(void)startActivityIndicator;
-(UIButton *)playButton;
-(UIImage *)audioIndicatorImage;
@end

