/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ComponentKit/CKCompositeComponent.h>

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
-(id<WFComponentNavigationContext>)navigationContext;
-(void)titleComponentTapped:(id)arg1 ;
-(void)settingsButtonTapped;
-(void)removeButtonTapped:(id)arg1 ;
@end

