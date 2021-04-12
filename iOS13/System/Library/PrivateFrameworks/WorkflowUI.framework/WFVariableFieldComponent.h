/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

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
-(NSString *)text;
-(id)updateBlock;
-(BOOL)editable;
@end

