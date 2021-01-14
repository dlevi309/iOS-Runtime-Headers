/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKitCore/_UIDynamicCaretDocumentContentDelegate.h>

@protocol UIKeyboardCandidateListDelegate;
@class _UIDynamicCaretInput, _UIDynamicCaretAlternatives, _UIDynamicCaretNoContentView, _UIDynamicCaretHelpLabel, TIKeyboardCandidateResultSet, NSString;

@interface UIDynamicCaret : UIImageView <UIKeyboardCandidateList, _UIDynamicCaretDocumentContentDelegate> {

	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;
	long long _selectedIndex;
	BOOL _justDeleted;
	_UIDynamicCaretInput* _inputView;
	_UIDynamicCaretAlternatives* _alternativesView;
	_UIDynamicCaretNoContentView* _noContentView;
	_UIDynamicCaretHelpLabel* _helpLabel;
	TIKeyboardCandidateResultSet* _candidateSet;

}

@property (nonatomic,retain) _UIDynamicCaretInput * inputView;                            //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretAlternatives * alternativesView;              //@synthesize alternativesView=_alternativesView - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretNoContentView * noContentView;                //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretHelpLabel * helpLabel;                        //@synthesize helpLabel=_helpLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                 //@synthesize candidateSet=_candidateSet - In the implementation block
@property (assign,nonatomic) BOOL isActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)currentIndex;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(BOOL)isExtendedList;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(BOOL)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setInputView:(_UIDynamicCaretInput *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isActive;
-(BOOL)hasCandidates;
-(void)didMoveToSuperview;
-(_UIDynamicCaretInput *)inputView;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)statisticsIdentifier;
-(void)setFrame:(CGRect)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(_UIDynamicCaretHelpLabel *)helpLabel;
-(id)currentCandidate;
-(void)showCandidateInForwardDirection:(BOOL)arg1 granularity:(int)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setIsActive:(BOOL)arg1 ;
-(id)backgroundImage;
-(TIKeyboardCandidateResultSet *)candidateSet;
-(void)setCandidateSet:(TIKeyboardCandidateResultSet *)arg1 ;
-(BOOL)isDeleteCandidate:(id)arg1 ;
-(BOOL)showCandidate:(id)arg1 ;
-(void)setAlternativesView:(_UIDynamicCaretAlternatives *)arg1 ;
-(void)setNoContentView:(_UIDynamicCaretNoContentView *)arg1 ;
-(void)setHelpLabel:(_UIDynamicCaretHelpLabel *)arg1 ;
-(_UIDynamicCaretAlternatives *)alternativesView;
-(_UIDynamicCaretNoContentView *)noContentView;
-(void)displayAlternatives:(BOOL)arg1 ;
-(void)setDocumentHasContent:(BOOL)arg1 ;
-(void)alternativeTappedAtIndex:(long long)arg1 ;
-(BOOL)isFloatingList;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
@end

