/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol PLAssetsdClientServiceProtocol <NSObject>
@required
-(void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2 reply:(/*^block*/id)arg3;
-(void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
-(void)downloadFinishedForIdentifier:(id)arg1 success:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
-(void)resourceRepairIdentifier:(id)arg1 finishedWithSuccess:(BOOL)arg2 error:(id)arg3;
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5;
-(void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3;

@end

