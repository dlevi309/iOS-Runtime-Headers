/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKComponent.h>

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

