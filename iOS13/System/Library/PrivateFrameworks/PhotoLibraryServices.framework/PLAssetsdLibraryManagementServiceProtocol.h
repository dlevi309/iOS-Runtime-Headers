/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
@required
-(void)setSystemPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 options:(unsigned short)arg3 reply:(/*^block*/id)arg4;
-(void)getActivePhotoLibrariesWithReply:(/*^block*/id)arg1;
-(void)getPhotoLibraryURLsWithReply:(/*^block*/id)arg1;
-(void)closeAndDeletePhotoLibraryAtURL:(id)arg1 reply:(/*^block*/id)arg2;

@end

