/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)accessibilityIgnoresInvertColors;
-(SVVideoPlayButton *)playButton;
-(void)setPlayButton:(SVVideoPlayButton *)arg1 ;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
@end

