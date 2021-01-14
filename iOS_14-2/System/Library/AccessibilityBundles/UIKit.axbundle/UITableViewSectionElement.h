/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSection:(long long)arg1 ;
-(BOOL)isAccessibilityElement;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(long long)section;
-(id)accessibilityElements;
-(void)accessibilityScrollToVisibleWithChild:(id)arg1 ;
-(BOOL)accessibilityScrollToVisible;
-(BOOL)isHeader;
-(id)description;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(void)setIsHeader:(BOOL)arg1 ;
-(id)accessibilityIdentifier;
-(BOOL)_accessibilityIsNotFirstElement;
-(void)dealloc;
-(void)_accessibilityClearChildren;
-(void)updateMockView:(id)arg1 ;
-(id)accessibilityChildren;
-(void)_acccessibilityClearChildCache;
-(id)_textChildWithTitle:(id)arg1 ;
-(id)_accessibilityAccessibleElementsInView:(id)arg1 ;
@end

