/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementDelegate.h>

@class NSArray, NSString;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate> {

	NSArray* _links;
	NSRange _textRange;

}

@property (nonatomic,readonly) NSRange textRange;                   //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)accessibilityFrame;
-(id)accessibilityHint;
-(BOOL)accessibilityRespondsToUserInteraction;
-(BOOL)accessibilityActivate;
-(id)accessibilityElements;
-(NSRange)textRange;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityUserTestingChildren;
-(CGPoint)accessibilityActivationPoint:(id)arg1 ;
-(id)accessibilityLabel:(id)arg1 ;
-(CGRect)accessibilityFrame:(id)arg1 ;
-(NSArray *)links;
-(id)initWithAccessibilityContainer:(id)arg1 textRange:(NSRange)arg2 links:(id)arg3 ;
@end

