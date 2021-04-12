/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <UIKitCore/UILabel.h>

@protocol WFAdjustableLabelDelegate;
@interface WFAdjustableLabel : UILabel {

	id<WFAdjustableLabelDelegate> _adjustableDelegate;

}

@property (assign,nonatomic) id<WFAdjustableLabelDelegate> adjustableDelegate;              //@synthesize adjustableDelegate=_adjustableDelegate - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id<WFAdjustableLabelDelegate>)adjustableDelegate;
-(void)setAdjustableDelegate:(id<WFAdjustableLabelDelegate>)arg1 ;
@end

