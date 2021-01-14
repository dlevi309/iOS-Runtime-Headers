/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSString;

@interface CHSearchQuery : CHQuery {

	NSArray* _foundItems;
	NSString* _queryString;

}

@property (setter=_setFoundItems:,nonatomic,copy) NSArray * foundItems;              //@synthesize foundItems=_foundItems - In the implementation block
@property (nonatomic,copy) NSString * queryString;                                   //@synthesize queryString=_queryString - In the implementation block
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)stop;
-(NSArray *)foundItems;
-(id)debugName;
-(void)dealloc;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)q_updateQueryResult;
-(id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2 ;
-(void)_setFoundItems:(id)arg1 ;
-(void)_enumerateMatchesForStrokeGroupResult:(id)arg1 locales:(id)arg2 queryString:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)_findMatchingTokenPathInResult:(id)arg1 initialTokenLocation:(SCD_Struct_CH43)arg2 queryString:(id)arg3 fromIndex:(long long)arg4 coveredStrokeIndexes:(id)arg5 reverseMatchedTokens:(id*)arg6 ;
-(BOOL)_isMatchSeparatorBeforeToken:(id)arg1 atLocation:(SCD_Struct_CH43)arg2 inResult:(id)arg3 queryString:(id)arg4 fromIndex:(long long)arg5 matchedLength:(long long*)arg6 ;
-(BOOL)_isMatchStringForToken:(id)arg1 queryString:(id)arg2 fromIndex:(long long)arg3 requirePrefixMatch:(BOOL)arg4 matchedLength:(long long*)arg5 ;
@end
