/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSLayoutConstraint;

@interface GKRatingView : UIView {

	double _value;
	UIImageView* _backgroundImageView;
	UIImageView* _foregroundImageView;
	NSLayoutConstraint* _foregroundWidthConstraint;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UIImageView * foregroundImageView;                           //@synthesize foregroundImageView=_foregroundImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * foregroundWidthConstraint;              //@synthesize foregroundWidthConstraint=_foregroundWidthConstraint - In the implementation block
@property (assign,nonatomic) double value;                                                //@synthesize value=_value - In the implementation block
-(UIImageView *)backgroundImageView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)commonSetup;
-(void)setForegroundWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)foregroundImageView;
-(NSLayoutConstraint *)foregroundWidthConstraint;
-(void)setForegroundImageView:(UIImageView *)arg1 ;
-(void)awakeFromNib;
-(double)value;
-(void)dealloc;
@end

