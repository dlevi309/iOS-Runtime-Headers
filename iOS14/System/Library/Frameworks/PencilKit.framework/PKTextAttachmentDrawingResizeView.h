/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIView.h>

@class PKDrawingAdjustmentKnob, UIView;

@interface PKTextAttachmentDrawingResizeView : UIView {

	BOOL _top;
	BOOL _highlighted;
	BOOL _enabled;
	PKDrawingAdjustmentKnob* _knobView;
	UIView* _separatorView;
	UIView* _separatorHighlightedView;

}

@property (assign,nonatomic) BOOL top;                                        //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) PKDrawingAdjustmentKnob * knobView;              //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                          //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * separatorHighlightedView;               //@synthesize separatorHighlightedView=_separatorHighlightedView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL shown; 
-(BOOL)enabled;
-(UIView *)separatorView;
-(BOOL)shown;
-(BOOL)highlighted;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setTop:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(BOOL)top;
-(PKDrawingAdjustmentKnob *)knobView;
-(void)setKnobView:(PKDrawingAdjustmentKnob *)arg1 ;
-(void)setSeparatorView:(UIView *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)init:(BOOL)arg1 ;
-(double)resizeContentInset;
-(void)show:(BOOL)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(UIView *)separatorHighlightedView;
-(void)setSeparatorHighlightedView:(UIView *)arg1 ;
@end

