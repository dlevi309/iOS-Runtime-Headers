/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement {

	NSArray* _representedElements;

}

@property (nonatomic,retain) NSArray * representedElements;              //@synthesize representedElements=_representedElements - In the implementation block
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(void)setRepresentedElements:(NSArray *)arg1 ;
-(NSArray *)representedElements;
-(id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2 ;
-(void)addRepresentedObject:(id)arg1 ;
@end

