/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibrary, NSString, NSXPCConnection, NSObject, NSMutableDictionary;

@interface PLAssetsdCPLResourceDownloader : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSString* _trustedCallerBundleID;
	NSXPCConnection* _clientConnection;
	NSObject*<OS_dispatch_queue> _pendingCPLDownloadsIsolationQueue;
	NSMutableDictionary* _pendingCPLDownloads;

}
-(void)_handleInvalidation;
-(void)cancelCPLDownloadTasks:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelCPLDownloadTaskWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)startCPLDownloadForAsset:(id)arg1 resourceType:(unsigned long long)arg2 masterResourceOnly:(BOOL)arg3 highPriority:(BOOL)arg4 track:(BOOL)arg5 notify:(BOOL)arg6 transient:(BOOL)arg7 proposedTaskIdentifier:(id)arg8 doneToken:(id)arg9 error:(id*)arg10 ;
-(id)initWithPhotoLibrary:(id)arg1 trustedCallerBundleID:(id)arg2 clientConnection:(id)arg3 ;
-(void)sendClientCPLStatusWithVirtualTaskIdentifier:(id)arg1 downloadContext:(id)arg2 ;
-(void)handleInvalidation;
@end

