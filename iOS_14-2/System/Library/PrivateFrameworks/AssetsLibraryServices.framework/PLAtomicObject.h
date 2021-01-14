/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

