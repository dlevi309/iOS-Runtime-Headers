/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <libobjc.A.dylib/CKTransactionalComponentDataSourceStateModifying.h>

@class NSString;

@interface CKTransactionalComponentDataSourceUpdateStateModification : NSObject <CKTransactionalComponentDataSourceStateModifying> {

	unordered_map<int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > > > > >* _stateUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)changeFromState:(id)arg1 ;
-(id)initWithStateUpdates:(const unordered_map<int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > >, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, std::__1::unordered_multimap<int, id ()(id), std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, id ()(id)> > > > > >*)arg1 ;
@end

