/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


#import <InputContext/InputContext-Structs.h>
@class NSMutableOrderedSet, _ICTransientLexicon, NSArray;

@interface _ICNamedEntityStore : NSObject {

	NSMutableOrderedSet* _recentNamedEntityQueue;
	_ICTransientLexicon* _wordLexicon;
	_ICTransientLexicon* _phraseLexicon;
	NSArray* _lexicons;
	/*^block*/id _wordFilteringBlock;
	/*^block*/id _filteringBlock;

}

@property (nonatomic,copy) id filteringBlock;                   //@synthesize filteringBlock=_filteringBlock - In the implementation block
@property (nonatomic,readonly) NSArray * lexicons;              //@synthesize lexicons=_lexicons - In the implementation block
+(id)lexiconViews;
+(id)tokenize:(id)arg1 ;
-(void)removeAllEntries;
-(id)init;
-(void)updateQueue:(id)arg1 newEntity:(id)arg2 ;
-(void)removeEntry:(id)arg1 source:(unsigned char)arg2 ;
-(void)reloadRecents;
-(BOOL)isValidNamedEntity:(id)arg1 explanation:(id*)arg2 ;
-(void)removeEntriesBySource:(unsigned char)arg1 ;
-(void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2 source:(unsigned char)arg3 type:(unsigned char)arg4 ;
-(USetRef)exemplarSetForSupportedLocales;
-(NSArray *)lexicons;
-(id)filterWord:(id)arg1 ;
-(void)addEntity:(id)arg1 isDurable:(BOOL)arg2 ;
-(BOOL)isFirstCandidateBetter:(id)arg1 than:(id)arg2 ;
-(void)updateQueueFromString:(id)arg1 newEntity:(id)arg2 ;
-(BOOL)areStringCharactersWhitelisted:(id)arg1 ;
-(void)setFilteringBlock:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
-(id)filteringBlock;
@end

