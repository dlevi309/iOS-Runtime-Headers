/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView, UILabel, CAShapeLayer;

@interface HURecordingButton : UIControl {

	UIImage* _currentButtonImage;
	UIImage* _nextButtonImage;
	UIImageView* _currentButtonImageView;
	UIImageView* _nextButtonImageView;
	UILabel* _currentButtonLabel;
	CAShapeLayer* _stopButtonStrokeLayer;
	unsigned long long _currentRecordingState;

}

@property (nonatomic,retain) UIImage * currentButtonImage;                          //@synthesize currentButtonImage=_currentButtonImage - In the implementation block
@property (nonatomic,retain) UIImage * nextButtonImage;                             //@synthesize nextButtonImage=_nextButtonImage - In the implementation block
@property (nonatomic,retain) UIImageView * currentButtonImageView;                  //@synthesize currentButtonImageView=_currentButtonImageView - In the implementation block
@property (nonatomic,retain) UIImageView * nextButtonImageView;                     //@synthesize nextButtonImageView=_nextButtonImageView - In the implementation block
@property (nonatomic,retain) UILabel * currentButtonLabel;                          //@synthesize currentButtonLabel=_currentButtonLabel - In the implementation block
@property (nonatomic,retain) CAShapeLayer * stopButtonStrokeLayer;                  //@synthesize stopButtonStrokeLayer=_stopButtonStrokeLayer - In the implementation block
@property (assign,nonatomic) unsigned long long currentRecordingState;              //@synthesize currentRecordingState=_currentRecordingState - In the implementation block
-(void)_updateHighlight;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIImage *)currentButtonImage;
-(void)setCurrentRecordingState:(unsigned long long)arg1 ;
-(UIImageView *)currentButtonImageView;
-(UIImageView *)nextButtonImageView;
-(void)setNextButtonImageView:(UIImageView *)arg1 ;
-(void)setCurrentButtonImageView:(UIImageView *)arg1 ;
-(UILabel *)currentButtonLabel;
-(unsigned long long)currentRecordingState;
-(CAShapeLayer *)stopButtonStrokeLayer;
-(void)setCurrentButtonLabel:(UILabel *)arg1 ;
-(id)initWithSize:(CGSize)arg1 state:(unsigned long long)arg2 image:(id)arg3 ;
-(id)initWithSize:(CGSize)arg1 state:(unsigned long long)arg2 title:(id)arg3 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setText:(id)arg1 forState:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setCurrentButtonImage:(UIImage *)arg1 ;
-(UIImage *)nextButtonImage;
-(void)setNextButtonImage:(UIImage *)arg1 ;
-(void)setStopButtonStrokeLayer:(CAShapeLayer *)arg1 ;
@end

