/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface TLKTapContainerButton : UIButton {

	UIView* _containerView;

}

@property (assign,nonatomic,__weak) UIView * containerView;              //@synthesize containerView=_containerView - In the implementation block
-(void)setContainerView:(UIView *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)containerView;
@end

