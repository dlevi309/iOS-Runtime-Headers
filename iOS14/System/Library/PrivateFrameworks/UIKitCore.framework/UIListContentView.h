/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentViewComponentDescribing.h>
#import <UIKit/UIContentView.h>

@class UIListContentConfiguration, _UIListContentImageView, UILabel, UILayoutGuide, NSLayoutRect, NSString;

@interface UIListContentView : UIView <_UIContentViewComponentDescribing, UIContentView> {

	UIListContentConfiguration* _animatingFromConfiguration;
	UIListContentConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	UIListContentConfiguration* _configuration;
	_UIListContentImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _secondaryTextLabel;
	/*^block*/id _primaryTextFrameDidChangeHandler;
	UILayoutGuide* _textLayoutGuide;
	UILayoutGuide* _secondaryTextLayoutGuide;
	UILayoutGuide* _imageLayoutGuide;

}

@property (nonatomic,copy) UIListContentConfiguration * configuration;                                                     //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * textLayoutGuide;                                                            //@synthesize textLayoutGuide=_textLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * secondaryTextLayoutGuide;                                                   //@synthesize secondaryTextLayoutGuide=_secondaryTextLayoutGuide - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * imageLayoutGuide;                                                           //@synthesize imageLayoutGuide=_imageLayoutGuide - In the implementation block
@property (nonatomic,readonly) NSLayoutRect * _primaryTextLayoutRect; 
@property (nonatomic,readonly) CGRect _primaryTextLayoutFrame; 
@property (setter=_setPrimaryTextFrameDidChangeHandler:,nonatomic,copy) id _primaryTextFrameDidChangeHandler;              //@synthesize primaryTextFrameDidChangeHandler=_primaryTextFrameDidChangeHandler - In the implementation block
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
-(UIListContentConfiguration *)configuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)_primaryTextLayoutFrame;
-(id)_primaryTextFrameDidChangeHandler;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_setPrimaryTextFrameDidChangeHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(UILayoutGuide *)textLayoutGuide;
-(UILayoutGuide *)imageLayoutGuide;
-(NSLayoutRect *)_primaryTextLayoutRect;
-(UILayoutGuide *)secondaryTextLayoutGuide;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(double)_preferredMaxLayoutWidth;
-(void)setConfiguration:(UIListContentConfiguration *)arg1 ;
-(double)_multilineContextWidth;
@end

