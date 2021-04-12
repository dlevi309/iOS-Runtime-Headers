/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

