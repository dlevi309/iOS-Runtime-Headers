/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class CKComponentScopeHandle;

@interface CKComponentScopeFrame : NSObject {

	unordered_map<_CKStateScopeKey, CKComponentScopeFrame *, std::__1::hash<_CKStateScopeKey>, std::__1::equal_to<_CKStateScopeKey>, std::__1::allocator<std::__1::pair<const _CKStateScopeKey, CKComponentScopeFrame *> > >* _children;
	CKComponentScopeHandle* _handle;

}

@property (nonatomic,readonly) CKComponentScopeHandle * handle;              //@synthesize handle=_handle - In the implementation block
+(CKComponentScopeFramePair)childPairForPair:(const CKComponentScopeFramePair*)arg1 newRoot:(id)arg2 componentClass:(Class)arg3 identifier:(id)arg4 initialStateCreator:(/*^block*/id)arg5 stateUpdates:(const unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >*)arg6 ;
-(id)initWithHandle:(id)arg1 ;
-(CKComponentScopeHandle *)handle;
@end

