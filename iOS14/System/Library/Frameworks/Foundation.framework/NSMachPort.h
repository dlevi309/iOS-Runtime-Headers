/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)portWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
+(void)resetAllPorts;
+(void)_fixNSMachPortLeak;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(oneway void)release;
-(unsigned)machPort;
-(unsigned long long)_cfTypeID;
-(id)init;
-(BOOL)_tryRetain;
-(id)delegate;
-(id)retain;
-(BOOL)_isDeallocating;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned long long)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned long long)arg5 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned)arg5 ;
-(id)initWithMachPort:(unsigned)arg1 ;
-(BOOL)isValid;
-(BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned long long)arg4 ;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)invalidate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMachPort:(unsigned)arg1 options:(unsigned long long)arg2 ;
@end

