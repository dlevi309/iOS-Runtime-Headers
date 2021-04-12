/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)currentIndex;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)isExtendedList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(id)nextResponder;
-(id)init;
-(BOOL)hasCandidates;
-(void)performOutput:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)statisticsIdentifier;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(id)currentCandidate;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(void)candidatesUpdated;
-(void)candidateOutput:(id)arg1 ;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(BOOL)isDeleteCandidate:(id)arg1 ;
-(BOOL)shouldRestoreResponder;
-(BOOL)showCandidate:(id)arg1 ;
-(void)sendStrokes:(id)arg1 ;
-(void)reloadInputViews;
-(BOOL)isFloatingList;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

