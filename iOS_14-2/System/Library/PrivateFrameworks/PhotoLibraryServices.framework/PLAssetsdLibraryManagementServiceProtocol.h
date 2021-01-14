/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
@required
-(void)setSystemPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4;
-(void)getActivePhotoLibrariesWithReply:(/*^block*/id)arg1;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1;
-(void)closeAndDeletePhotoLibraryAtURL:(id)arg1 reply:(/*^block*/id)arg2;

@end

