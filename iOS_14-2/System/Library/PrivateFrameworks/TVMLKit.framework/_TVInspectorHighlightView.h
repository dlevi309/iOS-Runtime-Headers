/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIColor *)contentColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)borderColor;
-(void)setContentColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)highlightView:(id)arg1 ;
-(UIWindow *)targetWindow;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setTargetWindow:(UIWindow *)arg1 ;
@end

