/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPQueryCollection.h>
#import <libobjc.A.dylib/FPSearchQueryResultsProviding.h>

@class NSPredicate, NSFileProviderSearchQuery;

@interface FPSearchCollection : FPQueryCollection <FPSearchQueryResultsProviding> {

	NSPredicate* _filterPredicate;

}

@property (nonatomic,copy) NSFileProviderSearchQuery * searchQuery; 
-(id)init;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
-(id)_enumerationSettingsPredicate;
-(id)_createDescriptorWithSortDescriptors:(id)arg1 ;
@end

