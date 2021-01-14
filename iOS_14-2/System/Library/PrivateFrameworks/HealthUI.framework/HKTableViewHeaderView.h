/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface HKTableViewHeaderView : UIView {

	UILabel* _label;
	double _preferredMaxLayoutWidth;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UILabel * label;                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) double preferredMaxLayoutWidth;              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(UIEdgeInsets)contentInsets;
-(void)layoutSubviews;
-(double)preferredMaxLayoutWidth;
-(void)updateFont;
-(void)setPreferredMaxLayoutWidth:(double)arg1 ;
-(UILabel *)label;
@end

