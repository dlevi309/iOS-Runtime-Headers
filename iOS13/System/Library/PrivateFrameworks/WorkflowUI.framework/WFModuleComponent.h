/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ComponentKit/CKMemoizingComponent.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>
#import <libobjc.A.dylib/WFActionEventObserver.h>

@class WFModuleModel, NSString;

@interface WFModuleComponent : CKMemoizingComponent <WFParameterEventObserver, WFActionEventObserver> {

	WFModuleModel* _model;

}

@property (nonatomic,readonly) WFModuleModel * model;               //@synthesize model=_model - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithModel:(id)arg1 navigationContext:(id)arg2 ;
-(WFModuleModel *)model;
-(void)parameterAttributesDidChange:(id)arg1 ;
-(void)actionNameDidChange:(id)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)reflowComponentSynchronously;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(void)reflowComponentAsynchronously;
@end

