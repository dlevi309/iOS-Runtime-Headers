/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityElements;
-(NUErrorMessage *)errorMessage;
-(long long)textAlignment;
-(void)layoutSubviews;
-(unsigned long long)verticalAlignment;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(UILabel *)label;
-(void)setErrorMessage:(NUErrorMessage *)arg1 ;
-(id)attributedStringForErrorMessage:(id)arg1 ;
-(NUTrait *)labelMaxWidthTrait;
-(id)initWithErrorMessage:(id)arg1 ;
-(void)errorMessage:(id)arg1 ;
-(void)setLabelMaxWidthTrait:(NUTrait *)arg1 ;
@end

