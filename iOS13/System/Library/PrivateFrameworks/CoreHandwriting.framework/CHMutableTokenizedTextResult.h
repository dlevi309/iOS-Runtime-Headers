/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHTokenizedTextResult.h>

@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (nonatomic,copy) NSArray * tokenColumns; 
+(id)refineAlternativeTokens:(id)arg1 historyTokenIDs:(id)arg2 languageModel:(void*)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)adjustColumns;
-(void)appendTokenColumns:(id)arg1 ;
-(void)setTranscriptionPaths:(id)arg1 scores:(id)arg2 ;
-(void)trimTokensToTranscriptionPathCount:(long long)arg1 ;
-(void)filterCandidatesWithOutOfPattern:(BOOL)arg1 duplicateTokenIDs:(BOOL)arg2 ;
-(void)setTokenColumns:(NSArray *)arg1 ;
-(id)commonStrokeSetsFromSets:(id)arg1 tokenRow:(id)arg2 ;
-(id)_columnStrokeSetsFromTokenRows:(id)arg1 ;
@end

