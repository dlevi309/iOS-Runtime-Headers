/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@class NSMutableArray;

@interface _PASKVOHandler : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _tasks;

}
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)reactAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)reactAsynchronouslyAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(/*^block*/id)arg3 onQueue:(id)arg4 ;
-(void)reactBeforeAndAfterChangesToKeyPath:(id)arg1 ofObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_watchKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingTask:(id)arg4 ;
@end

