/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKCompositeComponent.h>

@protocol WFComponentNavigationContext;
@class NSError;

@interface WFModuleResourceWarningComponent : CKCompositeComponent {

	NSError* _resourceError;
	id<WFComponentNavigationContext> _navigationContext;

}
+(id)newWithResourceError:(id)arg1 navigationContext:(id)arg2 useImportStyle:(BOOL)arg3 importButtonGradient:(id)arg4 ;
-(void)recoverFromWarning:(id)arg1 buttonIndex:(unsigned long long)arg2 ;
@end

