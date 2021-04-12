/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class RLMRealm;

@interface RLMFastEnumerator : NSObject {

	id _strongBuffer[16];
	RLMRealm* _realm;
	RLMClassInfo* _info;
	Results* _results;
	Results* _snapshot;
	id _collection;

}
-(void)dealloc;
-(void)detach;
-(id)initWithList:(List*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(RLMClassInfo*)arg4 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithResults:(Results*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(RLMClassInfo*)arg4 ;
@end

