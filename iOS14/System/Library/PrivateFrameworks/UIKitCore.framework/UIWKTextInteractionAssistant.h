/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteractionAssistant.h>
#import <UIKit/UIResponderStandardEditActions.h>

@protocol UITextCursorAssertion;
@class _UITextServiceSession, UITextChecker, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant <UIResponderStandardEditActions> {

	long long _selectionOperation;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextChecker* _textChecker;
	unsigned long long _options;
	id<UITextCursorAssertion> _blinkAssertion;
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
-(CGRect)caretBeforeTap;
-(void)selectAll:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(BOOL)shouldDelayActivatingSelectionView;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)showSelectionView;
-(void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)scheduleChineseTransliterationForText:(id)arg1 ;
-(void)selectWord;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)setCaretBeforeTap:(CGRect)arg1 ;
-(NSString *)wordBeforeTap;
-(void)rangeSelectionCanceled;
-(void)willStartScrollingOverflow;
-(BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)updateActivatingSelectionView;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(BOOL)hadCaretSelectionBeforeTap;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)setHadCaretSelectionBeforeTap:(BOOL)arg1 ;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
-(BOOL)containerAllowsSelection;
-(BOOL)containerIsAtom;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)overrideGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(long long)currentCursorBehavior;
-(BOOL)containerIsBrowserView;
-(void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)usesAsynchronousSelectionController;
-(void)setShouldDelayActivatingSelectionView:(BOOL)arg1 ;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)willChangeSelection;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(Class)selectionInteractionClass;
-(void)addGestureRecognizersToView:(id)arg1 ;
-(void)hideTextStyleOptions;
-(id)initWithView:(id)arg1 ;
-(void)setWordBeforeTap:(NSString *)arg1 ;
-(BOOL)requiresImmediateUpdate;
-(BOOL)overrideGestureRecognizerShouldBegin:(id)arg1 ;
-(id)_asText;
-(void)scheduleReplacementsForText:(id)arg1 ;
-(BOOL)shouldSuppressSelectionCommands;
-(void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)wantsLinkInteraction;
-(void)showTextStyleOptions;
-(void)selectionChanged;
-(void)dealloc;
-(void)lookup:(id)arg1 withRange:(NSRange)arg2 fromRect:(CGRect)arg3 ;
-(void)didEndScrollingOverflow;
@end

