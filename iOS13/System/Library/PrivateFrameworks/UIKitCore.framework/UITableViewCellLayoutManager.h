/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface UITableViewCellLayoutManager : NSObject
+(void)initialize;
+(BOOL)requiresLegacyLayout;
+(id)sharedLayoutManager;
+(id)layoutManagerForTableViewCellStyle:(long long)arg1 ;
+(id)_externalTextColor;
+(id)_externalDetailTextColor;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void)layoutSubviewsOfCell:(id)arg1 ;
-(CGRect)standardLayoutImageViewFrameForCell:(id)arg1 forSizing:(BOOL)arg2 ;
-(CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(BOOL)_editControlOnSameSideAsReorderControlForCell:(id)arg1 ;
-(BOOL)reorderControlShouldAppearForCell:(id)arg1 ;
-(CGRect)_reorderControlRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_adjustedBackgroundContentRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 ;
-(BOOL)accessoryShouldAppearForCell:(id)arg1 ;
-(BOOL)editingAccessoryShouldAppearForCell:(id)arg1 ;
-(BOOL)reorderSeparatorShouldAppearForCell:(id)arg1 ;
-(CGRect)_reorderSeparatorRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_adjustedBackgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 ;
-(BOOL)shouldStackAccessoryViewVerticallyForCell:(id)arg1 editing:(BOOL)arg2 ;
-(CGRect)_editingAccessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(BOOL)shouldApplyAccessibilityLargeTextLayoutForCell:(id)arg1 ;
-(id)customAccessoryViewForCell:(id)arg1 editing:(BOOL)arg2 ;
-(double)contentIndentationForCell:(id)arg1 ;
-(BOOL)shouldIncreaseMarginForImageViewInCell:(id)arg1 ;
-(double)_contentRectLeadingOffsetForCell:(id)arg1 editingState:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 rowWidth:(double)arg3 ;
-(CGRect)_accessoryRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(BOOL)editControlShouldAppearForCell:(id)arg1 ;
-(CGRect)_editControlRectForCell:(id)arg1 offscreen:(BOOL)arg2 ;
-(CGRect)_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 rowWidth:(double)arg4 ;
-(CGRect)_legacy_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 rowWidth:(double)arg4 ;
-(CGRect)_backgroundRectForCell:(id)arg1 forIndentedState:(BOOL)arg2 ;
-(CGRect)_contentRectForCell:(id)arg1 forEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)editControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)editControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(BOOL)editControlShouldFadeForCell:(id)arg1 ;
-(CGRect)reorderControlStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)reorderControlEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)reorderControlShouldFadeForCell:(id)arg1 ;
-(CGRect)reorderSeparatorStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)reorderSeparatorEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)reorderSeparatorShouldFadeForCell:(id)arg1 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)accessoryShouldFadeForCell:(id)arg1 ;
-(CGRect)editingAccessoryStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(CGRect)editingAccessoryEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 showingDeleteConfirmation:(BOOL)arg3 ;
-(BOOL)editingAccessoryShouldFadeForCell:(id)arg1 ;
-(void)_resetTextLabelDefaultFontInCell:(id)arg1 ;
-(id)defaultTextLabelFontForCell:(id)arg1 ;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultLabelForCell:(id)arg1 ofClass:(Class)arg2 ;
-(id)defaultImageViewForCell:(id)arg1 ;
-(id)defaultLabelForCell:(id)arg1 ;
-(id)defaultBadgeForCell:(id)arg1 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 rowWidth:(double)arg3 ;
-(void)_modern_layoutSubviewsOfCell:(id)arg1 ;
-(void)_legacy_layoutSubviewsOfCell:(id)arg1 ;
-(CGRect)backgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)selectedBackgroundEndingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2 ;
-(void)getTextLabelRect:(CGRect*)arg1 detailTextLabelRect:(CGRect*)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(BOOL)arg5 ;
-(void)_layoutFocusGuidesForCell:(id)arg1 ;
-(void)_legacy_cell:(id)arg1 willTransitionToState:(unsigned long long)arg2 ;
-(CGRect)backgroundStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(void)_modern_cell:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(void)_legacy_cell:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(void)_updateFocusGuidesForCell:(id)arg1 editing:(BOOL)arg2 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(double)requiredIndentationForFirstLineOfCell:(id)arg1 rowWidth:(double)arg2 forSizing:(BOOL)arg3 ;
-(CGSize)optimumSizeForLabel:(id)arg1 inTotalTextRect:(CGRect)arg2 minimizeWidthOnVerticalOverflow:(BOOL)arg3 preferSingleLineWidth:(BOOL)arg4 ;
-(void)_reconfigureCell:(id)arg1 ;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 ;
-(id)defaultDetailTextLabelFontForCell:(id)arg1 ;
-(id)defaultEditableTextFieldForCell:(id)arg1 ;
-(id)imageViewForCell:(id)arg1 ;
-(id)textLabelForCell:(id)arg1 ;
-(id)detailTextLabelForCell:(id)arg1 ;
-(id)editableTextFieldForCell:(id)arg1 ;
-(id)badgeForCell:(id)arg1 ;
-(void)cell:(id)arg1 willTransitionToState:(unsigned long long)arg2 ;
-(void)cell:(id)arg1 didTransitionToState:(unsigned long long)arg2 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(BOOL)arg2 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forDisplayOfDeleteConfirmation:(BOOL)arg2 ;
-(CGRect)textRectForCell:(id)arg1 ;
-(CGRect)textRectForCell:(id)arg1 rowWidth:(double)arg2 ;
-(CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2 ;
-(void)prepareCellForReuse:(id)arg1 ;
@end

