/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface ICCloudContentTasteRequestListener : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSXPCConnection* _xpcConnection;

}
+(id)sharedCloudContentTasteRequestListener;
-(void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(id)init;
-(id)_init;
-(void)_setupContentTasteServiceConnection;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 configuration:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

