/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLAtomicObject : NSObject {

	os_unfair_lock_s _lock;
	id _object;

}
-(id)initWithObject:(id)arg1 ;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(void)atomicallyPerformBlockAndWait:(/*^block*/id)arg1 ;
@end

