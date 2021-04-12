/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sharedMemorySize;
-(BOOL)busy;
-(long long)pending;
-(void)notify;
-(BOOL)tryAcquire;
-(unsigned long long)gauge;
-(void)resetPending;
-(long long)waitFor:(double)arg1 ;
-(void)incPending;
-(id)initSemaphoreForXPCService;
-(unsigned long long)activeGauge;
-(void)setActiveGauge:(unsigned long long)arg1 ;
-(void)decPending;
-(unsigned long long)pendingExceptionsCount;
-(unsigned long long)numAcquired;
-(unsigned long long)requestsServed;
-(void)notifyAll;
@end

