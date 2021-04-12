/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/


#import <LoginKit/LoginKit-Structs.h>
@interface LKBacktraceLogger : NSObject {

	unsigned _trackedThread;

}

@property (assign,nonatomic) unsigned trackedThread;              //@synthesize trackedThread=_trackedThread - In the implementation block
-(id)getBacktraceFromTrackedThread;
-(void)trackCurrentThread;
-(void)setTrackedThread:(unsigned)arg1 ;
-(unsigned)trackedThread;
-(id)_getBacktraceFromThread:(unsigned)arg1 ;
-(_darwin_arm_thread_state64)_getThreadStateForThread:(unsigned)arg1 ;
-(unsigned long long)_getPCFromThreadState:(_darwin_arm_thread_state64)arg1 ;
-(unsigned long long)_getLRFromThreadState:(_darwin_arm_thread_state64)arg1 ;
-(unsigned long long)_getFPFromThreadState:(_darwin_arm_thread_state64)arg1 ;
-(BOOL)_copyFrameInformation:(unsigned long long)arg1 destination:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(void)_symbolicateBuffer:(const unsigned long long*)arg1 symbolsBuffer:(dl_info*)arg2 count:(int)arg3 ;
-(id)_logWithSymbol:(dl_info*)arg1 address:(unsigned long long)arg2 index:(int)arg3 ;
@end

