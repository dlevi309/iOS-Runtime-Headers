/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
*/


#import <libCommCenterBase.dylib/libCommCenterBase.dylib-Structs.h>
@interface OCSharedLoggable : NSObject {

	queue* _queue;
	OsLogContext* _logContext;

}

@property (assign,getter=getQueue,nonatomic) queue* queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,getter=getLogContext,nonatomic) OsLogContext* logContext;              //@synthesize logContext=_logContext - In the implementation block
-(void)setQueue:(queue*)arg1 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
-(id)initWithQueue:(queue*)arg1 logContext:(OsLogContext*)arg2 ;
-(id)initWithName:(const char*)arg1 qosClass:(unsigned)arg2 logContext:(OsLogContext*)arg3 ;
-(void)executeFunction:(function<void ()>*)arg1 ;
-(queue*)getQueue;
-(OsLogContext*)getLogContext;
-(void)setLogContext:(OsLogContext*)arg1 ;
@end

