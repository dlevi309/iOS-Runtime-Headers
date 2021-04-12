/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UIView;

@interface PKTextAttachmentDrawingResizeView : UIView {

	BOOL _top;
	BOOL _highlighted;
	BOOL _enabled;
	UIImageView* _knobView;
	UIView* _separatorView;
	UIView* _separatorHighlightedView;

}

@property (assign,nonatomic) BOOL top;                                       //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) UIImageView * knobView;                         //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIView * separatorHighlightedView;              //@synthesize separatorHighlightedView=_separatorHighlightedView - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                               //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                   //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL shown; 
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(UIView *)separatorView;
-(void)didMoveToWindow;
-(BOOL)top;
-(void)setSeparatorView:(UIView *)arg1 ;
-(UIImageView *)knobView;
-(void)setKnobView:(UIImageView *)arg1 ;
-(void)setTop:(BOOL)arg1 ;
-(id)init:(BOOL)arg1 ;
-(BOOL)shown;
-(double)resizeContentInset;
-(void)show:(BOOL)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(UIView *)separatorHighlightedView;
-(void)setSeparatorHighlightedView:(UIView *)arg1 ;
@end

