/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView

@property (setter=ck_setComponent:,nonatomic,retain) WFAccessibilityActionComponent * ck_component; 
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityActivate;
-(id)_ck_accessibilityTarget;
@end

