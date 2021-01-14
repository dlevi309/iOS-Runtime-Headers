/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSPort.h>

@interface NSMessagePort : NSPort {

	void* _port;
	id _delegate;

}
+(BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)_fixNSMessagePortLeak;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(oneway void)release;
-(id)init;
-(BOOL)_tryRetain;
-(id)delegate;
-(id)retain;
-(BOOL)_isDeallocating;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)name;
-(id)initWithName:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(BOOL)isValid;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(unsigned long long)retainCount;
-(void)invalidate;
-(BOOL)setName:(id)arg1 ;
-(void)dealloc;
-(id)initWithRemoteName:(id)arg1 ;
@end

