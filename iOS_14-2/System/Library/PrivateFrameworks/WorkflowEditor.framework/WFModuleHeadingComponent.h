/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/CKCompositeComponent.h>

@protocol WFComponentNavigationContext;
@class WFModuleModel;

@interface WFModuleHeadingComponent : CKCompositeComponent {

	WFModuleModel* _model;
	id<WFComponentNavigationContext> _navigationContext;

}

@property (nonatomic,readonly) WFModuleModel * model;                                                  //@synthesize model=_model - In the implementation block
@property (nonatomic,__weak,readonly) id<WFComponentNavigationContext> navigationContext;              //@synthesize navigationContext=_navigationContext - In the implementation block
+(id)newWithModel:(id)arg1 navigationContext:(id)arg2 ;
-(WFModuleModel *)model;
-(void)removeButtonTapped:(id)arg1 ;
-(id<WFComponentNavigationContext>)navigationContext;
-(void)settingsButtonTapped;
-(void)titleComponentTapped:(id)arg1 ;
@end

