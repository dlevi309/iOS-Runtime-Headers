/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <NotesUI/TTTextController.h>

@class ICNote, ICAttachmentInsertionController, NSMutableDictionary, NSMutableArray, NSTextStorage;

@interface ICTextController : TTTextController {

	BOOL _userChangedWritingDirection;
	BOOL _disableAddingExtraLinesIfNeeded;
	BOOL _trackAddedExtraNewlineRanges;
	BOOL _alwaysHighlightAuthorEdits;
	BOOL _isConvertingTables;
	BOOL _shouldMergeNoteAfterScrolling;
	BOOL _isAutoListInsertionDisabled;
	BOOL _fullTextStylingRefreshScheduled;
	ICNote* _note;
	ICAttachmentInsertionController* _attachmentInsertionController;
	NSMutableDictionary* _trackedToDoParagraphs;
	NSMutableArray* _trackedRangesForAddedExtraNewlines;
	unsigned long long _overrideAppearanceType;
	unsigned long long _pauseMergeForScrollingCounter;
	NSTextStorage* _emptyTextStorage;

}

@property (assign,nonatomic) unsigned long long pauseMergeForScrollingCounter;                                    //@synthesize pauseMergeForScrollingCounter=_pauseMergeForScrollingCounter - In the implementation block
@property (assign,nonatomic) BOOL shouldMergeNoteAfterScrolling;                                                  //@synthesize shouldMergeNoteAfterScrolling=_shouldMergeNoteAfterScrolling - In the implementation block
@property (assign,nonatomic) BOOL isAutoListInsertionDisabled;                                                    //@synthesize isAutoListInsertionDisabled=_isAutoListInsertionDisabled - In the implementation block
@property (assign,nonatomic) BOOL fullTextStylingRefreshScheduled;                                                //@synthesize fullTextStylingRefreshScheduled=_fullTextStylingRefreshScheduled - In the implementation block
@property (nonatomic,retain) NSTextStorage * emptyTextStorage;                                                    //@synthesize emptyTextStorage=_emptyTextStorage - In the implementation block
@property (assign,nonatomic,__weak) ICNote * note;                                                                //@synthesize note=_note - In the implementation block
@property (assign,nonatomic,__weak) ICAttachmentInsertionController * attachmentInsertionController;              //@synthesize attachmentInsertionController=_attachmentInsertionController - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedToDoParagraphs;                                       //@synthesize trackedToDoParagraphs=_trackedToDoParagraphs - In the implementation block
@property (assign) BOOL userChangedWritingDirection;                                                              //@synthesize userChangedWritingDirection=_userChangedWritingDirection - In the implementation block
@property (assign,nonatomic) BOOL disableAddingExtraLinesIfNeeded;                                                //@synthesize disableAddingExtraLinesIfNeeded=_disableAddingExtraLinesIfNeeded - In the implementation block
@property (nonatomic,retain) NSMutableArray * trackedRangesForAddedExtraNewlines;                                 //@synthesize trackedRangesForAddedExtraNewlines=_trackedRangesForAddedExtraNewlines - In the implementation block
@property (assign,nonatomic) BOOL trackAddedExtraNewlineRanges;                                                   //@synthesize trackAddedExtraNewlineRanges=_trackAddedExtraNewlineRanges - In the implementation block
@property (assign,nonatomic) BOOL alwaysHighlightAuthorEdits;                                                     //@synthesize alwaysHighlightAuthorEdits=_alwaysHighlightAuthorEdits - In the implementation block
@property (assign,nonatomic) BOOL isConvertingTables;                                                             //@synthesize isConvertingTables=_isConvertingTables - In the implementation block
@property (assign,nonatomic) unsigned long long overrideAppearanceType;                                           //@synthesize overrideAppearanceType=_overrideAppearanceType - In the implementation block
+(BOOL)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(NSRange)arg2 ;
+(BOOL)checklistAutoSortEnabled;
+(BOOL)checklistAutoAlertShown;
+(void)setChecklistAutoAlertShown:(BOOL)arg1 ;
+(void)setChecklistAutoSortEnabled:(BOOL)arg1 ;
+(BOOL)needsToShowFirstTimeAutoSortChecklistAlert;
+(double)indentForStyle:(id)arg1 range:(NSRange)arg2 attributedString:(id)arg3 textView:(id)arg4 ;
+(double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(id)arg2 ;
+(id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(NSRange)arg3 ;
+(double)extraWidthNeededForStyle:(id)arg1 range:(NSRange)arg2 attributedString:(id)arg3 textView:(id)arg4 ;
+(id)attributedStringToPasteWithAdaptedParagraphStyles:(id)arg1 pasteRange:(NSRange)arg2 textStorage:(id)arg3 ;
-(id)init;
-(void)setNote:(ICNote *)arg1 ;
-(ICNote *)note;
-(void)dealloc;
-(void)highlightTextAfter:(id)arg1 inTextStorage:(id)arg2 ;
-(BOOL)isConvertingTables;
-(void)setIsConvertingTables:(BOOL)arg1 ;
-(void)workAroundSageTables:(id)arg1 ;
-(id)addTableAttachmentWithNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4 ;
-(void)p_populateTable:(id)arg1 withNSTextTable:(id)arg2 attributedString:(id)arg3 filterPastedAttributes:(BOOL)arg4 isReadingSelectionFromPasteboard:(BOOL)arg5 ;
-(NSRange)p_setCellsInTable:(id)arg1 fromAttributedString:(id)arg2 textTable:(id)arg3 atCellOffset:(NSRange)arg4 filterPastedAttributes:(BOOL)arg5 isReadingSelectionFromPasteboard:(BOOL)arg6 ;
-(void)updateCellInTable:(id)arg1 atColumnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 fromAttributedString:(id)arg4 andTextTableBlock:(id)arg5 filterPastedAttributes:(BOOL)arg6 isReadingSelectionFromPasteboard:(BOOL)arg7 ;
-(void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(BOOL)arg3 isReadingSelectionFromPasteboard:(BOOL)arg4 ;
-(void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2 ;
-(void)setDisableAddingExtraLinesIfNeeded:(BOOL)arg1 ;
-(void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 ;
-(BOOL)alwaysHighlightAuthorEdits;
-(void)setHighlightAuthorEdits:(BOOL)arg1 forRange:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(void)updateTrackingInTextStorage:(id)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(NSRange)arg2 ;
-(NSRange)expandedRangeForContiguousTodosForRange:(NSRange)arg1 textView:(id)arg2 ;
-(BOOL)setDone:(BOOL)arg1 range:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(void)sendTextDidChangeNotificationForTextView:(id)arg1 ;
-(id)todoForRange:(NSRange)arg1 inTextStorage:(id)arg2 ;
-(BOOL)containsAnyTodoItemMarkedCompleted:(BOOL)arg1 inRange:(NSRange)arg2 textStorage:(id)arg3 ;
-(id)rangesForTodosInRange:(NSRange)arg1 markedCompleted:(BOOL)arg2 textStorage:(id)arg3 ;
-(long long)setTextStyle:(unsigned)arg1 range:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(id)paragraphInfoForCharacterAtIndex:(unsigned long long)arg1 includeChildren:(BOOL)arg2 textStorage:(id)arg3 ;
-(id)validAdjacentParagraphInfoFromParagraphInfo:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3 ;
-(id)trackedParagraphsForTodosInRange:(NSRange)arg1 textStorage:(id)arg2 ;
-(NSMutableDictionary *)trackedToDoParagraphs;
-(id)createTreeFromTrackedParagraphs:(id)arg1 textView:(id)arg2 ;
-(BOOL)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(NSRange)arg2 animated:(BOOL)arg3 ;
-(void)applySortFromOriginalParagraphs:(id)arg1 sortedTrackedParagraphs:(id)arg2 forTextView:(id)arg3 checklistRange:(NSRange)arg4 ;
-(void)performAnimatedSortForTrackedParagraphs:(id)arg1 expandedRange:(NSRange)arg2 textView:(id)arg3 sortChecklistsBlock:(/*^block*/id)arg4 ;
-(void)updateTrackedAttributesInTextStorage:(id)arg1 range:(NSRange)arg2 changeInLength:(long long)arg3 ;
-(BOOL)containsOnlyStyle:(unsigned)arg1 inRange:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(id)rangeForChecklistItemInRange:(NSRange)arg1 textStorage:(id)arg2 ;
-(void)showFirstTimeAutoSortEnabledAlertIfNecessaryWithTextView:(id)arg1 completionHandler:(/*^block*/id)arg2 analyticsHandler:(/*^block*/id)arg3 ;
-(void)showFirstTimeAutoSortEnabledAlertWithTextView:(id)arg1 completionHandler:(/*^block*/id)arg2 analyticsHandler:(/*^block*/id)arg3 ;
-(void)markAllChecklistItemsCompleted:(BOOL)arg1 inTextview:(id)arg2 forSelectedRanges:(id)arg3 ;
-(BOOL)checklistItemExistsMarkedCompleted:(BOOL)arg1 inTextView:(id)arg2 forRanges:(id)arg3 ;
-(void)removeChecklistItemsMarkedCompleted:(BOOL)arg1 inTextView:(id)arg2 forRanges:(id)arg3 ;
-(BOOL)moveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(NSRange)arg3 ;
-(BOOL)canMoveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(NSRange)arg3 ;
-(id)expandedChecklistTrackedParagraphsInTextView:(id)arg1 forIndex:(long long)arg2 ;
-(id)adjacentTrackedParagraphFromTrackedParagraph:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3 ;
-(BOOL)canMoveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(NSRange)arg2 ;
-(BOOL)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(NSRange)arg2 ;
-(id)sortTrackedParagraphsMovingCheckedItemsToBottom:(id)arg1 ;
-(void)autoSortChecklistIfNecessaryForTrackedParagraph:(id)arg1 textView:(id)arg2 analyticsHandler:(/*^block*/id)arg3 ;
-(void)autoSortChecklistForUnitTestAtIndex:(unsigned long long)arg1 textView:(id)arg2 ;
-(id)analyticsInfoForChecklistAtIndex:(unsigned long long)arg1 textView:(id)arg2 ;
-(void)resetTrackedToDoParagraphs;
-(unsigned)paragraphStyleForRange:(NSRange)arg1 inTextView:(id)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(BOOL)arg4 ;
-(BOOL)canIndentTextView:(id)arg1 byDelta:(long long)arg2 forRanges:(id)arg3 ;
-(BOOL)attachmentsExistInRange:(NSRange)arg1 textStorage:(id)arg2 ;
-(void)indentRange:(NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(id)arg4 forceUpdateAttributes:(BOOL)arg5 ;
-(id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2 ;
-(id)nsParagraphStyleForTTParagraphStyle:(id)arg1 range:(NSRange)arg2 attributedString:(id)arg3 textView:(id)arg4 ;
-(long long)setTextStyle:(unsigned)arg1 range:(NSRange)arg2 inTextStorage:(id)arg3 inTextView:(id)arg4 ;
-(long long)setTextStyle:(unsigned)arg1 removeExtraStyling:(BOOL)arg2 range:(NSRange)arg3 inTextStorage:(id)arg4 inTextView:(id)arg5 ;
-(id)keyboardLanguageForTextView:(id)arg1 ;
-(void)setParagraphWritingDirectionInRange:(NSRange)arg1 toDirection:(long long)arg2 inTextView:(id)arg3 ;
-(void)trackExtraNewLineRangeIfNecessary:(NSRange)arg1 ;
-(void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(NSRange)arg1 textStorage:(id)arg2 textView:(id)arg3 ;
-(void)removeFontsAndColorsForRange:(NSRange)arg1 inTextStorage:(id)arg2 ;
-(void)setTypingAttributesForUndo:(id)arg1 ;
-(void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1 ;
-(void)refreshTypingAttributesForTextView:(id)arg1 textStorage:(id)arg2 ;
-(id)scaleFont:(id)arg1 withScale:(double)arg2 ;
-(void)scaleFontPointSize:(double)arg1 range:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(void)superscriptUpdate:(/*^block*/id)arg1 range:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(id)rangesWithCutOutAttachmentsFromRange:(NSRange)arg1 textStorage:(id)arg2 ;
-(void)fadeTextHighlightInTextStorage:(id)arg1 ;
-(void)applyAuthorHighlightsWithPercentage:(double)arg1 forRange:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(void)setAlwaysHighlightAuthorEdits:(BOOL)arg1 ;
-(NSRange)cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(NSRange)arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long*)arg5 ;
-(BOOL)disableAddingExtraLinesIfNeeded;
-(NSRange)addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(NSRange)arg2 actualLengthIncrease:(long long*)arg3 ;
-(void)updateAttachmentsInNote;
-(void)indentRange:(NSRange)arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(id)arg4 ;
-(long long)setTextStyle:(unsigned)arg1 removeExtraStyling:(BOOL)arg2 range:(NSRange)arg3 inTextStorage:(id)arg4 ;
-(BOOL)isAutoListInsertionDisabled;
-(void)setSelectionToIndex:(unsigned long long)arg1 onTextView:(id)arg2 ;
-(BOOL)insertedSpaceInTextView:(id)arg1 replacementRange:(NSRange)arg2 ;
-(BOOL)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(id)arg1 textStorage:(id)arg2 paragraphRange:(NSRange)arg3 andLocation:(unsigned long long)arg4 ;
-(BOOL)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(id)arg1 textStorage:(id)arg2 rangeToBeDeleted:(NSRange)arg3 blockBeforeEndEditing:(/*^block*/id)arg4 ;
-(BOOL)fullTextStylingRefreshScheduled;
-(void)setFullTextStylingRefreshScheduled:(BOOL)arg1 ;
-(id)strippedTypingAttributesAtStartOfParagraph:(id)arg1 atTheEndOfDocument:(BOOL)arg2 isTyping:(BOOL)arg3 ;
-(void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(BOOL)arg2 withLayoutManager:(id)arg3 firstVisibleCharLocation:(unsigned long long)arg4 ;
-(void)filterAttachmentsForPrintingInAttributedString:(id)arg1 ;
-(void)targetedRefreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2 firstVisibleCharLocation:(unsigned long long)arg3 ;
-(void)setEmptyTextStorage:(NSTextStorage *)arg1 ;
-(NSTextStorage *)emptyTextStorage;
-(void)setTrackedRangesForAddedExtraNewlines:(NSMutableArray *)arg1 ;
-(BOOL)trackAddedExtraNewlineRanges;
-(NSMutableArray *)trackedRangesForAddedExtraNewlines;
-(void)createToDoItemForCharacterRange:(NSRange)arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3 ;
-(void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3 ;
-(unsigned long long)overrideAppearanceType;
-(NSRange)numberListsInAttributedString:(id)arg1 inRange:(NSRange)arg2 ;
-(BOOL)shouldHighlightStyleAsLink:(unsigned)arg1 ;
-(void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned)paragraphStyleForRange:(NSRange)arg1 inTextView:(id)arg2 inTextStorage:(id)arg3 ;
-(long long)writingDirectionForRange:(NSRange)arg1 inTextView:(id)arg2 inTextStorage:(id)arg3 ;
-(BOOL)canIndentTextView:(id)arg1 byDelta:(long long)arg2 ;
-(NSRange)firstParagraphForSetListStyleRange:(NSRange)arg1 inTextStorage:(id)arg2 ;
-(BOOL)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2 ;
-(void)setTypingTextStyle:(unsigned)arg1 textView:(id)arg2 ;
-(BOOL)isTodoDoneRange:(NSRange)arg1 inTextStorage:(id)arg2 ;
-(void)superscriptDelta:(long long)arg1 range:(NSRange)arg2 inTextStorage:(id)arg3 ;
-(void)unscriptRange:(NSRange)arg1 inTextStorage:(id)arg2 ;
-(BOOL)isHighlightingTextInTextStorage:(id)arg1 ;
-(void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3 ;
-(void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2 ;
-(BOOL)insertNewlineForSpecialCasesInTextView:(id)arg1 ;
-(void)insertedText:(id)arg1 replacementRange:(NSRange)arg2 inTextView:(id)arg3 ;
-(BOOL)deleteBackwardForSpecialCasesInTextView:(id)arg1 ;
-(BOOL)deleteWordBackwardForSpecialCasesInTextView:(id)arg1 ;
-(void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(BOOL)arg2 withLayoutManager:(id)arg3 ;
-(void)setTrackAddedExtraNewlineRanges:(BOOL)arg1 ;
-(void)styleDataDetectorTypesForPreviewInTextStorage:(id)arg1 ;
-(void)fixModelAttributesInTextStorage:(id)arg1 inRange:(NSRange)arg2 ;
-(ICAttachmentInsertionController *)attachmentInsertionController;
-(void)setAttachmentInsertionController:(ICAttachmentInsertionController *)arg1 ;
-(BOOL)userChangedWritingDirection;
-(void)setUserChangedWritingDirection:(BOOL)arg1 ;
-(void)setOverrideAppearanceType:(unsigned long long)arg1 ;
-(unsigned long long)pauseMergeForScrollingCounter;
-(void)setPauseMergeForScrollingCounter:(unsigned long long)arg1 ;
-(BOOL)shouldMergeNoteAfterScrolling;
-(void)setShouldMergeNoteAfterScrolling:(BOOL)arg1 ;
-(void)setIsAutoListInsertionDisabled:(BOOL)arg1 ;
-(id)imageInfoForTrackedParagraph:(id)arg1 textView:(id)arg2 characterRangeToRender:(NSRange)arg3 visibleRectToRender:(CGRect)arg4 ;
-(void)addImageViewsBeforeSortIfNecessaryForTrackedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(CGPoint)arg3 todoUUIDsToImageViews:(id)arg4 ;
-(void)addImageViewsAfterSortIfNecessaryForTrackedInfos:(id)arg1 existingInfos:(id)arg2 textView:(id)arg3 textContainerOrigin:(CGPoint)arg4 todoUUIDsToImageViews:(id)arg5 ;
-(void)setFinalFramesForSortedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(CGPoint)arg3 todoUUIDsToImageViews:(id)arg4 ;
@end
