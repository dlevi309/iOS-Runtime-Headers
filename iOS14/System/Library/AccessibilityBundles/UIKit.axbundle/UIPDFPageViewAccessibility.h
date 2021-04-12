/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIPDFPageViewAccessibility_super.h>

@interface UIPDFPageViewAccessibility : __UIPDFPageViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(BOOL)isAccessibilityElement;
-(unsigned long long)accessibilityTraits;
-(long long)accessibilityLineNumberForPoint:(CGPoint)arg1 ;
-(id)accessibilityContentForLineNumber:(long long)arg1 ;
-(id)accessibilityPageContent;
-(CGRect)accessibilityFrameForLineNumber:(long long)arg1 ;
-(CGPDFPageRef)_axPageRef;
-(id)_axLineSelections;
-(CGPDFSelectionRef)_lineSelectionForSelection:(CGPDFSelectionRef)arg1 ;
@end

