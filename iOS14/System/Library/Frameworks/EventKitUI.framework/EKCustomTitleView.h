/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView;

@interface EKCustomTitleView : UIView {

	BOOL _showSubtitle;
	BOOL _animating;
	UILabel* _originalTitle;
	UILabel* _title;
	UIImageView* _originalImage;
	UIImageView* _titleImage;
	UILabel* _subTitle;

}

@property (retain) UILabel * originalTitle;                  //@synthesize originalTitle=_originalTitle - In the implementation block
@property (retain) UILabel * title;                          //@synthesize title=_title - In the implementation block
@property (retain) UIImageView * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
@property (retain) UIImageView * titleImage;                 //@synthesize titleImage=_titleImage - In the implementation block
@property (retain) UILabel * subTitle;                       //@synthesize subTitle=_subTitle - In the implementation block
@property (assign) BOOL showSubtitle;                        //@synthesize showSubtitle=_showSubtitle - In the implementation block
@property (assign) BOOL animating;                           //@synthesize animating=_animating - In the implementation block
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAccessibilityElement;
-(UIImageView *)originalImage;
-(CGRect)_centerAndClipFrame:(CGRect)arg1 ;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3 ;
-(void)animateInWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateOutWithCompletionBlock:(/*^block*/id)arg1 ;
-(UILabel *)originalTitle;
-(void)setOriginalTitle:(UILabel *)arg1 ;
-(void)setTitleImage:(UIImageView *)arg1 ;
-(BOOL)animating;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)subTitle;
-(void)setSubTitle:(UILabel *)arg1 ;
-(UIImageView *)titleImage;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(long long)accessibilityElementCount;
-(void)setOriginalImage:(UIImageView *)arg1 ;
-(void)setShowSubtitle:(BOOL)arg1 ;
-(BOOL)showSubtitle;
-(UILabel *)title;
@end

