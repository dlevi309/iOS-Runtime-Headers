/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSURL* _volumeURL;

}
-(void)dealloc;
-(id)description;
-(id)initWithVolumeURL:(id)arg1 ;
-(void)addVolumeUnmountObserver:(id)arg1 ;
-(void)removeVolumeUnmountObserver:(id)arg1 ;
@end

