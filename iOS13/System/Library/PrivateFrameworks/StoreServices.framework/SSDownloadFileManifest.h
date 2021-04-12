/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {

	SSXPCConnection* _connection;
	long long _manifestType;

}

@property (readonly) long long manifestType; 
-(id)init;
-(void)dealloc;
-(id)initWithManifestType:(long long)arg1 ;
-(void)_removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)getPathsForFilesWithClass:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)manifestType;
-(void)rebuildManifestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)removeItemWithAssetPath:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)removeItemsWithAssetPaths:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

