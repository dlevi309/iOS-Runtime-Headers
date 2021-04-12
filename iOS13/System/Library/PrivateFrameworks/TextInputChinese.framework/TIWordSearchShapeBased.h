/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputCore/TIWordSearch.h>

@interface TIWordSearchShapeBased : TIWordSearch
-(BOOL)canHandleKeyHitTest;
-(void)updateMecabraState;
-(id)autoconvertLongestValidPrefixes:(id)arg1 option:(unsigned long long)arg2 candidateResultSet:(id)arg3 autoconvertedCandidateArray:(id*)arg4 ;
-(BOOL)addTopCandidateForCode:(id)arg1 option:(unsigned long long)arg2 autoconvertedCandidates:(id)arg3 candidateRefsDictionary:(id)arg4 ;
-(BOOL)validateCode:(id)arg1 withOption:(unsigned long long)arg2 ;
@end

