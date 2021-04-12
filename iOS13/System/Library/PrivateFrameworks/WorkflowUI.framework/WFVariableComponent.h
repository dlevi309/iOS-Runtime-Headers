/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKCompositeComponent.h>
#import <libobjc.A.dylib/WFVariableDelegate.h>

@protocol WFVariableUIDelegate;
@class WFCustomButtonComponent;

@interface WFVariableComponent : CKCompositeComponent <WFVariableDelegate> {

	id<WFVariableUIDelegate> _variableUIDelegate;
	WFCustomButtonComponent* _buttonComponent;
	/*^block*/id _updateBlock;

}

@property (nonatomic,readonly) id updateBlock;                                                  //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,__weak,readonly) id<WFVariableUIDelegate> variableUIDelegate;              //@synthesize variableUIDelegate=_variableUIDelegate - In the implementation block
@property (nonatomic,__weak,readonly) WFCustomButtonComponent * buttonComponent;                //@synthesize buttonComponent=_buttonComponent - In the implementation block
+(id)newWithVariable:(id)arg1 variableUIDelegate:(id)arg2 resultType:(unsigned long long)arg3 editable:(BOOL)arg4 updateBlock:(/*^block*/id)arg5 ;
-(id)updateBlock;
-(void)variableDidChange:(id)arg1 ;
-(WFCustomButtonComponent *)buttonComponent;
-(id<WFVariableUIDelegate>)variableUIDelegate;
-(void)variableDidClear:(id)arg1 ;
-(void)variableDidUpdate:(id)arg1 ;
@end

