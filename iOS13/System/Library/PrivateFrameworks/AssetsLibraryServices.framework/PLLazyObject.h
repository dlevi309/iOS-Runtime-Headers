/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)invalidate;
-(id)initWithObject:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)objectValue;
-(void)invalidateWithHandler:(/*^block*/id)arg1 ;
-(id)initWithRetriableBlock:(/*^block*/id)arg1 ;
-(id)initWithRetry:(BOOL)arg1 block:(/*^block*/id)arg2 ;
@end

