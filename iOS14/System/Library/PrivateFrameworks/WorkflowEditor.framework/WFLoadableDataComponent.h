/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <WorkflowEditor/CKComponent.h>

@class WFActivityIndicatorComponent, CKComponent;

@interface WFLoadableDataComponent : CKComponent {

	WFActivityIndicatorComponent* _loadingComponent;
	BOOL _isLoading;
	CKComponent* _controlComponent;

}

@property (nonatomic,readonly) BOOL isLoading;                              //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) CKComponent * controlComponent;              //@synthesize controlComponent=_controlComponent - In the implementation block
+(id)newWithLoading:(BOOL)arg1 controlComponent:(id)arg2 size:(const CKComponentSize*)arg3 ;
-(BOOL)isLoading;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(CKComponent *)controlComponent;
@end

