/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, BSCompoundAssertion;

@interface BKHIDClientConnection : NSObject <BSInvalidatable> {

	IOHIDEventSystemConnectionRef _connection;
	long long _versionedPID;
	int _pid;
	unsigned _task;
	NSString* _bundleID;
	os_unfair_lock_s _lock;
	BSCompoundAssertion* _observerAssertion;
	atomic_flag _invalid;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) long long versionedPID;                //@synthesize versionedPID=_versionedPID - In the implementation block
@property (nonatomic,readonly) unsigned task;                         //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionWithConnection:(IOHIDEventSystemConnectionRef)arg1 ;
-(int)pid;
-(unsigned)task;
-(id)initWithConnection:(IOHIDEventSystemConnectionRef)arg1 ;
-(long long)versionedPID;
-(NSString *)description;
-(IOHIDEventSystemConnectionRef)connection;
-(NSString *)bundleID;
-(unsigned long long)hash;
-(void)invalidate;
-(id)addDisconnectionObserverBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

