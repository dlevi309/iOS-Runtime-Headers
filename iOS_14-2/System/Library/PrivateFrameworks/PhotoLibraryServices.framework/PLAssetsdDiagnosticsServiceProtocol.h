/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLAssetsdDiagnosticsServiceProtocol <NSObject>
@required
-(void)getPhotosXPCEndpointWithReply:(/*^block*/id)arg1;
-(void)dumpPhotoAnalysisStatusWithReply:(/*^block*/id)arg1;
-(void)dumpStatusIncludingDaemon:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)incompleteRestoreProcessesWithReply:(/*^block*/id)arg1;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg1;
-(void)setPhotosXPCEndpoint:(id)arg1 withReply:(/*^block*/id)arg2;

@end

