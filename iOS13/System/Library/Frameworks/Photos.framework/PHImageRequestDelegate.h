/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHImageRequestDelegate <PHMediaRequestDelegate>
@required
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2;
-(BOOL)imageRequest:(id)arg1 isRequestingRepairAndRetryForDataStoreKey:(id)arg2 inStore:(id)arg3 assetObjectID:(id)arg4 forValidationErrors:(id)arg5;

@end

