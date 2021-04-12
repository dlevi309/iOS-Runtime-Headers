/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
@interface PLLazyObject : NSObject {

	BOOL _shouldRetryBlockOnNil;
	os_unfair_lock_s _lock;
	/*^block*/id _block;
	id _object;

}

@property (readonly) id objectValue; 
-(id)objectValue;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(id)initWithRetry:(BOOL)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithRetriableBlock:(/*^block*/id)arg1 ;
-(void)accessLazyObjectAtomically:(/*^block*/id)arg1 ;
-(void)invalidate;
@end

