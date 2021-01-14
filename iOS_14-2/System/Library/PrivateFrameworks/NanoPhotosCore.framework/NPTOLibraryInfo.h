/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore
*/


@class NSURL, NPTONotificationCenter, NPTOPreferencesAccessor, NSDictionary;

@interface NPTOLibraryInfo : NSObject {

	NSURL* _libraryURL;
	NPTONotificationCenter* _notificationCenter;
	NPTOPreferencesAccessor* _legacyPreferencesAccessor;

}

@property (assign,getter=isSyncing,nonatomic) BOOL syncing; 
@property (nonatomic,retain) NSDictionary * collectionTargetMap; 
-(id)initWithDevice:(id)arg1 ;
-(void)setSyncing:(BOOL)arg1 ;
-(BOOL)isSyncing;
-(id)_syncingFileURL;
-(void)_createLibraryDirectoryIfNeeded;
-(id)_collectionTargetMapFileURL;
-(NSDictionary *)collectionTargetMap;
-(id)syncingChangeObserverWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setCollectionTargetMap:(NSDictionary *)arg1 ;
-(id)collectionTargetMapChangeObserverWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

