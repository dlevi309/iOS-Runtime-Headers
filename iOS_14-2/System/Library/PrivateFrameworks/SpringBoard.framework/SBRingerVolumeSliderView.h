/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)fillView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setFillView:(UIView *)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)layoutSubviews;
-(double)value;
@end

