/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
@interface CPLEngineWriteTransactionBlocker : NSObject {

	os_unfair_lock_s _lock;
	/*^block*/id _unblock;

}
-(void)unblock;
-(void)dealloc;
-(id)initWithUnblockBlock:(/*^block*/id)arg1 ;
@end

