/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardCandidateList <NSObject>
@optional
-(void)revealHiddenCandidates;
-(long long)rowForCandidateAtIndex:(unsigned long long)arg1;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1;
-(void)setInlineText:(id)arg1;
-(void)jumpToCompositions;
-(void)candidatesDidChange;
-(id)inlineText;
-(BOOL)handleNumberKey:(unsigned long long)arg1;
-(id)secureCandidateRenderTraits;
-(id)candidates;
-(long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;

@required
-(unsigned long long)currentIndex;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1;
-(BOOL)isExtendedList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
-(BOOL)hasCandidates;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1;
-(id)statisticsIdentifier;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(id)currentCandidate;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)showCandidate:(id)arg1;
-(BOOL)isFloatingList;
-(void)showCandidateAtIndex:(unsigned long long)arg1;

@end

