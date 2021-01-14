/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKStatefulViewComponentController.h>

@class WFParameterHostingView;

@interface WFSwiftUIParameterHostingComponentController : CKStatefulViewComponentController {

	WFParameterHostingView* _viewForSizing;

}
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 forSizing:(BOOL)arg3 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 forComponent:(id)arg2 ;
@end

