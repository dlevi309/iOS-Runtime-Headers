/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKCompositeComponent.h>

@protocol WFComponentNavigationContext;
@class NSError;

@interface WFModuleResourceWarningComponent : CKCompositeComponent {

	NSError* _resourceError;
	id<WFComponentNavigationContext> _navigationContext;

}
+(id)newWithResourceError:(id)arg1 navigationContext:(id)arg2 useImportStyle:(BOOL)arg3 importButtonGradient:(id)arg4 ;
-(void)recoverFromWarning:(id)arg1 buttonIndex:(unsigned long long)arg2 ;
@end

