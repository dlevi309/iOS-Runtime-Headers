/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>
#import <libobjc.A.dylib/PLAssetsdPhotoKitChangesRequestClient.h>

@interface PLAssetsdPhotoKitClient : PLAssetsdBaseClient <PLAssetsdPhotoKitChangesRequestClient>
+(BOOL)inTransactionProxy;
+(void)setInTransactionProxy:(BOOL)arg1 queue:(id)arg2 ;
+(void)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 reply:(/*^block*/id)arg3 ;
+(BOOL)sendChangesRequest:(id)arg1 usingProxyFactory:(id)arg2 error:(id*)arg3 ;
-(id)clientName;
-(void)sendChangesRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)getUUIDsForCloudIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)sendChangesRequest:(id)arg1 error:(id*)arg2 ;
@end

