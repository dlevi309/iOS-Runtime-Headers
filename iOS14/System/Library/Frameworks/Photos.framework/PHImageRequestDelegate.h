/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHImageRequestDelegate <PHMediaRequestDelegate>
@required
-(void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL*)arg2 didFindImage:(BOOL*)arg3 resultHandler:(/*^block*/id)arg4;
-(void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(/*^block*/id)arg2;
-(BOOL)imageRequestCanRequestRepair:(id)arg1;

@end

