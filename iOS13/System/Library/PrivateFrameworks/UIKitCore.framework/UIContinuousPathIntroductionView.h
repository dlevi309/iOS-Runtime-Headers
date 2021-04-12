/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBTutorialModalDisplay.h>

@class AVPlayerLooper, AVQueuePlayer, UIView, UILabel, UIButton, NSArray, AVPlayerLayer, NSLayoutConstraint;

@interface UIContinuousPathIntroductionView : UIKBTutorialModalDisplay {

	CGSize _videoSize;
	double _textMargin;
	double _paddingAdjust;
	AVPlayerLooper* _playerLooper;
	AVQueuePlayer* _player;
	UIView* _textVideoContainer;
	UILabel* _landscapeTextBody;
	UIView* _keyboardView;
	UIButton* _landscapeButton;
	NSArray* _portraitConstraints;
	NSArray* _landscapeConstraints;
	AVPlayerLayer* _videoLayer;
	NSLayoutConstraint* _videoWidth;
	NSLayoutConstraint* _videoHeight;

}

@property (nonatomic,retain) UIView * textVideoContainer;                   //@synthesize textVideoContainer=_textVideoContainer - In the implementation block
@property (nonatomic,retain) UILabel * landscapeTextBody;                   //@synthesize landscapeTextBody=_landscapeTextBody - In the implementation block
@property (nonatomic,retain) UIView * keyboardView;                         //@synthesize keyboardView=_keyboardView - In the implementation block
@property (nonatomic,retain) UIButton * landscapeButton;                    //@synthesize landscapeButton=_landscapeButton - In the implementation block
@property (nonatomic,retain) NSArray * portraitConstraints;                 //@synthesize portraitConstraints=_portraitConstraints - In the implementation block
@property (nonatomic,retain) NSArray * landscapeConstraints;                //@synthesize landscapeConstraints=_landscapeConstraints - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * videoLayer;                    //@synthesize videoLayer=_videoLayer - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoWidth;               //@synthesize videoWidth=_videoWidth - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoHeight;              //@synthesize videoHeight=_videoHeight - In the implementation block
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(UILabel *)landscapeTextBody;
-(void)setupConstraintData;
-(UIView *)textVideoContainer;
-(UIView *)keyboardView;
-(NSLayoutConstraint *)videoWidth;
-(void)setVideoWidth:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)videoHeight;
-(void)setVideoHeight:(NSLayoutConstraint *)arg1 ;
-(void)updateVideoLayerWithNewVideo:(BOOL)arg1 ;
-(UIButton *)landscapeButton;
-(void)extraButtonTapAction;
-(NSArray *)landscapeConstraints;
-(void)setLandscapeConstraints:(NSArray *)arg1 ;
-(NSArray *)portraitConstraints;
-(void)setPortraitConstraints:(NSArray *)arg1 ;
-(id)_introductionMovieAssetURL;
-(AVPlayerLayer *)videoLayer;
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
-(id)mediaContents;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)textTitleDescriptions;
-(id)textBodyDescriptions;
-(double)mediaLayoutWidthAdjustment;
-(long long)textBodyMaxLines;
-(void)setTextVideoContainer:(UIView *)arg1 ;
-(void)setLandscapeTextBody:(UILabel *)arg1 ;
-(void)setKeyboardView:(UIView *)arg1 ;
-(void)setLandscapeButton:(UIButton *)arg1 ;
@end

