/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, ICUserIdentity;

@interface MPContentTasteController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _pendingUpdateRecordByPlaylistGlobalID;
	NSMutableDictionary* _pendingUpdateRecordByStoreAdamID;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,readonly) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
+(id)_tasteControllerWithUserIdentity:(id)arg1 isSingleton:(BOOL)arg2 createIfRequired:(BOOL)arg3 ;
+(id)controllerWithUserIdentity:(id)arg1 ;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 userInfo:(id)arg3 ;
+(id)globalSerialQueue;
+(void)_postNotificationName:(id)arg1 controller:(id)arg2 ;
+(id)controllers;
+(id)sharedController;
-(ICUserIdentity *)userIdentity;
-(id)init;
-(long long)tasteTypeForMediaEntity:(id)arg1 ;
-(void)setTasteType:(long long)arg1 forModel:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(long long)tasteTypeForModel:(id)arg1 ;
-(void)setTasteType:(long long)arg1 forMediaEntity:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_libraryPathDidChangeForTasteController:(id)arg1 ;
-(void)setTasteType:(long long)arg1 forPlaylistGlobalID:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(long long)tasteTypeForStoreAdamID:(long long)arg1 ;
-(void)setTasteType:(long long)arg1 forStoreAdamID:(long long)arg2 withContentType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)tasteTypeForPlaylistGlobalID:(id)arg1 ;
-(void)_deviceMediaLibraryDidChangeNotification:(id)arg1 ;
-(id)_libraryEntityForModel:(id)arg1 ;
-(id)_libraryPlaylistWithGlobalID:(id)arg1 ;
-(id)_libraryEntityWithStoreID:(long long)arg1 contentType:(long long)arg2 ;
-(id)_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(long long)arg3 ;
-(id)_addPendingUpdateRecord:(id)arg1 withKey:(id)arg2 inDictionary:(id)arg3 ;
-(void)_removePendingUpdateRecordForPlaylistGlobalID:(id)arg1 token:(id)arg2 ;
-(id)_addPendingUpdateRecordForPlaylistGlobalID:(id)arg1 contentTasteType:(long long)arg2 ;
-(id)_pendingUpdateRecordForStoreAdamID:(long long)arg1 ;
-(id)_addPendingUpdateRecordForStoreAdamID:(long long)arg1 contentTasteType:(long long)arg2 ;
-(id)_pendingUpdateRecordForKey:(id)arg1 inDictionary:(id)arg2 ;
-(void)_removePendingUpdateRecordForStoreAdamID:(long long)arg1 token:(id)arg2 ;
-(id)_pendingUpdateRecordForPlaylistGlobalID:(id)arg1 ;
-(id)_initWithUserIdentity:(id)arg1 ;
-(id)_mediaLibrary;
@end

