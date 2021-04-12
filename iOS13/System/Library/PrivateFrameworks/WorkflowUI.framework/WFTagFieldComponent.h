/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKStatefulViewComponent.h>

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

