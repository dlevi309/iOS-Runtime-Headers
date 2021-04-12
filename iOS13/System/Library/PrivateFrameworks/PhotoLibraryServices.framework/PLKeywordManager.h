/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class PLPhotoLibraryPathManager, NSObject, NSMutableDictionary;

@interface PLKeywordManager : NSObject {

	PLPhotoLibraryPathManager* _pathManager;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSMutableDictionary* _keywordCache;

}
+(id)keywordsForAssets:(id)arg1 ;
+(id)keywordsForAsset:(id)arg1 ;
+(id)keywordsForAssetWithUUID:(id)arg1 managedObjectContext:(id)arg2 ;
+(id)_keywordsForAsset:(id)arg1 ;
-(id)initWithPathManager:(id)arg1 ;
-(BOOL)setKeywords:(id)arg1 forAsset:(id)arg2 ;
-(BOOL)setKeyword:(id)arg1 forAssets:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)setKeywords:(id)arg1 forAssetUUID:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)arg1 ;
-(void)_invalidateKeywordCache;
-(id)_inq_keywordObjectsForKeywords:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_setKeywords:(id)arg1 forAsset:(id)arg2 managedObjectContext:(id)arg3 ;
-(BOOL)_setKeyword:(id)arg1 forAssets:(id)arg2 managedObjectContext:(id)arg3 ;
@end

