/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class NSHashTable;

@interface _FBKVOSharedController : NSObject {

	NSHashTable* _infos;
	opaque_pthread_mutex_t _mutex;

}
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)observe:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 info:(id)arg2 ;
-(void)unobserve:(id)arg1 infos:(id)arg2 ;
@end

