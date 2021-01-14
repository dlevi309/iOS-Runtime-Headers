/*
* Generated on Thursday, January 14, 2021 at 2:29:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTextRange:(NSRange)arg1 ;
-(unsigned long long)accessibilityTraits;
-(NSRange)textRange;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(CGRect)textBounds;
-(void)setTextBounds:(CGRect)arg1 ;
@end

