/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class CAShapeLayer;

@interface WFLibraryCancelButton : UIControl {

	CAShapeLayer* _outlineLayer;
	CAShapeLayer* _glyphLayer;

}

@property (nonatomic,readonly) CAShapeLayer * outlineLayer;              //@synthesize outlineLayer=_outlineLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * glyphLayer;                //@synthesize glyphLayer=_glyphLayer - In the implementation block
-(void)reset;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(CAShapeLayer *)outlineLayer;
-(CAShapeLayer *)glyphLayer;
-(void)finishWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
@end

