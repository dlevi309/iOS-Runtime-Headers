/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIKeyboardCandidateList <NSObject>
@optional
-(id)candidates;
-(void)setInlineText:(id)arg1;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(BOOL)arg6;
-(BOOL)hasCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)handleNumberKey:(unsigned long long)arg1;
-(void)showCaret:(BOOL)arg1 gradually:(BOOL)arg2;
-(BOOL)handleTabKeyWithShift:(BOOL)arg1;
-(void)candidatesDidChange;
-(void)jumpToCompositions;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;
-(long long)rowForCandidateAtIndex:(unsigned long long)arg1;
-(id)secureCandidateRenderTraits;

@required
-(BOOL)hasCandidates;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2;
-(BOOL)showCandidate:(id)arg1;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1;
-(void)showCandidateAtIndex:(unsigned long long)arg1;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;

@end

