/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WFParameterEditorHostingCell.h>

@class UIColor, MTVisualStylingProvider, UIView, WFComponentNavigationContextImpl;

@interface WFWidgetParameterEditorHostingCell : WFParameterEditorHostingCell {

	UIColor* _cardBackgroundColor;
	MTVisualStylingProvider* _strokeProvider;
	MTVisualStylingProvider* _fillProvider;
	UIView* _highlighedBackgroundView;
	UIColor* _labelColor;
	WFComponentNavigationContextImpl* _navigationContext;
	UIColor* _overridingBackgroundColor;

}

@property (nonatomic,retain) UIView * highlighedBackgroundView;                                 //@synthesize highlighedBackgroundView=_highlighedBackgroundView - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                                              //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) WFComponentNavigationContextImpl * navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
@property (nonatomic,retain) UIColor * overridingBackgroundColor;                               //@synthesize overridingBackgroundColor=_overridingBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * cardBackgroundColor;                                     //@synthesize cardBackgroundColor=_cardBackgroundColor - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * strokeProvider;                          //@synthesize strokeProvider=_strokeProvider - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * fillProvider;                            //@synthesize fillProvider=_fillProvider - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(UIColor *)cardBackgroundColor;
-(void)setCardBackgroundColor:(UIColor *)arg1 ;
-(void)updateContext;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(MTVisualStylingProvider *)strokeProvider;
-(void)setStrokeProvider:(MTVisualStylingProvider *)arg1 ;
-(WFComponentNavigationContextImpl *)navigationContext;
-(void)setNavigationContext:(WFComponentNavigationContextImpl *)arg1 ;
-(void)setFillProvider:(MTVisualStylingProvider *)arg1 ;
-(UIColor *)overridingBackgroundColor;
-(void)setOverridingBackgroundColor:(UIColor *)arg1 ;
-(MTVisualStylingProvider *)fillProvider;
-(void)setContainingViewController:(id)arg1 ;
-(void)applyStylingWithStrokeProvider:(id)arg1 fillProvider:(id)arg2 cardBackgroundColor:(id)arg3 ;
-(UIView *)highlighedBackgroundView;
-(void)setHighlighedBackgroundView:(UIView *)arg1 ;
@end

