/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <UIKitCore/UILabel.h>

@class UIView, NSString, UIColor;

@interface CPSLabelWithPlaceholder : UILabel {

	UIView* _placeholderView;
	NSString* _text;
	UIColor* _placeholderColor;
	double _placeholderWidth;

}

@property (nonatomic,retain) UIColor * placeholderColor;              //@synthesize placeholderColor=_placeholderColor - In the implementation block
@property (assign,nonatomic) double placeholderWidth;                 //@synthesize placeholderWidth=_placeholderWidth - In the implementation block
-(UIColor *)placeholderColor;
-(CGSize)intrinsicContentSize;
-(void)setAttributedText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setPlaceholderColor:(UIColor *)arg1 ;
-(id)text;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)_placeholderInputsDidChange;
-(CGSize)_desiredPlaceholderSize;
-(void)setPlaceholderWidth:(double)arg1 ;
-(double)placeholderWidth;
@end

