/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <UIKitCore/UIImageView.h>

@class SVVideoPlayButton;

@interface SXPosterFrameView : UIImageView {

	SVVideoPlayButton* _playButton;

}

@property (nonatomic,retain) SVVideoPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(SVVideoPlayButton *)playButton;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPlayButton:(SVVideoPlayButton *)arg1 ;
@end

