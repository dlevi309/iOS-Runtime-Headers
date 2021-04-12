/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, _TVInspectorHighlightMetadataView, UIWindow, UIColor, UILabel;

@interface _TVInspectorHighlightView : UIView {

	UIView* _highlightView;
	_TVInspectorHighlightMetadataView* _metadataView;
	UIWindow* _targetWindow;
	UIColor* _borderColor;

}

@property (assign,nonatomic,__weak) UIWindow * targetWindow;              //@synthesize targetWindow=_targetWindow - In the implementation block
@property (nonatomic,retain) UIColor * contentColor; 
@property (nonatomic,retain) UIColor * borderColor;                       //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel; 
-(void)setBorderColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)descriptionLabel;
-(void)highlightView:(id)arg1 ;
-(UIColor *)borderColor;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(UIWindow *)targetWindow;
-(void)setTargetWindow:(UIWindow *)arg1 ;
@end

