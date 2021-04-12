/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCollectionValidForItem:(id)arg1 ;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(id)scopedSearchQuery;
-(id)_enumerationSettingsPredicate;
-(id)_createDescriptorWithSortDescriptors:(id)arg1 ;
-(NSFileProviderSearchQuery *)searchQuery;
-(void)setSearchQuery:(NSFileProviderSearchQuery *)arg1 ;
@end

