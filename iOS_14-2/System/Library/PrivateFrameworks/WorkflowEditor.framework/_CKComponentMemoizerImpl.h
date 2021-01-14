/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


#import <WorkflowEditor/WorkflowEditor-Structs.h>
@interface _CKComponentMemoizerImpl : NSObject {

	_CKComponentMemoizerImpl* _next;
	unordered_multimap<CKMemoizationKey, CKComponent *, std::__1::hash<CKMemoizationKey>, std::__1::equal_to<CKMemoizationKey>, std::__1::allocator<std::__1::pair<const CKMemoizationKey, CKComponent *> > >* componentCache_;
	unordered_map<CKLayoutMemoizationKey, CKComponentLayout, CKLayoutMemoizationKey::Hash, CKLayoutMemoizationKey::Equals, std::__1::allocator<std::__1::pair<const CKLayoutMemoizationKey, CKComponentLayout> > >* layoutCache_;

}
+(id)currentMemoizer;
+(void)setCurrentMemoizer:(id)arg1 ;
-(id)next;
-(id)dequeueComponentForKey:(CKMemoizationKey*)arg1 ;
-(void)enqueueComponent:(id)arg1 forKey:(CKMemoizationKey*)arg2 ;
-(CKComponentLayout*)cachedLayout:(id)arg1 thatFits:(CKSizeRange)arg2 restrictedToSize:(CKComponentSize)arg3 parentSize:(CGSize)arg4 block:(/*^block*/id)arg5 ;
@end

