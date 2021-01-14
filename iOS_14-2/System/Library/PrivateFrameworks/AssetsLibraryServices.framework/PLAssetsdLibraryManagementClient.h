/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1 ;
-(BOOL)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)removePhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeAndDeletePhotoLibraryAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)overrideSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2 ;
-(id)activePhotoLibraries:(id*)arg1 ;
@end

