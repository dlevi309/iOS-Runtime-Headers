/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableArray;

@interface _PASKVOHandler : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _tasks;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)reactBeforeAndAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)reactAsynchronouslyAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(/*^block*/id)arg3 onQueue:(id)arg4 ;
-(void)_watchKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingTask:(id)arg4 ;
-(void)dealloc;
-(void)reactAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

