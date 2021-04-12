/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, TUSearchController, NSArray;

@interface TUSearchResults : NSObject <NSCopying> {

	NSString* _searchTerm;
	NSMutableArray* _resultGroups;
	TUSearchController* _searchController;
	NSMutableArray* _allSearchItemsCache;
	NSMutableArray* _allDataItemsCache;

}

@property (nonatomic,retain) NSString * searchTerm;                             //@synthesize searchTerm=_searchTerm - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultGroups;                     //@synthesize resultGroups=_resultGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * allSearchItemsCache;              //@synthesize allSearchItemsCache=_allSearchItemsCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * allDataItemsCache;                //@synthesize allDataItemsCache=_allDataItemsCache - In the implementation block
@property (readonly) NSArray * allSearchItems; 
@property (readonly) NSArray * allDataItems; 
@property (readonly) long long numberOfSections; 
@property (readonly) long long numberOfResults; 
@property (__weak) TUSearchController * searchController;                       //@synthesize searchController=_searchController - In the implementation block
-(void)setSearchTerm:(NSString *)arg1 ;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(TUSearchController *)searchController;
-(void)_clearCaches;
-(long long)numberOfSections;
-(NSString *)searchTerm;
-(void)setResultGroups:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resultGroups;
-(void)addSearchResults:(id)arg1 ;
-(id)description;
-(long long)numberOfResults;
-(NSArray *)allSearchItems;
-(void)addResultGroup:(id)arg1 ;
-(NSArray *)allDataItems;
-(void)addAdhocResultGroup;
-(void)setAllDataItemsCache:(NSMutableArray *)arg1 ;
-(void)setAllSearchItemsCache:(NSMutableArray *)arg1 ;
-(void)removeSearchItem:(id)arg1 ;
-(void)removeDuplicateResults;
-(id)resultGroupForSection:(long long)arg1 ;
-(NSMutableArray *)allSearchItemsCache;
-(NSMutableArray *)allDataItemsCache;
-(id)initWithSearchTerm:(id)arg1 ;
-(void)finalizeSearchResults;
-(long long)numberOfTableViewRows;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

