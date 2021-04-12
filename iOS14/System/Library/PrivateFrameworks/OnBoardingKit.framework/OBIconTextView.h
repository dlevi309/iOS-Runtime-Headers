/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UITextView;

@interface OBIconTextView : UIView {

	UIImageView* _iconView;
	UITextView* _textView;
	double _padding;
	double _baselineFromBoundsTop;
	CGSize _iconSize;

}

@property (nonatomic,retain) UIImageView * iconView;                      //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                             //@synthesize iconSize=_iconSize - In the implementation block
@property (nonatomic,retain) UITextView * textView;                       //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic) double padding;                              //@synthesize padding=_padding - In the implementation block
@property (nonatomic,readonly) double baselineFromBoundsTop;              //@synthesize baselineFromBoundsTop=_baselineFromBoundsTop - In the implementation block
-(UITextView *)textView;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
-(void)setTextView:(UITextView *)arg1 ;
-(id)initWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 dataDetectorTypes:(unsigned long long)arg4 ;
-(double)baselineFromBoundsTop;
-(CGSize)iconSize;
-(void)updateConstraints;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)updateFont;
-(double)padding;
-(void)setPadding:(double)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

