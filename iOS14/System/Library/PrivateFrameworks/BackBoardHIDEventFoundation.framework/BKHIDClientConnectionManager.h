/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/


#import <BackBoardHIDEventFoundation/BackBoardHIDEventFoundation-Structs.h>
@class BSMutableIntegerMap, NSMutableDictionary;

@interface BKHIDClientConnectionManager : NSObject {

	IOHIDEventSystemRef _hidEventSystem;
	BSMutableIntegerMap* _taskPortToClientConnectionMapping;
	BSMutableIntegerMap* _pidToClientConnectionMapping;
	NSMutableDictionary* _versionedPIDToClientConnectionMapping;
	CFDictionaryRef _hidConnectionToBKConnection;
	os_unfair_lock_s _lock;

}
-(IOHIDEventSystemConnectionRef)copyClientForDestination:(id)arg1 ;
-(long long)versionedPIDForPID:(int)arg1 ;
-(IOHIDEventSystemConnectionRef)copyClientForTaskPort:(unsigned)arg1 ;
-(id)description;
-(id)clientForDestination:(id)arg1 ;
-(int)pidForBundleID:(id)arg1 ;
-(id)initWithHIDEventSystem:(IOHIDEventSystemRef)arg1 ;
-(id)addRemovalObserverForConnectionWithVersionedPID:(long long)arg1 observerBlock:(/*^block*/id)arg2 ;
-(id)bundleIDForPID:(int)arg1 ;
-(id)clientForTaskPort:(unsigned)arg1 ;
-(void)dealloc;
@end

