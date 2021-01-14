/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2 ;
-(void)invalidate;
-(void)_gatherItemsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_createSearchQuery;
-(id)_fpItemsFromSearchableItems:(id)arg1 ;
-(id)initWithSearchQuery:(id)arg1 mountPoint:(id)arg2 ;
@end

