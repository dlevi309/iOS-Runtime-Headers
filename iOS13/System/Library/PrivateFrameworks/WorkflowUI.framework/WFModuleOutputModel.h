/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class WFAction, NSString, UIImage;

@interface WFModuleOutputModel : NSObject {

	BOOL _extensionInput;
	WFAction* _action;
	NSString* _name;
	UIImage* _icon;
	CKTypedComponentAction<WFModuleOutputModel *> _tapAction;

}

@property (nonatomic,readonly) WFAction * action;                                                    //@synthesize action=_action - In the implementation block
@property (getter=isExtensionInput,nonatomic,readonly) BOOL extensionInput;                          //@synthesize extensionInput=_extensionInput - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<WFModuleOutputModel *> tapAction;              //@synthesize tapAction=_tapAction - In the implementation block
+(id)modelForAction:(id)arg1 withTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg2 ;
+(id)modelForExtensionInputWithTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(WFAction *)action;
-(UIImage *)icon;
-(id)initWithAction:(id)arg1 tapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg2 ;
-(id)initWithExtensionInputAndTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg1 ;
-(BOOL)isExtensionInput;
-(CKTypedComponentAction<WFModuleOutputModel *>)tapAction;
@end

