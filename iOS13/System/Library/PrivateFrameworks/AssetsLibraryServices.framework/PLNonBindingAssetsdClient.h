/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLAssetsdClientXPCConnection, NSObject, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryManagementClient, PLAssetsdDemoClient;

@interface PLNonBindingAssetsdClient : NSObject {

	PLAssetsdClientXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLAssetsdSystemLibraryURLReadOnlyClient* _systemLibraryURLReadOnlyClient;
	PLAssetsdLibraryManagementClient* _libraryManagementClient;
	PLAssetsdDemoClient* _demoClient;

}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient * systemLibraryURLReadOnlyClient; 
@property (readonly) PLAssetsdLibraryManagementClient * libraryManagementClient; 
@property (readonly) PLAssetsdDemoClient * demoClient; 
-(id)init;
-(PLAssetsdSystemLibraryURLReadOnlyClient *)systemLibraryURLReadOnlyClient;
-(PLAssetsdLibraryManagementClient *)libraryManagementClient;
-(PLAssetsdDemoClient *)demoClient;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg1 ;
@end

