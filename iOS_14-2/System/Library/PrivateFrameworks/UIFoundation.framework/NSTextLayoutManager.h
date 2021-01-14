/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextViewportElementProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSTextSelectionDataSource.h>

@protocol NSTextLayoutManagerDelegatePrivate, NSTextLocation;
@class NSTextRange, NSTextContentManager, NSArray, NSTextViewportLayoutController, NSLayoutManager, NSTextSelectionNavigation, _NSTextAttributeStorage, NSTextParagraph, NSTextContainer, NSOperationQueue, NSString;

@interface NSTextLayoutManager : NSObject <NSTextViewportElementProvider, NSSecureCoding, NSTextSelectionDataSource> {

	NSTextContentManager* _textContentManager;
	NSArray* _textContainers;
	NSTextViewportLayoutController* _viewportLayoutController;
	long long _applicationFrameworkContext;
	id<NSTextLayoutManagerDelegatePrivate> _delegate;
	NSLayoutManager* _companion;
	NSTextSelectionNavigation* _textSelectionNavigation;
	_NSTextAttributeStorage* _temporaryAttributesTable;
	BOOL _usesFontLeading;
	BOOL _limitsLayoutForSuspiciousContents;
	BOOL _usesDefaultHyphenation;
	BOOL _allowsFontSubstitutionAffectingVerticalMetrics;
	NSArray* _textSelections;
	NSTextParagraph* _textParagraphForEmptyDocument;
	BOOL _isProcessingRenderingAttributesMethod;
	SCD_Struct_NS20* _lastTextContainerEntry;
	SCD_Struct_NS21* _textContainerEntries;
	SCD_Struct_NS21* _textContainerEntriesAccessHint;
	unsigned long long _textContainerEntriesSize;
	unsigned long long _textContainerEntriesCount;
	double _firstNonContiguousLayoutSegmentOriginY;
	id<NSTextLocation> _firstNonContiguousLayoutSegmentLocation;
	id<NSTextLocation> _softInvalidationLocation;
	/*^block*/id _renderingAttributesValidator;
	NSTextContainer* _templateTextContainer;
	NSOperationQueue* _layoutQueue;

}

@property (__weak) id<NSTextLayoutManagerDelegate> delegate; 
@property (assign) BOOL usesFontLeading; 
@property (assign) BOOL limitsLayoutForSuspiciousContents; 
@property (assign) BOOL usesDefaultHyphenation; 
@property (__weak,readonly) NSTextContentManager * textContentManager; 
@property (copy,readonly) NSArray * textContainers; 
@property (retain) NSTextContainer * templateTextContainer;                            //@synthesize templateTextContainer=_templateTextContainer - In the implementation block
@property (readonly) CGRect usageBoundsForLastTextContainer; 
@property (retain) NSOperationQueue * layoutQueue;                                     //@synthesize layoutQueue=_layoutQueue - In the implementation block
@property (retain) NSArray * textSelections; 
@property (readonly) NSTextSelectionNavigation * textSelectionNavigation; 
@property (copy) id renderingAttributesValidator;                                      //@synthesize renderingAttributesValidator=_renderingAttributesValidator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSTextRange * documentRange; 
+(BOOL)supportsSecureCoding;
+(BOOL)usesDefaultHyphenation;
+(id)validRenderingAttributes;
+(BOOL)_throwsOnAssertionError;
+(Class)viewportLayoutControllerClass;
+(Class)companionLayoutManagerClass;
+(id)linkRenderingAttributes;
+(BOOL)_validatesInternalCaches;
+(void)_setThrowsOnAssertionError:(BOOL)arg1 ;
+(void)_setValidatesInternalCaches:(BOOL)arg1 ;
-(void)setApplicationFrameworkContext:(long long)arg1 ;
-(id)init;
-(BOOL)allowsFontSubstitutionAffectingVerticalMetrics;
-(id<NSTextLayoutManagerDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)replaceCharactersInRange:(id)arg1 withAttributedString:(id)arg2 ;
-(BOOL)usesDefaultHyphenation;
-(void)setDelegate:(id<NSTextLayoutManagerDelegate>)arg1 ;
-(void)synchronize;
-(void)setUsesFontLeading:(BOOL)arg1 ;
-(void)setAllowsFontSubstitutionAffectingVerticalMetrics:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLayoutQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)layoutQueue;
-(long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)textContainerForLocation:(id)arg1 ;
-(NSTextContentManager *)textContentManager;
-(NSTextRange *)documentRange;
-(id)locationFromLocation:(id)arg1 offset:(long long)arg2 ;
-(void)textContainerChangedGeometry:(id)arg1 ;
-(id)renderingAttributesForLink:(id)arg1 atLocation:(id)arg2 ;
-(void)_prepareAttributedString:(id)arg1 forTextLayoutFragment:(id)arg2 ;
-(void)_configureCoreTypesetter:(id)arg1 forTextParagraph:(id)arg2 ;
-(void)updateLayoutWithTextLayoutFragment:(id)arg1 ;
-(BOOL)isCountableDataSource;
-(void)enumerateTemporaryAttributesFromLocation:(id)arg1 reverse:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)enumerateRenderingAttributesFromLocation:(id)arg1 reverse:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)baseLocation;
-(id)_selectionAndMarkedTextAttributesForLocation:(id)arg1 inTextRange:(id)arg2 effectiveTextRange:(out id*)arg3 ;
-(void)_commonInit;
-(void)addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(void)removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2 ;
-(void)setRenderingAttributes:(id)arg1 forTextRange:(id)arg2 ;
-(void)invalidateRenderingAttributesForTextRange:(id)arg1 ;
-(void)_fixSelectionAfterChangeInCharacterRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(void)setLimitsLayoutForSuspiciousContents:(BOOL)arg1 ;
-(long long)baseWritingDirectionAtLocation:(id)arg1 ;
-(void)enumerateCaretOffsetsInLineFragmentAtLocation:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSTextSelectionNavigation *)textSelectionNavigation;
-(long long)layoutOrientationAtLocation:(id)arg1 ;
-(void)enumerateSubstringsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)lineFragmentRangeForPoint:(CGPoint)arg1 inContainerAtLocation:(id)arg2 ;
-(void)enumerateContainerBoundariesFromLocation:(id)arg1 reverse:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSArray *)textSelections;
-(BOOL)limitsLayoutForSuspiciousContents;
-(id)textRangeForSelectionGranularity:(long long)arg1 enclosingLocation:(id)arg2 ;
-(BOOL)usesFontLeading;
-(void)setTextContentManager:(NSTextContentManager *)arg1 ;
-(void)setTemplateTextContainer:(NSTextContainer *)arg1 ;
-(void)invalidateLayoutForRange:(id)arg1 ;
-(void)_invalidateTextParagraphForEmptyDocument;
-(NSTextContainer *)templateTextContainer;
-(void)_addTextContainerFromTemplate:(id)arg1 ;
-(id)viewportLayoutController;
-(CGRect)usageBoundsInTextContainerAtIndex:(long long)arg1 ;
-(void)updateLayoutWithTextLayoutFragment:(id)arg1 addition:(BOOL)arg2 ;
-(id)enumerateTextLayoutFragmentsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)_removeTextContainersUntilCondition:(/*^block*/id)arg1 ;
-(void)ensureLayoutForBounds:(CGRect)arg1 ;
-(void)setTextSelections:(NSArray *)arg1 ;
-(id)_textParagraphForEmptyDocument;
-(void)replaceCharactersInRange:(id)arg1 withElements:(id)arg2 ;
-(id)enumerateTextLayoutFragmentsInTextRange:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setTemporaryAttributes:(id)arg1 forTextRange:(id)arg2 ;
-(void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3 ;
-(id)temporaryAttributesTable;
-(void)removeTemporaryAttribute:(id)arg1 forTextRange:(id)arg2 ;
-(void)invalidateTemporaryAttributesForTextRange:(id)arg1 ;
-(id)adjustedTextSelectionsForEditingContextFromTextSelections:(id)arg1 ;
-(id)_textLayoutFragmentAtLocation:(id)arg1 ;
-(id)_textRangeForDoubleClickAtLocation:(id)arg1 ;
-(id)_textSelectionsFromTextView;
-(id)textLayoutFragmentForPosition:(CGPoint)arg1 inTextContainerAtIndex:(long long)arg2 ;
-(BOOL)_hasLayoutForLocation:(id)arg1 ;
-(NSArray *)textContainers;
-(id)_textLineFragmentAtLocation:(id)arg1 textLayoutFragment:(out id*)arg2 rangeDelta:(out long long*)arg3 ;
-(id)_textViewRespondingToSelector:(SEL)arg1 ;
-(void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(BOOL)_validateTextContainerEntries;
-(double)_estimatedVerticalSizeForTextRange:(id)arg1 adjustedTextRange:(out id*)arg2 ;
-(void)_removeTextContainer;
-(id)companionLayoutManager;
-(void)replaceTextContentManager:(id)arg1 ;
-(id)rangeForTextContainerAtIndex:(long long)arg1 ;
-(void)ensureLayoutForRange:(id)arg1 ;
-(CGRect)usageBoundsForLastTextContainer;
-(id)renderingColorForDocumentColor:(id)arg1 atLocation:(id)arg2 ;
-(id)renderingAttributesValidator;
-(void)processLayoutInvalidationForTextRange:(id)arg1 synchronizing:(BOOL)arg2 ;
-(id)textLayoutFragmentForLocation:(id)arg1 ;
-(void)finalizeAndPushLastTextContainer;
-(void)enumerateTextSegmentsInRange:(id)arg1 type:(long long)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)_shouldDrawTextCorrectionMarkerWithType:(long long)arg1 inRange:(id)arg2 ;
-(void)setRenderingAttributesValidator:(id)arg1 ;
-(long long)applicationFrameworkContext;
-(void)setUsesDefaultHyphenation:(BOOL)arg1 ;
-(void)dealloc;
@end

