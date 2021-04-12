/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class CALayer;

@interface WFLibraryEllipsisButton : UIButton {

	CALayer* _backgroundCircleLayer;

}

@property (assign,nonatomic,__weak) CALayer * backgroundCircleLayer;              //@synthesize backgroundCircleLayer=_backgroundCircleLayer - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(CALayer *)backgroundCircleLayer;
-(void)setBackgroundCircleLayer:(CALayer *)arg1 ;
@end

