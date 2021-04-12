/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol PHResourceChooserAsset;
@class NSSortDescriptor, NSManagedObjectContext, NSArray, NSMutableArray;

@interface PHResourceChooserList : NSObject {

	id<PHResourceChooserAsset> _asset;
	/*^block*/id _itemHandler;
	/*^block*/id _endOfListHandler;
	long long _hintDataCurrentOffset;
	long long _hintDataNextItemOffset;
	BOOL _finishedPresentingFromHints;
	BOOL _didObserveThumbnailStoreKey;
	NSSortDescriptor* _sortDescriptor;
	NSManagedObjectContext* _context;
	NSArray* _nonHintResources;
	NSArray* _unvisitedNonHintResources;
	unsigned long long _lastPresentedFullResourceIndex;
	BOOL _finishedPresentingFromFetchedResources;
	NSMutableArray* _visitedKeys;
	unsigned long long _enumerationDirection;

}
-(id)init;
@end

