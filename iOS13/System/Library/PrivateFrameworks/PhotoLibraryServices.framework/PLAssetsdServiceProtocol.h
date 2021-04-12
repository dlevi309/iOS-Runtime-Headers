/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdServiceProtocol <PLAssetsdServiceCreating>
@required
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2;
-(void)runDaemonJob:(id)arg1 isSerial:(BOOL)arg2 withReply:(/*^block*/id)arg3;
-(void)bindToPhotoLibraryURL:(id)arg1 sandboxExtension:(id)arg2 withReply:(/*^block*/id)arg3;
-(void)bindToPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 withReply:(/*^block*/id)arg3;

@end

