/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUI.framework/CarPlayUI
*/

#import <CarPlayUI/CarPlayUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, NSString, UIImage, NSArray, NSLayoutConstraint;

@interface CPUITransportControlView : UIView {

	BOOL _progressActive;
	double _buttonHeight;
	double _buttonSpacing;
	UIButton* _leftButton;
	UIButton* _playPauseButton;
	UIButton* _fastForwardButton;
	NSString* _playButtonImageName;
	NSString* _pauseButtonImageName;
	UIImage* _defaultLeftButtonImage;
	UIImage* _defaultFastForwardButtonImage;
	UIImage* _playImage;
	UIImage* _pauseImage;
	NSArray* _constraints;
	NSLayoutConstraint* _containerHeightConstraint;

}

@property (nonatomic,retain) UIImage * playImage;                                         //@synthesize playImage=_playImage - In the implementation block
@property (nonatomic,retain) UIImage * pauseImage;                                        //@synthesize pauseImage=_pauseImage - In the implementation block
@property (nonatomic,retain) UIImage * defaultLeftButtonImage;                            //@synthesize defaultLeftButtonImage=_defaultLeftButtonImage - In the implementation block
@property (nonatomic,retain) UIImage * defaultFastForwardButtonImage;                     //@synthesize defaultFastForwardButtonImage=_defaultFastForwardButtonImage - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                       //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerHeightConstraint;              //@synthesize containerHeightConstraint=_containerHeightConstraint - In the implementation block
@property (assign,nonatomic) double buttonHeight;                                         //@synthesize buttonHeight=_buttonHeight - In the implementation block
@property (assign,nonatomic) double buttonSpacing;                                        //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;                                     //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UIButton * playPauseButton;                                //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,readonly) UIButton * fastForwardButton;                              //@synthesize fastForwardButton=_fastForwardButton - In the implementation block
@property (assign,nonatomic) BOOL progressActive;                                         //@synthesize progressActive=_progressActive - In the implementation block
@property (nonatomic,retain) NSString * playButtonImageName;                              //@synthesize playButtonImageName=_playButtonImageName - In the implementation block
@property (nonatomic,retain) NSString * pauseButtonImageName;                             //@synthesize pauseButtonImageName=_pauseButtonImageName - In the implementation block
-(UIButton *)leftButton;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UIButton *)playPauseButton;
-(double)buttonHeight;
-(double)buttonSpacing;
-(UIImage *)playImage;
-(void)setButtonHeight:(double)arg1 ;
-(void)setButtonSpacing:(double)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setupConstraints;
-(UIImage *)pauseImage;
-(void)setPlayImage:(UIImage *)arg1 ;
-(void)setPauseImage:(UIImage *)arg1 ;
-(void)setPauseButtonImageName:(NSString *)arg1 ;
-(void)setPlayButtonImageName:(NSString *)arg1 ;
-(UIImage *)defaultLeftButtonImage;
-(UIImage *)defaultFastForwardButtonImage;
-(void)_updateProgressActive;
-(void)setProgressActive:(BOOL)arg1 ;
-(UIButton *)fastForwardButton;
-(BOOL)progressActive;
-(NSString *)playButtonImageName;
-(NSString *)pauseButtonImageName;
-(void)setDefaultLeftButtonImage:(UIImage *)arg1 ;
-(void)setDefaultFastForwardButtonImage:(UIImage *)arg1 ;
-(NSLayoutConstraint *)containerHeightConstraint;
-(void)setContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
@end

