/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol PLAssetsdClientServiceProtocol <NSObject>
@required
-(void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2;
-(void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5;
-(void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3;

@end

