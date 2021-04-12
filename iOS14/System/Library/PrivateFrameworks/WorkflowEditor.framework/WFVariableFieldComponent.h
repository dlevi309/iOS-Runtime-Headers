/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

@class NSString;

@interface WFVariableFieldComponent : CKStatefulViewComponent {

	BOOL _editable;
	NSString* _text;
	/*^block*/id _updateBlock;

}

@property (nonatomic,copy,readonly) NSString * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL editable;                     //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) id updateBlock;                    //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)newWithText:(id)arg1 editable:(BOOL)arg2 updateBlock:(/*^block*/id)arg3 size:(const CKComponentSize*)arg4 ;
-(BOOL)editable;
-(NSString *)text;
-(id)updateBlock;
@end

