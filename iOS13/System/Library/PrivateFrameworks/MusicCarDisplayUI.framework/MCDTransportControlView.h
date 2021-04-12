/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString, UIImage, NSLayoutConstraint;

@interface MCDTransportControlView : UIView {

	BOOL _progressActive;
	UIButton* _leftButton;
	UIButton* _playPauseButton;
	UIButton* _fastForwardButton;
	NSString* _playButtonImageName;
	NSString* _pauseButtonImageName;
	UIImage* _defaultLeftButtonImage;
	UIImage* _defaultFastForwardButtonImage;
	UIImage* _playImage;
	UIImage* _pauseImage;
	NSLayoutConstraint* _containerHeightConstraint;
	CGSize _buttonSize;

}

@property (nonatomic,retain) UIImage * playImage;                                         //@synthesize playImage=_playImage - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                        //@synthesize pauseImage=_pauseImage - In the implementation block
@property (nonatomic,retain) UIImage * defaultLeftButtonImage;                            //@synthesize defaultLeftButtonImage=_defaultLeftButtonImage - In the implementation block
@property (nonatomic,retain) UIImage * defaultFastForwardButtonImage;                     //@synthesize defaultFastForwardButtonImage=_defaultFastForwardButtonImage - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerHeightConstraint;              //@synthesize containerHeightConstraint=_containerHeightConstraint - In the implementation block
@property (assign,nonatomic) CGSize buttonSize;                                           //@synthesize buttonSize=_buttonSize - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UIButton * fastForwardButton;                              //@synthesize fastForwardButton=_fastForwardButton - In the implementation block
@property (assign,nonatomic) BOOL progressActive;                                         //@synthesize progressActive=_progressActive - In the implementation block
@property (nonatomic,retain) NSString * playButtonImageName;                              //@synthesize playButtonImageName=_playButtonImageName - In the implementation block
@property (nonatomic,retain) NSString * pauseButtonImageName;                             //@synthesize pauseButtonImageName=_pauseButtonImageName - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIButton *)leftButton;
-(void)setupConstraints;
-(CGSize)buttonSize;
-(UIImage *)playImage;
-(UIImage *)pauseImage;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(UIButton *)playPauseButton;
-(void)setButtonSize:(CGSize)arg1 ;
-(UIImage *)defaultLeftButtonImage;
-(UIImage *)defaultFastForwardButtonImage;
-(void)_updateProgressActive;
-(void)setProgressActive:(BOOL)arg1 ;
-(id)_defaultImageForIdentifier:(id)arg1 ;
-(void)setPlayButtonImageName:(NSString *)arg1 ;
-(void)setPauseButtonImageName:(NSString *)arg1 ;
-(UIButton *)fastForwardButton;
-(BOOL)progressActive;
-(NSString *)playButtonImageName;
-(NSString *)pauseButtonImageName;
-(void)setDefaultLeftButtonImage:(UIImage *)arg1 ;
-(void)setDefaultFastForwardButtonImage:(UIImage *)arg1 ;
-(NSLayoutConstraint *)containerHeightConstraint;
-(void)setContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

