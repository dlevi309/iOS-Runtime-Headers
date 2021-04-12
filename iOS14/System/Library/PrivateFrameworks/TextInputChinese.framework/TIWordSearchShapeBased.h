/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

