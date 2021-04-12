/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSFileProviderEnumerator.h>

@class NSFileProviderSearchQuery, NSString, CSSearchQuery;

@interface FPSearchQueryEnumerator : NSObject <NSFileProviderEnumerator> {

	NSFileProviderSearchQuery* _fileProviderSearchQuery;
	NSString* _mountPoint;
	CSSearchQuery* _searchQuery;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)_gatherItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_createSearchQuery;
-(id)_fpItemsFromSearchableItems:(id)arg1 ;
-(id)initWithSearchQuery:(id)arg1 mountPoint:(id)arg2 ;
@end

