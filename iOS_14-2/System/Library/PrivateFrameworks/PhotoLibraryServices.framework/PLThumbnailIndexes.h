/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableIndexSet;

@interface PLThumbnailIndexes : NSObject {

	NSObject*<OS_dispatch_queue> _isolation;
	NSMutableIndexSet* _unusedIndexes;
	long long _usedMax;
	unsigned long long _fetchTimestamp;

}
+(void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3 ;
+(void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1 ;
+(void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 ;
-(id)init;
-(void)getAvailableThumbnailIndexesFromLibrary:(id)arg1 ;
-(id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 ;
-(id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1 ;
-(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
@end

