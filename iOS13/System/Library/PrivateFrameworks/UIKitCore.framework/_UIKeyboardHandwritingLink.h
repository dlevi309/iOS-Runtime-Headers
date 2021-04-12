/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIResponder.h>
#import <UIKit/UIKeyboardCandidateListConsumer.h>

@protocol UIKeyboardCandidateListDelegate;
@class UIResponder, TIKeyboardCandidateResultSet, NSString;

@interface _UIKeyboardHandwritingLink : UIResponder <UIKeyboardCandidateListConsumer> {

	UIResponder* _previousResponder;
	UIResponder* _fallbackResponder;
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	long long _selectedIndex;
	BOOL _justDeleted;
	TIKeyboardCandidateResultSet* _candidateSet;

}

@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;              //@synthesize candidateSet=_candidateSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)nextResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)reloadInputViews;
-(BOOL)hasCandidates;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(BOOL)showCandidate:(id)arg1 ;
-(BOOL)isExtendedList;
-(BOOL)isFloatingList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(id)statisticsIdentifier;
-(unsigned long long)selectedSortIndex;
-(void)performOutput:(id)arg1 ;
-(BOOL)shouldRestoreResponder;
-(void)candidateOutput:(id)arg1 ;
-(BOOL)isDeleteCandidate:(id)arg1 ;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(void)candidatesUpdated;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(void)sendStrokes:(id)arg1 ;
@end

