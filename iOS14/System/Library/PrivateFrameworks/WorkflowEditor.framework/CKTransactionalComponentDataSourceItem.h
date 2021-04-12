/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKComponentScopeRoot;

@interface CKTransactionalComponentDataSourceItem : NSObject {

	CKComponentLayout* _layout;
	id _model;
	CKComponentScopeRoot* _scopeRoot;
	CKComponentBoundsAnimation _boundsAnimation;

}

@property (nonatomic,readonly) id model;                                                //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) CKComponentScopeRoot * scopeRoot;                        //@synthesize scopeRoot=_scopeRoot - In the implementation block
@property (nonatomic,readonly) CKComponentBoundsAnimation boundsAnimation;              //@synthesize boundsAnimation=_boundsAnimation - In the implementation block
-(id)model;
-(const CKComponentLayout*)layout;
-(CKComponentBoundsAnimation)boundsAnimation;
-(CKComponentScopeRoot *)scopeRoot;
-(id)initWithLayout:(const CKComponentLayout*)arg1 model:(id)arg2 scopeRoot:(id)arg3 boundsAnimation:(CKComponentBoundsAnimation)arg4 ;
@end

