/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <WebCore/WebAccessibilityObjectWrapperBase.h>

@interface WebAccessibilityObjectWrapper : WebAccessibilityObjectWrapperBase {

	int m_isAccessibilityElement;
	unsigned long long m_accessibilityTraitsFromAncestor;

}
-(id)accessibilityLabel;
-(void)detach;
-(BOOL)isAccessibilityElement;
-(id)stringForRange:(NSRange)arg1 ;
-(id)attachmentView;
-(id)accessibilityFocusedUIElement;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(unsigned long long)accessibilityTraits;
-(id)description;
-(id)accessibilityValue;
-(BOOL)isAttachment;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityHeaderElements;
-(id)accessibilityTextualContext;
-(CGRect)accessibilityFrame;
-(long long)accessibilityElementCount;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityHint;
-(id)accessibilityLanguage;
-(unsigned long long)_axLinkTrait;
-(id)accessibilityContainer;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)initWithAccessibilityObject:(AXCoreObject*)arg1 ;
-(void)postFocusChangeNotification;
-(void)postSelectedTextChangeNotification;
-(void)postLayoutChangeNotification;
-(unsigned long long)_axHeaderTrait;
-(CGPoint)accessibilityActivationPoint;
-(void)postLiveRegionChangeNotification;
-(void)postLiveRegionCreatedNotification;
-(void)postChildrenChangedNotification;
-(void)postLoadCompleteNotification;
-(void)postValueChangedNotification;
-(void)postInvalidStatusChangedNotification;
-(void)postExpandedChangedNotification;
-(unsigned long long)_axImageTrait;
-(BOOL)_prepareAccessibilityCall;
-(BOOL)accessibilityCanFuzzyHitTest;
-(unsigned long long)_axVisitedTrait;
-(id)accessibilityPostProcessHitTest:(CGPoint)arg1 ;
-(unsigned long long)_axContainedByListTrait;
-(unsigned long long)_axContainedByTableTrait;
-(unsigned long long)_axTextEntryTrait;
-(BOOL)_accessibilityIsLandmarkRole:(int)arg1 ;
-(unsigned long long)_axContainedByLandmarkTrait;
-(unsigned long long)_axContainedByFieldsetTrait;
-(unsigned long long)_axHasTextCursorTrait;
-(unsigned long long)_axTextOperationsAvailableTrait;
-(unsigned long long)_axTextAreaTrait;
-(unsigned long long)_axSecureTextFieldTrait;
-(unsigned long long)_axSearchFieldTrait;
-(unsigned long long)_axWebContentTrait;
-(unsigned long long)_accessibilityTextEntryTraits;
-(unsigned long long)_axTabButtonTrait;
-(unsigned long long)_axButtonTrait;
-(unsigned long long)_axToggleTrait;
-(unsigned long long)_axMenuItemTrait;
-(unsigned long long)_axPopupButtonTrait;
-(unsigned long long)_axRadioButtonTrait;
-(unsigned long long)_axStaticTextTrait;
-(unsigned long long)_axAdjustableTrait;
-(unsigned long long)_axUpdatesFrequentlyTrait;
-(unsigned long long)_axSelectedTrait;
-(unsigned long long)_axNotEnabledTrait;
-(BOOL)isSVGGroupElement;
-(unsigned long long)_accessibilityTraitsFromAncestors;
-(BOOL)containsUnnaturallySegmentedChildren;
-(BOOL)accessibilityIsWebInteractiveVideo;
-(BOOL)determineIsAccessibilityElement;
-(AccessibilityTableCell*)tableCellParent;
-(id)interactiveVideoDescription;
-(BOOL)stringValueShouldBeUsedInLabel;
-(AccessibilityTable*)tableParent;
-(BOOL)_accessibilityIsStrongPasswordField;
-(BOOL)accessibilityIsShowingValidationMessage;
-(void)postScrollStatusChangeNotification;
-(CGPoint)_accessibilityScrollPosition;
-(CGPoint)_accessibilityConvertPointToViewSpace:(CGPoint)arg1 ;
-(id)_accessibilityWebDocumentView;
-(id)_accessibilityNextElementsWithCount:(unsigned)arg1 ;
-(id)_accessibilityPreviousElementsWithCount:(unsigned)arg1 ;
-(void)accessibilityModifySelection:(unsigned char)arg1 increase:(BOOL)arg2 ;
-(Optional<WebCore::SimpleRange>*)rangeForTextMarkers:(id)arg1 ;
-(BOOL)_addAccessibilityObject:(AccessibilityObject*)arg1 toTextMarkerArray:(id)arg2 ;
-(NSRange)_convertToNSRange:(const SimpleRange*)arg1 ;
-(id)textMarkersForRange:(const Optional<WebCore::SimpleRange>*)arg1 ;
-(id)textMarkerRange;
-(long long)positionForTextMarker:(id)arg1 ;
-(id)accessibilityIdentifier;
-(Optional<WebCore::SimpleRange>*)_convertToDOMRange:(NSRange)arg1 ;
-(id)arrayOfTextForTextMarkers:(id)arg1 attributed:(BOOL)arg2 ;
-(id)textMarkerForPosition:(long long)arg1 ;
-(id)_stringFromStartMarker:(id)arg1 toEndMarker:(id)arg2 attributed:(BOOL)arg3 ;
-(id)_stringForRange:(NSRange)arg1 attributed:(BOOL)arg2 ;
-(id)textMarkerRangeForSelection;
-(id)stringForTextMarkers:(id)arg1 ;
-(id)nextMarkerForCharacterOffset:(CharacterOffset*)arg1 ;
-(id)previousMarkerForCharacterOffset:(CharacterOffset*)arg1 ;
-(Optional<WebCore::SimpleRange>*)rangeFromMarkers:(id)arg1 withText:(id)arg2 ;
-(id)elementsForRange:(NSRange)arg1 ;
-(AXCoreObject*)detailParentForSummaryObject:(AXCoreObject*)arg1 ;
-(AXCoreObject*)treeItemParentForObject:(AXCoreObject*)arg1 ;
-(void)enableAttributeCaching;
-(void)disableAttributeCaching;
-(CGPathRef)_accessibilityPath;
-(id)_accessibilityWebRoleAsString;
-(BOOL)accessibilityHasPopup;
-(id)accessibilityPopupValue;
-(NSRange)elementTextRange;
-(BOOL)accessibilityIsDialog;
-(id)_accessibilityTreeAncestor;
-(id)_accessibilityDescriptionListAncestor;
-(id)_accessibilityListAncestor;
-(id)_accessibilityArticleAncestor;
-(id)_accessibilityLandmarkAncestor;
-(id)_accessibilityTableAncestor;
-(BOOL)_accessibilityIsInTableCell;
-(id)_accessibilityFieldsetAncestor;
-(id)_accessibilityFrameAncestor;
-(BOOL)accessibilityIsMediaPlaying;
-(BOOL)accessibilityIsMediaMuted;
-(void)accessibilityToggleMuteForMedia;
-(void)accessibilityVideoEnterFullscreen;
-(BOOL)_accessibilityHasTouchEventListener;
-(BOOL)_accessibilityValueIsAutofilled;
-(id)accessibilityRoleDescription;
-(id)accessibilityTitleElement;
-(id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2 ;
-(unsigned long long)accessibilityRowCount;
-(unsigned long long)accessibilityColumnCount;
-(unsigned long long)accessibilityARIARowCount;
-(unsigned long long)accessibilityARIAColumnCount;
-(unsigned long long)accessibilityARIARowIndex;
-(unsigned long long)accessibilityARIAColumnIndex;
-(NSRange)accessibilityRowRange;
-(NSRange)accessibilityColumnRange;
-(unsigned long long)accessibilityBlockquoteLevel;
-(id)accessibilityDatetimeValue;
-(id)accessibilityPlaceholderValue;
-(id)accessibilityColorStringValue;
-(BOOL)accessibilityIsIndeterminate;
-(BOOL)accessibilityIsAttachmentElement;
-(BOOL)accessibilityIsComboBox;
-(BOOL)accessibilityIsInDescriptionListTerm;
-(CGRect)_accessibilityRelativeFrame;
-(BOOL)accessibilityIsInDescriptionListDefinition;
-(CGRect)accessibilityElementRect;
-(CGRect)accessibilityVisibleContentRect;
-(id)_accessibilityResolvedEditingStyles;
-(BOOL)accessibilityRequired;
-(BOOL)accessibilityCanSetValue;
-(id)accessibilityLinkRelationshipType;
-(id)accessibilityFlowToElements;
-(id)accessibilityLinkedElement;
-(BOOL)_accessibilityActivate;
-(id)selectionRangeString;
-(id)_accessibilityParentForSubview:(id)arg1 ;
-(CGSize)_accessibilityScrollSize;
-(CGRect)_accessibilityScrollVisibleRect;
-(AXCoreObject*)detailParentForObject:(AccessibilityObject*)arg1 ;
-(id)accessibilityFindMatchingObjects:(id)arg1 ;
-(void)accessibilityIncreaseSelection:(unsigned char)arg1 ;
-(void)_accessibilitySetFocus:(BOOL)arg1 ;
-(void)accessibilityDecreaseSelection:(unsigned char)arg1 ;
-(void)accessibilityMoveSelectionToMarker:(id)arg1 ;
-(void)_accessibilitySetValue:(id)arg1 ;
-(id)accessibilityObjectForTextMarker:(id)arg1 ;
-(id)attributedStringForRange:(NSRange)arg1 ;
-(id)attributedStringForElement;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)_accessibilityScrollToVisible;
-(id)accessibilityURL;
-(BOOL)accessibilityReplaceRange:(NSRange)arg1 withText:(id)arg2 ;
-(BOOL)accessibilityInsertText:(id)arg1 ;
-(id)selectedTextMarker;
-(id)lineEndMarkerForMarker:(id)arg1 ;
-(id)lineStartMarkerForMarker:(id)arg1 ;
-(id)nextMarkerForMarker:(id)arg1 ;
-(id)misspellingTextMarkerRange:(id)arg1 forward:(BOOL)arg2 ;
-(id)previousMarkerForMarker:(id)arg1 ;
-(CGRect)frameForTextMarkers:(id)arg1 ;
-(id)textMarkerRangeFromMarkers:(id)arg1 withText:(id)arg2 ;
-(id)textRectsFromMarkers:(id)arg1 withText:(id)arg2 ;
-(id)textMarkerForPoint:(CGPoint)arg1 ;
-(long long)lengthForTextMarkers:(id)arg1 ;
-(id)startOrEndTextMarkerForTextMarkers:(id)arg1 isStart:(BOOL)arg2 ;
-(id)textMarkerRangeForMarkers:(id)arg1 ;
-(id)accessibilityExpandedTextValue;
-(double)_accessibilityMinValue;
-(double)_accessibilityMaxValue;
-(id)accessibilitySpeechHint;
-(BOOL)accessibilityARIAIsBusy;
-(id)accessibilityARIALiveRegionStatus;
-(id)accessibilityARIARelevantStatus;
-(BOOL)accessibilityARIALiveRegionIsAtomic;
-(BOOL)accessibilitySupportsARIAPressed;
-(BOOL)accessibilityIsPressed;
-(BOOL)accessibilitySupportsARIAExpanded;
-(BOOL)accessibilityIsExpanded;
-(id)accessibilityInvalidStatus;
-(void)dealloc;
-(id)accessibilityARIACurrentStatus;
-(id)accessibilitySortDirection;
-(id)accessibilityMathRootIndexObject;
-(id)accessibilityMathRadicandObject;
-(id)accessibilityMathNumeratorObject;
-(id)accessibilityMathDenominatorObject;
-(id)accessibilityMathBaseObject;
-(id)accessibilityMathSubscriptObject;
-(id)accessibilityMathSuperscriptObject;
-(id)accessibilityMathOverObject;
-(id)accessibilityMathUnderObject;
-(id)accessibilityPlatformMathSubscriptKey;
-(id)accessibilityPlatformMathSuperscriptKey;
-(id)accessibilityMathPostscripts;
-(id)accessibilityMathType;
-(id)accessibilityMathPrescripts;
-(id)accessibilityMathFencedOpenString;
-(id)accessibilityMathFencedCloseString;
-(BOOL)accessibilityIsMathTopObject;
-(long long)accessibilityMathLineThickness;
-(CGPoint)accessibilityClickPoint;
@end

