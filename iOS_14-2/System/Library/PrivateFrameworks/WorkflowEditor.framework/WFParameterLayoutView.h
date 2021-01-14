/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)highlight;
-(id)accessibilityElements;
-(BOOL)isSelectable;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<WFParameterLayoutViewDelegate>)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(void)unhighlight;
-(BOOL)isHighlighted;
-(void)updateBackgroundColor;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIColor *)normalBackgroundColor;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)fadeOutHighlight;
@end

