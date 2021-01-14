/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentView.h>

@class _UIBasicHeaderFooterContentViewConfiguration, UILabel, NSString;

@interface _UIBasicHeaderFooterContentView : UIView <_UIContentView> {

	_UIBasicHeaderFooterContentViewConfiguration* _animatingFromConfiguration;
	_UIBasicHeaderFooterContentViewConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	_UIBasicHeaderFooterContentViewConfiguration* _configuration;
	UILabel* _textLabel;

}

@property (nonatomic,copy) _UIBasicHeaderFooterContentViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                   //@synthesize textLabel=_textLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(_UIBasicHeaderFooterContentViewConfiguration *)configuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(id)initWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(UILabel *)textLabel;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(double)_preferredMaxLayoutWidth;
-(void)setConfiguration:(_UIBasicHeaderFooterContentViewConfiguration *)arg1 ;
-(double)_multilineContextWidth;
@end

