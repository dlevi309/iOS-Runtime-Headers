/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface TLKTapContainerButton : UIButton {

	UIView* _containerView;

}

@property (assign,nonatomic,__weak) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

