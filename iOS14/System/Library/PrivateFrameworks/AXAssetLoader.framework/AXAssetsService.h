/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXAssetLoader.framework/AXAssetLoader
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface AXAssetsService : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;

}
-(id)xpcConnection;
-(id)init;
-(void)_destroyXPCConnection;
-(id)_serviceProxy;
-(void)dealloc;
-(void)refreshAssetCatalogForPolicy:(id)arg1 withOverrideTimeout:(id)arg2 ;
-(void)updateAssetForPolicy:(id)arg1 ;
@end

