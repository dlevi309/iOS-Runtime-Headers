/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UIView.h>

@protocol WFParameterLayoutViewDelegate;
@class UIColor;

@interface WFParameterLayoutView : UIView {

	BOOL _selectable;
	BOOL _highlighted;
	id<WFParameterLayoutViewDelegate> _delegate;
	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (assign,getter=isSelectable,nonatomic) BOOL selectable;                            //@synthesize selectable=_selectable - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterLayoutViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * normalBackgroundColor;                                //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;                           //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(id<WFParameterLayoutViewDelegate>)delegate;
-(void)setDelegate:(id<WFParameterLayoutViewDelegate>)arg1 ;
-(BOOL)isSelectable;
-(id)accessibilityElements;
-(BOOL)isHighlighted;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)unhighlight;
-(void)highlight;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)normalBackgroundColor;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(void)fadeOutHighlight;
@end

