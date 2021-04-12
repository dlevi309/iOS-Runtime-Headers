/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHPhotoLibraryExecutionContext <NSObject>
@required
-(void)callTransactionCompletionHandler:(/*^block*/id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
-(void)sendChangesRequest:(id)arg1 onClient:(id)arg2 reply:(/*^block*/id)arg3;
-(void)dispatchOnQueue:(id)arg1 block:(/*^block*/id)arg2;

@end

