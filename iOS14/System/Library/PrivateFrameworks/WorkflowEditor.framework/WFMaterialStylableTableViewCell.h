/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UITableViewCell.h>

@class UIColor, MTVisualStylingProvider, UIView;

@interface WFMaterialStylableTableViewCell : UITableViewCell {

	UIColor* _overridingBackgroundColor;
	MTVisualStylingProvider* _fillProvider;
	UIView* _highlightedBackgroundView;

}

@property (nonatomic,retain) UIView * highlightedBackgroundView;                  //@synthesize highlightedBackgroundView=_highlightedBackgroundView - In the implementation block
@property (nonatomic,retain) UIColor * overridingBackgroundColor;                 //@synthesize overridingBackgroundColor=_overridingBackgroundColor - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * fillProvider;              //@synthesize fillProvider=_fillProvider - In the implementation block
-(UIView *)highlightedBackgroundView;
-(void)setHighlightedBackgroundView:(UIView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setFillProvider:(MTVisualStylingProvider *)arg1 ;
-(UIColor *)overridingBackgroundColor;
-(void)setOverridingBackgroundColor:(UIColor *)arg1 ;
-(MTVisualStylingProvider *)fillProvider;
@end

