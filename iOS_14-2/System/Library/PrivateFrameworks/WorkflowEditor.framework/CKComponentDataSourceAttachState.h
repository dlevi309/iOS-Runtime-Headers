/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSSet;

@interface CKComponentDataSourceAttachState : NSObject {

	CKComponentLayout* _layout;
	int _scopeIdentifier;
	NSSet* _mountedComponents;

}

@property (nonatomic,readonly) NSSet * mountedComponents;              //@synthesize mountedComponents=_mountedComponents - In the implementation block
@property (nonatomic,readonly) int scopeIdentifier;                    //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(int)scopeIdentifier;
-(const CKComponentLayout*)layout;
-(NSSet *)mountedComponents;
-(id)initWithScopeIdentifier:(int)arg1 mountedComponents:(id)arg2 layout:(const CKComponentLayout*)arg3 ;
@end

