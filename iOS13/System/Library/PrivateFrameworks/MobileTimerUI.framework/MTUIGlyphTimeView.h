/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, NSString;

@interface MTUIGlyphTimeView : UIView {

	UILabel* _timeLabel;
	UIImageView* _glyphImageView;
	NSString* _glyphName;
	unsigned long long _style;

}

@property (nonatomic,retain) UIImageView * glyphImageView;              //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) NSString * glyphName;                      //@synthesize glyphName=_glyphName - In the implementation block
@property (assign,nonatomic) unsigned long long style;                  //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                       //@synthesize timeLabel=_timeLabel - In the implementation block
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(NSString *)glyphName;
-(void)setupConstraints;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(UIImageView *)glyphImageView;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setGlyphName:(NSString *)arg1 ;
-(void)setupTimeLabelWithFont:(id)arg1 textColor:(id)arg2 ;
-(void)setupGlyphName:(id)arg1 size:(double)arg2 glyphColor:(id)arg3 ;
-(id)initWithFont:(id)arg1 textColor:(id)arg2 glyphName:(id)arg3 style:(unsigned long long)arg4 ;
-(void)setComponentColor:(id)arg1 ;
@end

