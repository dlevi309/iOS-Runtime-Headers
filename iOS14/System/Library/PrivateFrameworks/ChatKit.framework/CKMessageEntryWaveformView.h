/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(double)minTimeLabelWidth;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)duration;
-(NSMutableArray *)powerLevels;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(void)setPowerLevels:(NSMutableArray *)arg1 ;
-(void)updateWaveform;
-(void)setBalloonImageView:(UIImageView *)arg1 ;
-(UIImageView *)balloonImageView;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(void)setMaxPowerLevelsCount:(unsigned long long)arg1 ;
-(UIImageView *)waveformImageView;
-(unsigned long long)maxPowerLevelsCount;
@end

