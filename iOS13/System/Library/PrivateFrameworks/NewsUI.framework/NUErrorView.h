/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <UIKitCore/UIView.h>

@class NUErrorMessage, UILabel, NUTrait;

@interface NUErrorView : UIView {

	NUErrorMessage* _errorMessage;
	long long _textAlignment;
	unsigned long long _verticalAlignment;
	UILabel* _label;
	NUTrait* _labelMaxWidthTrait;

}

@property (nonatomic,readonly) UILabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NUTrait * labelMaxWidthTrait;                      //@synthesize labelMaxWidthTrait=_labelMaxWidthTrait - In the implementation block
@property (nonatomic,retain) NUErrorMessage * errorMessage;                     //@synthesize errorMessage=_errorMessage - In the implementation block
@property (assign,nonatomic) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
-(UILabel *)label;
-(NUErrorMessage *)errorMessage;
-(unsigned long long)verticalAlignment;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(void)layoutSubviews;
-(long long)textAlignment;
-(void)setErrorMessage:(NUErrorMessage *)arg1 ;
-(id)attributedStringForErrorMessage:(id)arg1 ;
-(NUTrait *)labelMaxWidthTrait;
-(id)initWithErrorMessage:(id)arg1 ;
-(void)errorMessage:(id)arg1 ;
-(void)setLabelMaxWidthTrait:(NUTrait *)arg1 ;
@end

