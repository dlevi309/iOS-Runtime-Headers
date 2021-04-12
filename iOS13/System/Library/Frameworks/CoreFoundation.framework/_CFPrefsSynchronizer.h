/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSObject;

@interface _CFPrefsSynchronizer : NSObject {

	NSObject*<OS_dispatch_source> _synchTimer;
	NSObject*<OS_dispatch_queue> _synchQueue;
	CFSetRef _dirtySources;
	opaque_pthread_mutex_t _CFPrefsDirtySourcesLock;
	BOOL _active;

}
+(id)sharedInstance;
-(id)init;
-(void)synchronize;
-(void)enableTimer_alreadyLocked;
-(void)clear_alreadyLocked;
-(const CFSetRef)copyDirtySourcesSnapshotAndClear;
-(void)disableTimer_alreadyLocked;
-(void)noteDirtySource:(id)arg1 ;
-(void)synchronizeForDaemonTermination;
-(void)clear;
@end

