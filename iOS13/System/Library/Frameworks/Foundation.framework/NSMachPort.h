/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSPort.h>

@interface NSMachPort : NSPort {

	id _delegate;
	unsigned long long _flags;
	unsigned _machPort;
	unsigned long long _reserved;

}

@property (readonly) unsigned machPort; 
+(id)port;
+(id)portWithMachPort:(unsigned)arg1 ;
+(BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned)arg6 reserved:(unsigned long long)arg7 ;
+(void)resetAllPorts;
+(id)portWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
+(void)_fixNSMachPortLeak;
-(id)init;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)hash;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)invalidate;
-(unsigned)machPort;
-(BOOL)isValid;
-(unsigned long long)_cfTypeID;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(id)initWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
@end

