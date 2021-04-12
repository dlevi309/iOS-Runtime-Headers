/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface ICSearchResultSection : NSObject {

	NSMutableOrderedSet* _searchResults;
	NSMutableDictionary* _identifierToSearchResult;
	NSMutableDictionary* _hiddenSearchResults;
	NSMutableDictionary* _unhiddenSearchResults;

}

@property (nonatomic,retain) NSMutableOrderedSet * searchResults;                         //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToSearchResult;              //@synthesize identifierToSearchResult=_identifierToSearchResult - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenSearchResults;                   //@synthesize hiddenSearchResults=_hiddenSearchResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unhiddenSearchResults;                 //@synthesize unhiddenSearchResults=_unhiddenSearchResults - In the implementation block
-(id)identifiers;
-(id)init;
-(void)addSearchResults:(id)arg1 ;
-(id)description;
-(void)setSearchResults:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)searchResults;
-(void)setIdentifierToSearchResult:(NSMutableDictionary *)arg1 ;
-(void)setHiddenSearchResults:(NSMutableDictionary *)arg1 ;
-(void)setUnhiddenSearchResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToSearchResult;
-(NSMutableDictionary *)hiddenSearchResults;
-(NSMutableDictionary *)unhiddenSearchResults;
-(id)hiddenIdentifiers;
-(BOOL)removeSearchResultForIdentifier:(id)arg1 forHiding:(BOOL)arg2 ;
-(void)resetToSearchResults:(id)arg1 ;
@end

