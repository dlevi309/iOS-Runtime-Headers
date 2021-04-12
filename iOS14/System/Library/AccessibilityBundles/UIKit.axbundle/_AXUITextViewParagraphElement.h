/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>
#import <UIKit/UIAccessibilityElementDelegate.h>

@class NSString, NSArray;

@interface _AXUITextViewParagraphElement : UIAccessibilityElement <UIAccessibilityElementDelegate> {

	NSString* __accessibilityContent;
	NSArray* _links;
	NSRange _textRange;

}

@property (nonatomic,readonly) NSRange textRange;                           //@synthesize textRange=_textRange - In the implementation block
@property (nonatomic,retain) NSString * _accessibilityContent;              //@synthesize _accessibilityContent=__accessibilityContent - In the implementation block
@property (nonatomic,readonly) NSArray * links;                             //@synthesize links=_links - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityLabel;
-(CGPoint)accessibilityActivationPoint:(id)arg1 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)accessibilityElements;
-(BOOL)accessibilityRespondsToUserInteraction;
-(id)_accessibilityUserTestingChildren;
-(NSRange)textRange;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(id)accessibilityHint;
-(BOOL)accessibilityActivate;
-(NSArray *)links;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(id)initWithAccessibilityContainer:(id)arg1 textRange:(NSRange)arg2 links:(id)arg3 ;
-(void)set_accessibilityContent:(NSString *)arg1 ;
-(NSString *)_accessibilityContent;
@end

