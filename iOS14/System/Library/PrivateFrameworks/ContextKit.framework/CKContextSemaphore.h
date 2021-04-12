/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
*/

#import <ContextKit/ContextKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {

	BOOL _semaOwner;
	unsigned _sema;
	unsigned long long _shmSize;
	SCD_Struct_CK0* _shm;
	NSObject*<OS_xpc_object> _shmObject;

}
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(unsigned long long)sharedMemorySize;
-(BOOL)busy;
-(void)decPending;
-(long long)waitFor:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)pendingExceptionsCount;
-(unsigned long long)requestsServed;
-(void)notify;
-(void)incPending;
-(id)initSemaphoreForXPCService;
-(long long)pending;
-(void)resetPending;
-(unsigned long long)numAcquired;
-(void)setActiveGauge:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)notifyAll;
-(unsigned long long)activeGauge;
-(BOOL)tryAcquire;
-(unsigned long long)gauge;
-(void)dealloc;
@end

