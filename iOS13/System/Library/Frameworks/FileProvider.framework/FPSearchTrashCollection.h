/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPUnionCollection.h>
#import <libobjc.A.dylib/FPSearchQueryResultsProviding.h>

@class NSFileProviderSearchQuery, FPSearchCollection, FPTrashUnionCollection, NSPredicate;

@interface FPSearchTrashCollection : FPUnionCollection <FPSearchQueryResultsProviding> {

	FPSearchCollection* _searchCollection;
	FPTrashUnionCollection* _trashCollection;
	NSPredicate* _searchQueryPredicate;
	unsigned long long _selectedMembership;

}

@property (nonatomic,copy) NSFileProviderSearchQuery * searchQuery; 
-(id)init;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)scopedSearchQuery;
@end

