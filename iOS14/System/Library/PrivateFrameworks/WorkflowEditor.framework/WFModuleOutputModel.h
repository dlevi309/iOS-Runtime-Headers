/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
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
-(UIImage *)icon;
-(WFAction *)action;
-(NSString *)name;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(CKTypedComponentAction<WFModuleOutputModel *>)tapAction;
-(id)initWithAction:(id)arg1 tapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg2 ;
-(id)initWithExtensionInputAndTapAction:(CKTypedComponentAction<WFModuleOutputModel *>)arg1 ;
-(BOOL)isExtensionInput;
@end

