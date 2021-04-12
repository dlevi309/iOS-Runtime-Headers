/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, MTUIDigitalClockLabel, UIImageView, MTUIBedtimeGraphView, UIButton, MTAlarm, NSArray, UIFont;

@interface MTUIBedtimeTimeInBedView : UIView {

	double _glyphSize;
	long long _options;
	UILabel* _titleLabel;
	MTUIDigitalClockLabel* _bedtimeLabel;
	MTUIDigitalClockLabel* _wakeLabel;
	UIImageView* _bedtimeGlyph;
	UIImageView* _wakeGlyph;
	MTUIBedtimeGraphView* _graphView;
	UIButton* _moreHistoryButton;

}

@property (assign,nonatomic) long long options;                                 //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) MTUIDigitalClockLabel * bedtimeLabel;              //@synthesize bedtimeLabel=_bedtimeLabel - In the implementation block
@property (nonatomic,retain) MTUIDigitalClockLabel * wakeLabel;                 //@synthesize wakeLabel=_wakeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * bedtimeGlyph;                        //@synthesize bedtimeGlyph=_bedtimeGlyph - In the implementation block
@property (nonatomic,retain) UIImageView * wakeGlyph;                           //@synthesize wakeGlyph=_wakeGlyph - In the implementation block
@property (nonatomic,retain) MTUIBedtimeGraphView * graphView;                  //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,retain) UIButton * moreHistoryButton;                      //@synthesize moreHistoryButton=_moreHistoryButton - In the implementation block
@property (assign,nonatomic) double glyphSize;                                  //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,copy) MTAlarm * sleepAlarm; 
@property (nonatomic,retain) NSArray * sleepData; 
@property (nonatomic,readonly) UIFont * titleFont; 
+(long long)defaultOptions;
-(long long)options;
-(id)initWithOptions:(long long)arg1 ;
-(void)setOptions:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(double)glyphSize;
-(UIFont *)titleFont;
-(void)setupConstraints;
-(id)initWithFrame:(CGRect)arg1 options:(long long)arg2 ;
-(MTAlarm *)sleepAlarm;
-(void)setSleepAlarm:(MTAlarm *)arg1 ;
-(MTUIBedtimeGraphView *)graphView;
-(void)setGraphView:(MTUIBedtimeGraphView *)arg1 ;
-(void)setGlyphSize:(double)arg1 ;
-(NSArray *)sleepData;
-(void)setSleepData:(NSArray *)arg1 ;
-(void)setBedtimeLabel:(MTUIDigitalClockLabel *)arg1 ;
-(MTUIDigitalClockLabel *)bedtimeLabel;
-(void)setWakeLabel:(MTUIDigitalClockLabel *)arg1 ;
-(MTUIDigitalClockLabel *)wakeLabel;
-(void)setBedtimeGlyph:(UIImageView *)arg1 ;
-(UIImageView *)bedtimeGlyph;
-(void)setWakeGlyph:(UIImageView *)arg1 ;
-(UIImageView *)wakeGlyph;
-(void)setMoreHistoryButton:(UIButton *)arg1 ;
-(UIButton *)moreHistoryButton;
-(void)moreHistoryButtonPressed:(id)arg1 ;
@end

