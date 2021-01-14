/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResult.h>

@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (nonatomic,copy) NSArray * tokenColumns; 
@property (assign,nonatomic) long long changeableTokenColumnCount; 
@property (assign,nonatomic) long long precedingLineBreaks; 
+(id)refineAlternativeTokens:(id)arg1 historyTokenIDs:(id)arg2 languageModel:(void*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)adjustColumns;
-(void)appendTokenColumns:(id)arg1 ;
-(void)setTranscriptionPaths:(id)arg1 scores:(id)arg2 ;
-(void)trimTokensToTranscriptionPathCount:(long long)arg1 ;
-(void)filterCandidatesWithOutOfPattern:(BOOL)arg1 duplicateTokenIDs:(BOOL)arg2 shouldKeepOriginalSpelling:(BOOL)arg3 ;
-(void)setTokenColumns:(NSArray *)arg1 ;
-(void)setPrecedingLineBreaks:(long long)arg1 ;
-(id)commonStrokeSetsFromSets:(id)arg1 tokenRow:(id)arg2 ;
-(id)_columnStrokeSetsFromTokenRows:(id)arg1 ;
-(void)setChangeableTokenColumnCount:(long long)arg1 ;
@end

