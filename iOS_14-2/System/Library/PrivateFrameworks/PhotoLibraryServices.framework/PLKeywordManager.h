/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibraryPathManager, NSObject, NSMutableDictionary;

@interface PLKeywordManager : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSMutableDictionary* _keywordCache;

}
+(id)keywordsForAsset:(id)arg1 ;
+(id)keywordsForAssetWithUUID:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)keywordsForAssets:(id)arg1 ;
+(id)_keywordsForAsset:(id)arg1 ;
-(BOOL)setKeywords:(id)arg1 forAssetUUID:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_invalidateKeywordCache;
-(void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)arg1 ;
-(id)_inq_keywordObjectsForKeywords:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_setKeywords:(id)arg1 forAsset:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_setKeyword:(id)arg1 forAssets:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)setKeyword:(id)arg1 forAssets:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)setKeywords:(id)arg1 forAsset:(id)arg2 ;
@end

