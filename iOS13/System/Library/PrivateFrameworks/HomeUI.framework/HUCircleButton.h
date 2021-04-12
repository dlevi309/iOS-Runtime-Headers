/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage, HUCircleView, UIImageView, NSArray;

@interface HUCircleButton : UIButton {

	UIImage* _iconImage;
	HUCircleView* _circleView;
	UIImageView* _iconImageView;
	NSArray* _constraints;

}

@property (nonatomic,retain) HUCircleView * circleView;                //@synthesize circleView=_circleView - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                    //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
-(NSArray *)constraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)tintColorDidChange;
-(void)setConstraints:(NSArray *)arg1 ;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)_setupConstraints;
-(HUCircleView *)circleView;
-(void)setCircleView:(HUCircleView *)arg1 ;
@end

