/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)detach;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithResults:(Results*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(RLMClassInfo*)arg4 ;
-(id)initWithList:(List*)arg1 collection:(id)arg2 realm:(id)arg3 classInfo:(RLMClassInfo*)arg4 ;
-(void)dealloc;
@end

