/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>

@class UIColor, NSMutableArray, UILabel, SUICFlamesView, NSArray, NSString;

@interface HUWaveformView : UIView <SUICFlamesViewDelegate> {

	UIColor* _waveformColor;
	NSMutableArray* _audioPowerLevels;
	UILabel* _timeLabel;
	double _minTimeLabelWidth;
	UIColor* _backgroundColor;
	NSMutableArray* _waveformSlices;
	SUICFlamesView* _flamesView;

}

@property (nonatomic,retain) NSMutableArray * audioPowerLevels;              //@synthesize audioPowerLevels=_audioPowerLevels - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                            //@synthesize timeLabel=_timeLabel - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                       //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSMutableArray * waveformSlices;                //@synthesize waveformSlices=_waveformSlices - In the implementation block
@property (nonatomic,retain) SUICFlamesView * flamesView;                    //@synthesize flamesView=_flamesView - In the implementation block
@property (nonatomic,readonly) NSArray * powerLevels; 
@property (nonatomic,retain) UIColor * waveformColor;                        //@synthesize waveformColor=_waveformColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(double)minTimeLabelWidth;
-(void)layoutSubviews;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(NSArray *)powerLevels;
-(void)clearPowerLevels;
-(void)appendPowerLevel:(double)arg1 ;
-(SUICFlamesView *)flamesView;
-(NSMutableArray *)audioPowerLevels;
-(void)setAudioPowerLevels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)waveformSlices;
-(id)initWithFrame:(CGRect)arg1 waveformColor:(id)arg2 backgroundColor:(id)arg3 ;
-(void)setWaveformColor:(UIColor *)arg1 ;
-(UIColor *)waveformColor;
-(void)setWaveformSlices:(NSMutableArray *)arg1 ;
-(void)setFlamesView:(SUICFlamesView *)arg1 ;
@end

