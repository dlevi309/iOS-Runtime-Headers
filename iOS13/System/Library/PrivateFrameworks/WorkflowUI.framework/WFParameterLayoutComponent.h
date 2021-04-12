/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKComponent.h>

@class NSString, NSArray, CKInsetComponent, CKComponent;

@interface WFParameterLayoutComponent : CKComponent {

	NSString* _label;
	NSArray* _labelsToAlignTo;
	CKInsetComponent* _labelComponent;
	WFParameterLayoutComponentStyle _style;
	WFCompressionResistance _controlResistance;
	CKComponent* _controlComponent;
	CKTypedComponentAction<> _selectionAction;

}

@property (nonatomic,readonly) CKComponent * controlComponent;                        //@synthesize controlComponent=_controlComponent - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> selectionAction;              //@synthesize selectionAction=_selectionAction - In the implementation block
+(UIEdgeInsets)edgeInsets;
+(id)newWithView:(const CKComponentViewConfiguration*)arg1 size:(const CKComponentSize*)arg2 ;
+(id)newWithLabel:(id)arg1 labelsToAlignTo:(id)arg2 selectionAction:(CKTypedComponentAction<>)arg3 selectionEnabled:(BOOL)arg4 style:(const WFParameterLayoutComponentStyle*)arg5 accessibility:(const WFParameterLayoutComponentAccessibility*)arg6 controlResistance:(const WFCompressionResistance*)arg7 controlComponent:(id)arg8 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(void)handleParameterLayoutPressed;
-(CKComponent *)controlComponent;
-(CKTypedComponentAction<>)selectionAction;
@end

