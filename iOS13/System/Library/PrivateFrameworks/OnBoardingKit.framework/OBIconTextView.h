/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPadding:(double)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)updateConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(double)padding;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)updateFont;
-(CGSize)iconSize;
-(void)setIconSize:(CGSize)arg1 ;
-(id)initWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 dataDetectorTypes:(unsigned long long)arg4 ;
-(double)baselineFromBoundsTop;
@end

