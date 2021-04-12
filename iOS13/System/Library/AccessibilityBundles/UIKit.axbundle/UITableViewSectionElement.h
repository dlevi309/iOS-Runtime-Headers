/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementMockViewDelegateProtocol.h>

@class NSMutableArray;

@interface UITableViewSectionElement : UIAccessibilityElement <UIAccessibilityElementMockViewDelegateProtocol> {

	BOOL _isHeader;
	long long _section;
	NSMutableArray* _children;

}

@property (assign,nonatomic) long long section;              //@synthesize section=_section - In the implementation block
@property (assign,nonatomic) BOOL isHeader;                  //@synthesize isHeader=_isHeader - In the implementation block
-(void)dealloc;
-(id)description;
-(CGRect)accessibilityFrame;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(id)accessibilityElements;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(long long)section;
-(BOOL)isHeader;
-(void)setIsHeader:(BOOL)arg1 ;
-(void)setSection:(long long)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)accessibilityScrollToVisible;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)_accessibilityClearChildren;
-(id)accessibilityChildren;
-(void)updateMockView:(id)arg1 ;
-(void)_acccessibilityClearChildCache;
-(id)_textChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
@end

