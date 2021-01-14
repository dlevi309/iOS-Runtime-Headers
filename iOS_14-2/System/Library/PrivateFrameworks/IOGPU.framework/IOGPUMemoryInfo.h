/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
*/


#import <IOGPU/IOGPU-Structs.h>
@class IOGPUMetalResource;

@interface IOGPUMemoryInfo : NSObject {

	void* memlist_key;
	IOGPUMetalResource* fResourceListHead;
	os_unfair_lock_s _memoryInfoLock;

}
+(id)initialize;
-(void)unlock;
-(void)shutdown;
-(id)init;
-(void*)addDataSource:(/*^block*/id)arg1 ;
-(void)removeDataSource:(void*)arg1 ;
-(void)lock;
-(void)removeResourceFromList:(id)arg1 ;
-(void)addResourceToList:(id)arg1 ;
-(CFArrayRef)annotationList;
-(void)dealloc;
@end

