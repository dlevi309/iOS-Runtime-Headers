/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <UIKitCore/UILabel.h>

@protocol WFAdjustableLabelDelegate;
@interface WFAdjustableLabel : UILabel {

	id<WFAdjustableLabelDelegate> _adjustableDelegate;

}

@property (assign,nonatomic) id<WFAdjustableLabelDelegate> adjustableDelegate;              //@synthesize adjustableDelegate=_adjustableDelegate - In the implementation block
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id<WFAdjustableLabelDelegate>)adjustableDelegate;
-(void)setAdjustableDelegate:(id<WFAdjustableLabelDelegate>)arg1 ;
@end

