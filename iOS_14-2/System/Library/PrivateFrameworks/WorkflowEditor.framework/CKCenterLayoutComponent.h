/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@class CKComponent;

@interface CKCenterLayoutComponent : CKComponent {

	unsigned long long _centeringOptions;
	unsigned long long _sizingOptions;
	CKComponent* _child;

}
+(id)newWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3 size:(const CKComponentSize*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

