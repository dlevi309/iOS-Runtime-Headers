/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface SBRingerVolumeSliderView : UIView {

	double _value;
	UIView* _backgroundView;
	UIView* _fillView;

}

@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * fillView;                    //@synthesize fillView=_fillView - In the implementation block
@property (assign,nonatomic) double value;                         //@synthesize value=_value - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setFillView:(UIView *)arg1 ;
-(UIView *)fillView;
@end

