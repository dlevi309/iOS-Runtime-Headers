/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@interface UIApplicationAuditIssuesAccessibility : NSObject
+(id)_axAuditGetAllFontSizes;
+(id)_axAuditFindAllTablesInHierarchyForView:(id)arg1 ;
+(id)_axAuditFindAllCollectionViewsInHierarchyForView:(id)arg1 ;
+(id)_axAuditFindAllTablesInHierarchyForElements:(id)arg1 ;
+(id)_axAuditFindAllCollectionViewsInHierarchyForElements:(id)arg1 ;
+(id)_axAuditGetFontAttrFromAttributedString:(id)arg1 ;
+(id)_axAuditGetTextFromObject:(id)arg1 ;
+(id)_axAuditGetFontForElement:(id)arg1 ;
+(BOOL)_axAuditElementIsClipping:(id)arg1 ;
+(BOOL)_axAuditShouldElementBeCheckedForClipping:(id)arg1 ;
+(id)_axAuditGetIndexPathsDictionaryForCaptureActionForView:(id)arg1 ;
+(id)_axAuditGetIndexPathsDictionaryForUpdateActionForView:(id)arg1 ;
+(void)_axAuditRemoveUnsupportedCategories:(id)arg1 ;
+(id)_axAuditGetOriginalContentOffsetForView:(id)arg1 ;
+(id)_axAuditGetAllTableAndCollectionViewsForHierarchy:(id)arg1 ;
+(id)_axAuditHelperToFindRelevantSubviewsOfCellView:(id)arg1 ;
+(id)_axAuditCreateElementInfoDictionariesForSubviews:(id)arg1 ;
+(id)_axAuditGetCellReferenceMapTable;
+(void)_axAuditForHierarchy:(id)arg1 withTableOrCollectionViews:(id)arg2 performAction:(id)arg3 performBlockOnEachCell:(/*^block*/id)arg4 ;
+(id)_axAuditMatchReferenceSubviews:(id)arg1 againstNewSubviews:(id)arg2 ;
+(void)_axAuditUpdateFontsForReferenceMatches:(id)arg1 forFontSize:(id)arg2 ;
+(void)_axAuditSpinRunloopForDuration:(double)arg1 ;
+(void)_axAuditUpdateClippingStatusForReferenceMatches:(id)arg1 ;
+(void)_axAuditStoreFontsIntoDictionary:(id)arg1 forReferenceMatches:(id)arg2 ;
+(void)_axAuditStoreClippedElementsIntoSet:(id)arg1 forReferenceMatches:(id)arg2 ;
+(BOOL)_axAuditSetSwizzledImp:(/*function pointer*/void*)arg1 orOrigImp:(/*function pointer*/void*)arg2 forMethod:(objc_methodRef)arg3 withSwizzling:(BOOL)arg4 ;
+(id)_accessibilityGetAllSubviews:(id)arg1 withFiltering:(BOOL)arg2 ;
+(void)_axAuditUpdateRowHeightForTableAndCollectionViewsOfElements:(id)arg1 ;
+(void)_axAuditRemoveUIViewsFromArray:(id)arg1 usingFilter:(/*^block*/id)arg2 ;
+(id)_axAuditFindFrontmostViewControllerForHierarchy:(id)arg1 ;
+(id)_axAuditFindElementsNotSupportingDynamicText:(id)arg1 ;
+(void)_axAuditStoreFontForElement:(id)arg1 intoDictionary:(id)arg2 forCurrentFont:(id)arg3 ;
+(void)_axAuditCheckElementForClipping:(id)arg1 storeIntoSet:(id)arg2 ;
+(id)_axAuditFindDescendantInaccessibleElements:(id)arg1 honorsGroups:(BOOL)arg2 ;
+(void)_axAuditCaptureReferenceToCellsForViewHierarchy:(id)arg1 ;
+(void)_axAuditUpdateReferenceOfCellsForViewHierarchy:(id)arg1 forFontSize:(id)arg2 ;
+(id)_axAuditDereferenceCellsForViewHierarchy:(id)arg1 ;
+(void)_axAuditUIKitShouldReportFontSize:(id)arg1 ;
+(BOOL)_axAuditSwizzleAwayContentSize:(BOOL)arg1 ;
@end

