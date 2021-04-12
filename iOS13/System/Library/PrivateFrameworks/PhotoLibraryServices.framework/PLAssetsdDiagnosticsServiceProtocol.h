/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
@required
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)dumpPhotoAnalysisStatusWithReply:(/*^block*/id)arg1;
-(void)incompleteRestoreProcessesWithReply:(/*^block*/id)arg1;
-(void)getPhotosXPCEndpointWithReply:(/*^block*/id)arg1;
-(void)setPhotosXPCEndpoint:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg1;

@end

