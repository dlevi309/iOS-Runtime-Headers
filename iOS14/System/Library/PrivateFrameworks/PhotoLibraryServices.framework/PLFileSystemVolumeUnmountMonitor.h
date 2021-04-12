/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable, NSURL;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {

	NSHashTable* _observers;
	os_unfair_lock_s _lock;
	NSURL* _volumeURL;

}
-(void)addVolumeUnmountObserver:(id)arg1 ;
-(id)description;
-(id)initWithVolumeURL:(id)arg1 ;
-(void)removeVolumeUnmountObserver:(id)arg1 ;
-(void)dealloc;
@end

