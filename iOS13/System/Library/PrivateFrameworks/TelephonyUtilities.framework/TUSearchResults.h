/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfResults;
-(void)addSearchResults:(id)arg1 ;
-(NSString *)searchTerm;
-(void)setSearchTerm:(NSString *)arg1 ;
-(NSMutableArray *)resultGroups;
-(NSArray *)allSearchItems;
-(void)addResultGroup:(id)arg1 ;
-(void)addAdhocResultGroup;
-(void)setAllDataItemsCache:(NSMutableArray *)arg1 ;
-(void)setAllSearchItemsCache:(NSMutableArray *)arg1 ;
-(void)removeDuplicateResults;
-(void)removeSearchItem:(id)arg1 ;
-(void)setResultGroups:(NSMutableArray *)arg1 ;
-(void)_clearCaches;
-(id)resultGroupForSection:(long long)arg1 ;
-(NSMutableArray *)allSearchItemsCache;
-(NSMutableArray *)allDataItemsCache;
-(id)initWithSearchTerm:(id)arg1 ;
-(void)finalizeSearchResults;
-(long long)numberOfTableViewRows;
-(NSArray *)allDataItems;
@end

