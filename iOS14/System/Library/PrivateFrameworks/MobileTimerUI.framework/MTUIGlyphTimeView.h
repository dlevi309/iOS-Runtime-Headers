/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(NSString *)glyphName;
-(id)initWithFont:(id)arg1 textColor:(id)arg2 glyphName:(id)arg3 style:(unsigned long long)arg4 ;
-(void)setComponentColor:(id)arg1 ;
-(void)setupTimeLabelWithFont:(id)arg1 textColor:(id)arg2 ;
-(void)setupGlyphName:(id)arg1 size:(double)arg2 glyphColor:(id)arg3 ;
-(void)setGlyphName:(NSString *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(void)setupConstraints;
-(unsigned long long)style;
-(UIImageView *)glyphImageView;
@end

