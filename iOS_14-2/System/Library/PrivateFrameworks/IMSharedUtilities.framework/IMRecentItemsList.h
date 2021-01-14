/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol OS_dispatch_queue;
#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSObject;

@interface IMRecentItemsList : NSObject {

	NSObject*<OS_dispatch_queue> _diskWritingQueue;

}
+(id)sharedInstance;
-(void)loadRecentHandwritingsAndStickersWithThumbnailSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadRecentHandwritingsWithThumbnailSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadRecentStickers:(/*^block*/id)arg1 ;
-(id)init;
-(id)_guidForFileURL:(id)arg1 ;
-(void)_removeRecentDataPayloadEntry:(id)arg1 forDomain:(id)arg2 ;
-(void)dispatchCacheUpdateWithBlock:(/*^block*/id)arg1 ;
-(void)_addRecentDataPayloadEntry:(id)arg1 toDomain:(id)arg2 ;
-(id)_recentsCacheForDomain:(id)arg1 ;
-(id)_buildLRUCacheUsingArray:(id)arg1 forDomain:(id)arg2 ;
-(void)_removeRecentDataPayloadEntryFromDisk:(id)arg1 forDomain:(id)arg2 ;
-(void)_saveRecentDataPayloadEntryToDisk:(id)arg1 forDomain:(id)arg2 ;
-(void)_updateRecentsCache:(id)arg1 forDomain:(id)arg2 ;
-(long long)cacheSizeForDomain:(id)arg1 ;
-(void)deleteRecentItemWithFileURL:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3 ;
-(void)deleteRecentItemWithData:(id)arg1 GUID:(id)arg2 forDomain:(id)arg3 ;
-(void)deleteRecentsInFirstLaunch;
-(void)deleteAllRecentItemsForDomain:(id)arg1 ;
-(void)addRecentItemWithData:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4 ;
-(void)fetchRecentStickersWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchRecentItemsForDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addRecentItemAtFileURL:(id)arg1 GUID:(id)arg2 infoDictionary:(id)arg3 forDomain:(id)arg4 ;
-(void)dealloc;
@end

