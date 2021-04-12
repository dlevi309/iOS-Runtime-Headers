/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIPDFPageViewAccessibility_super.h>

@interface UIPDFPageViewAccessibility : __UIPDFPageViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(CGRect)accessibilityFrameForLineNumber:(long long)arg1 ;
-(id)accessibilityContentForLineNumber:(long long)arg1 ;
-(id)accessibilityPageContent;
-(CGPDFPageRef)_axPageRef;
-(id)_axLineSelections;
-(CGPDFSelectionRef)_lineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
@end

