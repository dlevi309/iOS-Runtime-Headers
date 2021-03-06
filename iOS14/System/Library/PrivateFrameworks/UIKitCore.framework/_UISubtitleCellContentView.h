/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIContentViewComponentDescribing.h>
#import <UIKitCore/_UIContentView.h>

@class NSLayoutRect, _UISubtitleCellContentViewConfiguration, _UIContentViewEditingController, UIImageView, UILabel, NSString;

@interface _UISubtitleCellContentView : UIView <_UIContentViewComponentDescribing, _UIContentView> {

	_UISubtitleCellContentViewConfiguration* _animatingFromConfiguration;
	_UISubtitleCellContentViewConfiguration* _animatingToConfiguration;
	double _preferredMaxLayoutWidth;
	_UIContentViewEditingController* _editingController;
	_UISubtitleCellContentViewConfiguration* _configuration;
	UIImageView* _imageView;
	UILabel* _textLabel;
	UILabel* _subtitleLabel;
	/*^block*/id _primaryTextFrameDidChangeHandler;

}

@property (nonatomic,copy) _UISubtitleCellContentViewConfiguration * configuration;                                        //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                                                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                                                                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) NSLayoutRect * _primaryTextLayoutRect; 
@property (nonatomic,readonly) CGRect _primaryTextLayoutFrame; 
@property (setter=_setPrimaryTextFrameDidChangeHandler:,nonatomic,copy) id _primaryTextFrameDidChangeHandler;              //@synthesize primaryTextFrameDidChangeHandler=_primaryTextFrameDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)becomeFirstResponder;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(id)initWithConfiguration:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)_layoutMarginsDidChangeFromOldMargins:(UIEdgeInsets)arg1 ;
-(NSString *)description;
-(void)layoutSubviews;
-(_UISubtitleCellContentViewConfiguration *)configuration;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGRect)_primaryTextLayoutFrame;
-(id)_primaryTextFrameDidChangeHandler;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(void)_setPrimaryTextFrameDidChangeHandler:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_encodableSubviews;
-(UILabel *)textLabel;
-(NSLayoutRect *)_primaryTextLayoutRect;
-(void)_setMultilineContextWidth:(double)arg1 ;
-(double)_preferredMaxLayoutWidth;
-(void)setConfiguration:(_UISubtitleCellContentViewConfiguration *)arg1 ;
-(double)_multilineContextWidth;
@end

