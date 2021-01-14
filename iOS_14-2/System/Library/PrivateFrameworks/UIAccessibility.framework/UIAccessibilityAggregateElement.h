/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSArray;

@interface UIAccessibilityAggregateElement : UIAccessibilityElement {

	NSArray* _representedElements;

}

@property (nonatomic,retain) NSArray * representedElements;              //@synthesize representedElements=_representedElements - In the implementation block
-(id)accessibilityLabel;
-(void)setRepresentedElements:(NSArray *)arg1 ;
-(NSArray *)representedElements;
-(id)initWithAccessibilityContainer:(id)arg1 representedElements:(id)arg2 ;
-(void)addRepresentedObject:(id)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 ;
-(CGRect)accessibilityFrame;
@end

