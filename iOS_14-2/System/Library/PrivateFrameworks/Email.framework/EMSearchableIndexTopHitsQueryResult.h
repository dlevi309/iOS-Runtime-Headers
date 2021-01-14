/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class CSTopHitSearchQuery, NSArray;

@interface EMSearchableIndexTopHitsQueryResult : NSObject {

	CSTopHitSearchQuery* _topHitSearchQuery;
	NSArray* _foundItems;
	NSArray* _searchableItemIdentifiers;

}

@property (nonatomic,retain) CSTopHitSearchQuery * topHitSearchQuery;              //@synthesize topHitSearchQuery=_topHitSearchQuery - In the implementation block
@property (nonatomic,copy) NSArray * foundItems;                                   //@synthesize foundItems=_foundItems - In the implementation block
@property (nonatomic,retain) NSArray * searchableItemIdentifiers;                  //@synthesize searchableItemIdentifiers=_searchableItemIdentifiers - In the implementation block
-(void)setSearchableItemIdentifiers:(NSArray *)arg1 ;
-(NSArray *)searchableItemIdentifiers;
-(NSArray *)foundItems;
-(long long)rankingIndexForMessageLibraryID:(id)arg1 ;
-(CSTopHitSearchQuery *)topHitSearchQuery;
-(long long)rankingIndexForConversationID:(id)arg1 ;
-(id)initWithTopHitSearchQuery:(id)arg1 foundItems:(id)arg2 ;
-(void)userDidInteractWithLibraryIdentifier:(id)arg1 ;
-(void)userDidInteractWithConversationID:(id)arg1 ;
-(void)setTopHitSearchQuery:(CSTopHitSearchQuery *)arg1 ;
-(void)setFoundItems:(NSArray *)arg1 ;
@end

