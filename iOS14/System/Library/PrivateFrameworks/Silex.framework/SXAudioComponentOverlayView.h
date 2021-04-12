/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIActivityIndicatorView *)activityIndicator;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)playButton;
-(id)image;
-(void)startActivityIndicator;
-(void)stopActivityIndicator;
-(UIImage *)audioIndicatorImage;
@end

