/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class CSTopHitSearchQuery, NSArray, EFMutableInt64Set;

@interface EMSearchableIndexTopHitsQueryResult : NSObject {

	CSTopHitSearchQuery* _topHitSearchQuery;
	NSArray* _foundItems;
	EFMutableInt64Set* _libraryIdentifiers;

}

@property (nonatomic,retain) CSTopHitSearchQuery * topHitSearchQuery;              //@synthesize topHitSearchQuery=_topHitSearchQuery - In the implementation block
@property (nonatomic,copy) NSArray * foundItems;                                   //@synthesize foundItems=_foundItems - In the implementation block
@property (nonatomic,retain) EFMutableInt64Set * libraryIdentifiers;               //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
-(EFMutableInt64Set *)libraryIdentifiers;
-(void)setLibraryIdentifiers:(EFMutableInt64Set *)arg1 ;
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

