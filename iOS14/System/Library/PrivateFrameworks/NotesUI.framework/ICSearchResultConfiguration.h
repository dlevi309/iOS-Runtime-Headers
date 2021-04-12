/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSString, NSManagedObjectID, ICSortableSearchableItem;

@interface ICSearchResultConfiguration : NSObject {

	BOOL _isTopHit;
	NSString* _searchString;
	unsigned long long _searchStringLength;
	unsigned long long _searchSuggestionType;
	NSManagedObjectID* _foundAttachmentObjectID;
	ICSortableSearchableItem* _sortableSearchableItem;

}

@property (nonatomic,readonly) NSString * searchString;                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) unsigned long long searchStringLength;                          //@synthesize searchStringLength=_searchStringLength - In the implementation block
@property (nonatomic,readonly) unsigned long long searchSuggestionType;                        //@synthesize searchSuggestionType=_searchSuggestionType - In the implementation block
@property (nonatomic,readonly) BOOL isTopHit;                                                  //@synthesize isTopHit=_isTopHit - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * foundAttachmentObjectID;                    //@synthesize foundAttachmentObjectID=_foundAttachmentObjectID - In the implementation block
@property (nonatomic,readonly) ICSortableSearchableItem * sortableSearchableItem;              //@synthesize sortableSearchableItem=_sortableSearchableItem - In the implementation block
-(BOOL)isTopHit;
-(unsigned long long)hash;
-(NSString *)searchString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)searchSuggestionType;
-(NSManagedObjectID *)foundAttachmentObjectID;
-(ICSortableSearchableItem *)sortableSearchableItem;
-(id)initWithSearchString:(id)arg1 searchSuggestionType:(unsigned long long)arg2 isTopHit:(BOOL)arg3 foundAttachmentObjectID:(id)arg4 sortableSearchableItem:(id)arg5 ;
-(unsigned long long)searchStringLength;
@end

