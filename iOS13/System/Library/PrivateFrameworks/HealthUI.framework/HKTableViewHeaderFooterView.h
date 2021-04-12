/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface HKTableViewHeaderFooterView : UIView {

	UILabel* _label;
	double _preferredMaxLayoutWidth;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
-(id)init;
-(UILabel *)label;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(void)updateFont;
-(double)preferredMaxLayoutWidth;
@end

