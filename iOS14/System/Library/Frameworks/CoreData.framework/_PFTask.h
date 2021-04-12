/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFTask : NSObject {

	int _cd_rc;
	void* _task;
	void* arguments;
	opaque_pthread_mutex_t lock;
	opaque_pthread_cond_t condition;
	int isFinishedFlag;

}
+(int)getNumActiveProcessors;
+(double)getProcessorSpeed;
-(oneway void)release;
-(void)finalize;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(id)initWithFunction:(/*function pointer*/void*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3 ;
-(void)dealloc;
@end

