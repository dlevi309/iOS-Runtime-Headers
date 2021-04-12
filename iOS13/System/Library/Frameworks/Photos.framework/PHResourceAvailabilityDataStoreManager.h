/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PLResourceDataStore;
#import <Photos/Photos-Structs.h>
@interface PHResourceAvailabilityDataStoreManager : NSObject {

	AB _isCancelled;
	os_unfair_lock_s _lock;
	id<PLResourceDataStore> _dataStore;
	unsigned long long _requestID;

}
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(void)makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 options:(id)arg3 managedObjectContext:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
@end

