/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, NSString, PXAnimatedCounter, UILabel, NSLayoutConstraint;

@interface PXAnimatedLabel : UIView {

	UIFont* _font;
	NSString* _text;
	PXAnimatedCounter* _counter;
	UILabel* _label;
	NSLayoutConstraint* _counterWidthConstraint;

}

@property (retain) PXAnimatedCounter * counter;                                //@synthesize counter=_counter - In the implementation block
@property (retain) UILabel * label;                                            //@synthesize label=_label - In the implementation block
@property (readonly) NSLayoutConstraint * counterWidthConstraint;              //@synthesize counterWidthConstraint=_counterWidthConstraint - In the implementation block
@property (nonatomic,retain) UIFont * font;                                    //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)commonInit;
-(void)setText:(id)arg1 withAnimationStyle:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_updateConstraintsForText;
-(NSLayoutConstraint *)counterWidthConstraint;
-(PXAnimatedCounter *)counter;
-(void)layoutSubviews;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setCounter:(PXAnimatedCounter *)arg1 ;
-(UILabel *)label;
-(UIFont *)font;
@end

