/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 ;
+(unsigned long long)nextAvailableThumbnailIndexInLibrary:(id)arg1 ;
+(void)getAvailableThumbnailIndexesInLibrary:(id)arg1 withCount:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
+(void)getAvailableThumbnailIndexInLibrary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
+(void)recycleThumbnailIndexes:(id)arg1 inLibrary:(id)arg2 timestamp:(unsigned long long)arg3 ;
-(id)init;
-(void)recycleThumbnailIndexes:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(id)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 ;
-(void)getAvailableThumbnailIndexesWithCount:(unsigned long long)arg1 inLibrary:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getAvailableThumbnailIndexesFromLibrary:(id)arg1 ;
-(id)fetchOccupiedThumbnailIndexesWithLibrary:(id)arg1 ;
@end

