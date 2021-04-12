/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UITableConstants <NSObject>
@optional
-(unsigned long long)contentClipCornersForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
-(id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2 forUserInterfaceStyle:(long long)arg3;
-(id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;
-(UIEdgeInsets*)headerFooterOffsetFromContentInsetForTableView:(id)arg1;
-(id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 userInterfaceStyle:(long long)arg2;
-(id)defaultFocusedDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedInsertImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultFocusedReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;

@required
+(id)sharedConstants;
-(double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 inTableView:(id)arg4 trailingAccessoryGroup:(BOOL)arg5;
-(id)defaultBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultSelectionTintColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDeleteImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultInsertImageForCell:(id)arg1 inTableView:(id)arg2;
-(CGSize*)defaultReorderControlSizeForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultReorderControlImageForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultMaskGradientHeightForTableView:(id)arg1;
-(double)defaultFocusedShadowRadiusForTableView:(id)arg1;
-(BOOL)reorderingCellWantsShadows:(id)arg1 inTableView:(id)arg2;
-(UIEdgeInsets*)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
-(long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;
-(id)defaultSeparatorColorForTableViewStyle:(long long)arg1;
-(double)defaultRowHeightForTableView:(id)arg1;
-(double)defaultLeadingCellMarginWidthForTableView:(id)arg1;
-(double)defaultTrailingCellMarginWidthForTableView:(id)arg1;
-(double)defaultAlphaForReorderingCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultMarginWidthForTableView:(id)arg1;
-(UIEdgeInsets*)defaultLayoutMarginsForTableView:(id)arg1;
-(double)defaultSectionHeaderHeightForTableView:(id)arg1;
-(double)defaultSectionFooterHeightForTableView:(id)arg1;
-(id)defaultBackgroundColorForTableViewStyle:(long long)arg1;
-(id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;
-(CGSize*)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultTextLabelFontForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultHighlightTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(double)minimumImageViewAndAccessoryLayoutWidthForTraitCollection:(id)arg1;
-(BOOL)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultLeadingContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultTrailingContentAccessoryPaddingForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;
-(id)defaultDetailTextFontForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultSelectionEffectsForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;
-(UIEdgeInsets*)defaultLayoutMarginsForScreen:(id)arg1 size:(CGSize)arg2;
-(BOOL)supportsUserInterfaceStyles;
-(id)defaultMultiSelectNotSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(id)defaultMultiSelectSelectedImageForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;
-(id)defaultHeaderFontForTableViewStyle:(long long)arg1;
-(id)defaultFooterFontForTableViewStyle:(long long)arg1;
-(id)defaultHeaderTextColorForTableViewStyle:(long long)arg1;
-(id)defaultFooterTextColorForTableViewStyle:(long long)arg1;
-(id)sidebarVariant;
-(id)variantForActive:(BOOL)arg1 dark:(BOOL)arg2 focused:(BOOL)arg3;
-(id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;
-(BOOL)defaultRowHeightDependsOnCellStyle;
-(double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;
-(double)defaultPaddingBetweenRowsForTableView:(id)arg1;
-(double)defaultPaddingBetweenHeaderAndRowsForTableView:(id)arg1;
-(double)defaultDetailTextLabelFontSizeForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;
-(double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(CGRect)arg2 textRect:(CGRect)arg3 isHeader:(BOOL)arg4;
-(id)defaultHeaderFontForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultFooterFontForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultHeaderTextColorForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultFooterTextColorForView:(id)arg1 inTableView:(id)arg2;
-(id)defaultHeaderFooterBackgroundColorForView:(id)arg1 inTableView:(id)arg2;
-(CGRect*)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;
-(double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;

@end

