/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@interface UIAccessibilityTextLineElement : UIAccessibilityElement {

	NSRange _range;
	CGRect _bounds;

}

@property (assign,nonatomic) NSRange textRange;              //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) CGRect textBounds;              //@synthesize bounds=_bounds - In the implementation block
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(CGRect)textBounds;
-(void)setTextBounds:(CGRect)arg1 ;
@end

