/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString, NSArray, NSMutableArray, NSMutableSet, NSDictionary;

@interface PXSearchResultsSection : NSObject {

	BOOL _expanded;
	BOOL _sorted;
	NSString* _title;
	NSArray* _sortDescriptors;
	unsigned long long _sectionType;
	NSMutableArray* _mutableSearchResults;
	NSMutableSet* _mutableSearchResultUUIDs;

}

@property (nonatomic,readonly) NSMutableArray * mutableSearchResults;                //@synthesize mutableSearchResults=_mutableSearchResults - In the implementation block
@property (assign,getter=isSorted,nonatomic) BOOL sorted;                            //@synthesize sorted=_sorted - In the implementation block
@property (nonatomic,readonly) NSMutableSet * mutableSearchResultUUIDs;              //@synthesize mutableSearchResultUUIDs=_mutableSearchResultUUIDs - In the implementation block
@property (nonatomic,readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * searchResults; 
@property (getter=isExpandable,nonatomic,readonly) BOOL expandable; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                                //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionType;                       //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) unsigned long long visibleCount; 
@property (nonatomic,readonly) unsigned long long totalCount; 
@property (readonly) NSDictionary * debugDictionary; 
+(id)sectionTitleForCategoryMask:(unsigned long long)arg1 ;
+(id)_stringForCategory:(unsigned long long)arg1 ;
+(unsigned long long)sectionTypeForCategoryMask:(unsigned long long)arg1 isMomentSection:(BOOL)arg2 isTopAssetSection:(BOOL)arg3 ;
+(unsigned long long)_sectionTypeForCategory:(unsigned long long)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(id)init;
-(unsigned long long)totalCount;
-(NSArray *)sortDescriptors;
-(unsigned long long)sectionType;
-(id)description;
-(NSDictionary *)debugDictionary;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setSorted:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 withSectionType:(unsigned long long)arg2 ;
-(unsigned long long)maxVisibleItemsInCollapsedSection;
-(void)addSearchResult:(id)arg1 ;
-(void)removeSearchResult:(id)arg1 ;
-(unsigned long long)visibleCount;
-(NSMutableArray *)mutableSearchResults;
-(NSMutableSet *)mutableSearchResultUUIDs;
-(NSArray *)searchResults;
-(BOOL)isSorted;
-(BOOL)isExpandable;
-(NSString *)title;
@end

