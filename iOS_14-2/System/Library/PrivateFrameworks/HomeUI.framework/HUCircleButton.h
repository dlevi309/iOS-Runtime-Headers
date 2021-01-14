/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setupConstraints;
-(UIImageView *)iconImageView;
-(NSArray *)constraints;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(HUCircleView *)circleView;
-(void)setCircleView:(HUCircleView *)arg1 ;
@end

