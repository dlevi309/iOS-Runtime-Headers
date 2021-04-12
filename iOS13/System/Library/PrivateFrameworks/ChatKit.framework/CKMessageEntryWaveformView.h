/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, UIImageView, UIVisualEffectView, UILabel;

@interface CKMessageEntryWaveformView : UIView {

	double _duration;
	NSMutableArray* _powerLevels;
	UIImageView* _waveformImageView;
	unsigned long long _maxPowerLevelsCount;
	UIVisualEffectView* _blurView;
	UIImageView* _balloonImageView;
	UILabel* _timeLabel;
	double _minTimeLabelWidth;

}

@property (assign,nonatomic) unsigned long long maxPowerLevelsCount;              //@synthesize maxPowerLevelsCount=_maxPowerLevelsCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * powerLevels;                        //@synthesize powerLevels=_powerLevels - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * blurView;                       //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIImageView * balloonImageView;                      //@synthesize balloonImageView=_balloonImageView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                 //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;                     //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                            //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (assign,nonatomic) double duration;                                     //@synthesize duration=_duration - In the implementation block
+(id)waveformCurveTransform;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(double)minTimeLabelWidth;
-(void)setPowerLevels:(NSMutableArray *)arg1 ;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(NSMutableArray *)powerLevels;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(void)setMaxPowerLevelsCount:(unsigned long long)arg1 ;
-(UIImageView *)balloonImageView;
-(UILabel *)timeLabel;
-(UIImageView *)waveformImageView;
-(void)updateWaveform;
-(unsigned long long)maxPowerLevelsCount;
@end

