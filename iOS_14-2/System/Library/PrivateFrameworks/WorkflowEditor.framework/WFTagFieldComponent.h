/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponent.h>

@protocol WFComponentNavigationContext;
@interface WFTagFieldComponent : CKStatefulViewComponent {

	/*^block*/id _updateBlock;
	/*^block*/id _variableBlock;
	id<WFComponentNavigationContext> _navigationContext;
	WFTagFieldAttributes _attributes;

}

@property (nonatomic,readonly) WFTagFieldAttributes attributes;                                        //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id updateBlock;                                                         //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,readonly) id variableBlock;                                                       //@synthesize variableBlock=_variableBlock - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
+(id)newWithAttributes:(const WFTagFieldAttributes*)arg1 updateBlock:(/*^block*/id)arg2 variableBlock:(/*^block*/id)arg3 navigationContext:(id)arg4 size:(const CKComponentSize*)arg5 ;
-(WFTagFieldAttributes)attributes;
-(id)updateBlock;
-(id<WFComponentNavigationContext>)navigationContext;
-(id)variableBlock;
@end

