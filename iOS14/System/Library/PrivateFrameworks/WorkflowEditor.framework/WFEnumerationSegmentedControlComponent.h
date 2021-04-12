/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent {

	WFEnumerationParameter* _parameter;
	/*^block*/id _updateBlock;

}
+(id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(/*^block*/id)arg3 options:(WFParameterComponentOptions)arg4 ;
+(double)minimumWidthForSegmentWithTitle:(id)arg1 ;
+(double)perSegmentWidthWithSegments:(id)arg1 ;
+(double)estimatedWidthWithSegments:(id)arg1 ;
-(void)segmentedControlSelectedSegmentChanged:(id)arg1 ;
@end

