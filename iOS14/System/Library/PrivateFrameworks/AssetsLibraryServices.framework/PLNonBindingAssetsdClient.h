/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLAssetsdClientXPCConnection, NSObject, PLAssetsdSystemLibraryURLReadOnlyClient, PLAssetsdLibraryManagementClient, PLAssetsdDemoClient, PLAssetsdPrivacySupportClient;

@interface PLNonBindingAssetsdClient : NSObject {

	PLAssetsdClientXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLAssetsdSystemLibraryURLReadOnlyClient* _systemLibraryURLReadOnlyClient;
	PLAssetsdLibraryManagementClient* _libraryManagementClient;
	PLAssetsdDemoClient* _demoClient;
	PLAssetsdPrivacySupportClient* _privacySupportClient;

}

@property (readonly) PLAssetsdSystemLibraryURLReadOnlyClient * systemLibraryURLReadOnlyClient; 
@property (readonly) PLAssetsdLibraryManagementClient * libraryManagementClient; 
@property (readonly) PLAssetsdDemoClient * demoClient; 
@property (readonly) PLAssetsdPrivacySupportClient * privacySupportClient; 
-(id)init;
-(PLAssetsdLibraryManagementClient *)libraryManagementClient;
-(PLAssetsdSystemLibraryURLReadOnlyClient *)systemLibraryURLReadOnlyClient;
-(PLAssetsdDemoClient *)demoClient;
-(void)_updateLibraryStateConnectionInterrupted:(id)arg1 ;
-(PLAssetsdPrivacySupportClient *)privacySupportClient;
@end

