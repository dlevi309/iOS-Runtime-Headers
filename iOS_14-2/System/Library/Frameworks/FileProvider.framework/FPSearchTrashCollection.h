/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)scopedSearchQuery;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
@end

