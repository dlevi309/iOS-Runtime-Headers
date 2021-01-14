/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSMutableDictionary;

@interface CKComponentDataSourceAttachController : NSObject {

	NSMutableDictionary* _scopeIdentifierToAttachedViewMap;

}
-(id)init;
-(void)dealloc;
-(void)attachComponentLayout:(CKComponentLayout*)arg1 withScopeIdentifier:(int)arg2 withBoundsAnimation:(CKComponentBoundsAnimation)arg3 toView:(id)arg4 ;
-(void)detachComponentLayoutWithScopeIdentifier:(int)arg1 ;
-(id)attachStateForScopeIdentifier:(int)arg1 ;
-(void)_detachComponentLayoutFromView:(id)arg1 ;
@end

