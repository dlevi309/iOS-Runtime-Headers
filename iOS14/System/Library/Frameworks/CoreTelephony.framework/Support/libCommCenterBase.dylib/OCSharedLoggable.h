/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/libCommCenterBase.dylib
*/


#import <libCommCenterBase.dylib/libCommCenterBase.dylib-Structs.h>
@interface OCSharedLoggable : NSObject {

	queue* _queue;
	OsLogContext* _logContext;

}

@property (assign,getter=getQueue,nonatomic) queue* queue;                               //@synthesize queue=_queue - In the implementation block
@property (assign,getter=getLogContext,nonatomic) OsLogContext* logContext;              //@synthesize logContext=_logContext - In the implementation block
-(void)executeFunction:(function<void ()>*)arg1 ;
-(id)initWithName:(const char*)arg1 qosClass:(unsigned)arg2 logContext:(OsLogContext*)arg3 ;
-(void)setLogContext:(OsLogContext*)arg1 ;
-(void)executeBlock:(/*^block*/id)arg1 ;
-(OsLogContext*)getLogContext;
-(id)initWithQueue:(queue*)arg1 logContext:(OsLogContext*)arg2 ;
-(queue*)getQueue;
-(void)setQueue:(queue*)arg1 ;
@end

