/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class UILabel;

@interface CPSLabeledValueView : UIView {

	UILabel* _valueText;
	UILabel* _label;

}

@property (nonatomic,readonly) UILabel * valueText;              //@synthesize valueText=_valueText - In the implementation block
@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
-(id)init;
-(UILabel *)label;
-(void)setTextColor:(id)arg1 ;
-(UILabel *)valueText;
@end

