/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView

@property (setter=ck_setComponent:,nonatomic,retain) WFAccessibilityActionComponent * ck_component; 
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityValue;
-(id)accessibilityAttributedValue;
-(BOOL)accessibilityActivate;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(CGPoint)accessibilityActivationPoint;
-(id)_ck_accessibilityTarget;
@end

