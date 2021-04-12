/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteractionAssistant.h>
#import <UIKit/UIResponderStandardEditActions.h>

@class _UITextServiceSession, UITextChecker, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {

	long long _selectionOperation;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextChecker* _textChecker;
	unsigned long long _options;
	BOOL _shouldDelayActivatingSelectionView;
	BOOL _hadCaretSelectionBeforeTap;
	NSString* _wordBeforeTap;
	CGRect _caretBeforeTap;

}

@property (nonatomic,retain) NSString * wordBeforeTap;                                        //@synthesize wordBeforeTap=_wordBeforeTap - In the implementation block
@property (assign,nonatomic) CGRect caretBeforeTap;                                           //@synthesize caretBeforeTap=_caretBeforeTap - In the implementation block
@property (assign,nonatomic) BOOL hadCaretSelectionBeforeTap;                                 //@synthesize hadCaretSelectionBeforeTap=_hadCaretSelectionBeforeTap - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * singleTapGesture; 
@property (nonatomic,readonly) UILongPressGestureRecognizer * loupeGesture; 
@property (nonatomic,readonly) UILongPressGestureRecognizer * forcePressGesture; 
@property (assign,nonatomic) BOOL shouldDelayActivatingSelectionView;                         //@synthesize shouldDelayActivatingSelectionView=_shouldDelayActivatingSelectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)selectionChanged;
-(id)initWithView:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(BOOL)shouldEnqueueObserverUpdates;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)setShouldDelayActivatingSelectionView:(BOOL)arg1 ;
-(BOOL)shouldDelayActivatingSelectionView;
-(void)showSelectionView;
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)containerIsPlainStyleAtom;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(BOOL)containerAllowsSelectionTintOnly;
-(void)selectWord;
-(long long)currentCursorBehavior;
-(BOOL)containerIsBrowserView;
-(BOOL)usesAsynchronousSelectionController;
-(BOOL)containerIsAtom;
-(BOOL)wantsLinkInteraction;
-(Class)selectionInteractionClass;
-(id)_asText;
-(BOOL)requiresImmediateUpdate;
-(BOOL)containerAllowsSelection;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)updateActivatingSelectionView;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(void)setWordBeforeTap:(NSString *)arg1 ;
-(void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)scheduleChineseTransliterationForText:(id)arg1 ;
-(void)scheduleReplacementsForText:(id)arg1 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)showTextStyleOptions;
-(void)hideTextStyleOptions;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 withRange:(NSRange)arg2 fromRect:(CGRect)arg3 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)willChangeSelection;
-(NSString *)wordBeforeTap;
-(CGRect)caretBeforeTap;
-(void)setCaretBeforeTap:(CGRect)arg1 ;
-(BOOL)hadCaretSelectionBeforeTap;
-(void)setHadCaretSelectionBeforeTap:(BOOL)arg1 ;
@end

