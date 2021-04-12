/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class CAShapeLayer, PKShapeView, UIImageView, UILabel, CAFilter;

@interface PKAddPassButton : UIButton {

	CAShapeLayer* _layer;
	CGSize _boundsSize;
	PKShapeView* _maskView;
	UIImageView* _iconView;
	UILabel* _singleLineLabel;
	UILabel* _multiLineLabel;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	CGSize _iconSize;
	CGSize _singleLineSize;
	UIEdgeInsets _singleLineAlignmentInset;
	CGSize _multiLineSize;
	UIEdgeInsets _multiLineAlignmentInset;
	BOOL _useLayoutMargins;
	long long _addPassButtonStyle;

}

@property (assign,nonatomic) long long addPassButtonStyle;              //@synthesize addPassButtonStyle=_addPassButtonStyle - In the implementation block
+(Class)layerClass;
+(id)addPassButtonWithStyle:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_sharedInit;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithAddPassButtonStyle:(long long)arg1 ;
-(void)_applyStyle;
-(void)_adjustVisibleLabelWithBounds:(CGRect)arg1 ;
-(CGSize)_intrinsicMultiLineSize;
-(BOOL)_singleLineFitsSize:(CGSize)arg1 ;
-(CGSize)_intrinsicSingleLineSize;
-(void)setAddPassButtonStyle:(long long)arg1 ;
-(long long)addPassButtonStyle;
@end

