/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTextColor:(id)arg1 ;
-(UILabel *)label;
-(UILabel *)valueText;
@end

