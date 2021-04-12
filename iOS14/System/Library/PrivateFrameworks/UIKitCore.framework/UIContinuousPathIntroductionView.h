/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSLayoutConstraint *)videoHeight;
-(void)setVideoWidth:(NSLayoutConstraint *)arg1 ;
-(UIView *)keyboardView;
-(void)setVideoLayer:(AVPlayerLayer *)arg1 ;
-(void)updateVideoLayerWithNewVideo:(BOOL)arg1 ;
-(NSLayoutConstraint *)videoWidth;
-(id)mediaContents;
-(UIButton *)landscapeButton;
-(void)setLandscapeConstraints:(NSArray *)arg1 ;
-(id)initWithKeyboardAppearance:(long long)arg1 ;
-(long long)textBodyMaxLines;
-(void)setKeyboardView:(UIView *)arg1 ;
-(id)_introductionMovieAssetURL;
-(double)mediaLayoutWidthAdjustment;
-(void)extraButtonTapAction;
-(NSArray *)landscapeConstraints;
-(id)textBodyDescriptions;
-(UILabel *)landscapeTextBody;
-(id)textTitleDescriptions;
-(void)setLandscapeTextBody:(UILabel *)arg1 ;
-(void)setTextVideoContainer:(UIView *)arg1 ;
-(void)setupConstraintData;
-(NSArray *)portraitConstraints;
-(void)setLandscapeButton:(UIButton *)arg1 ;
-(UIView *)textVideoContainer;
-(void)setPortraitConstraints:(NSArray *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(AVPlayerLayer *)videoLayer;
-(void)setVideoHeight:(NSLayoutConstraint *)arg1 ;
@end

